// Class: GeilivableLottery


/* GeilivableLottery::GetTelSexyString() */

undefined8 GeilivableLottery::GetTelSexyString(void)

{
  undefined8 in_x8;
  
  FUN_05477b24();
  return in_x8;
}


/* GeilivableLottery::GetEmailSexyString() */

undefined8 GeilivableLottery::GetEmailSexyString(void)

{
  undefined8 in_x8;
  
  FUN_05477b24();
  return in_x8;
}


/* GeilivableLottery::IsInited() */

GeilivableLottery __thiscall GeilivableLottery::IsInited(GeilivableLottery *this)

{
  return this[0x128];
}


/* GeilivableLottery::OnStartLottery() */

void __thiscall GeilivableLottery::OnStartLottery(GeilivableLottery *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x310);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x188))(plVar1,1);
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
  return;
}


/* GeilivableLottery::HideAllButtonAndAnims() */

void __thiscall GeilivableLottery::HideAllButtonAndAnims(GeilivableLottery *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x318);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
  }
  plVar1 = *(long **)(this + 800);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
  }
  plVar1 = *(long **)(this + 0x310);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
  }
  plVar1 = *(long **)(this + 0x348);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
  }
  plVar1 = *(long **)(this + 0x328);
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
  return;
}


/* GeilivableLottery::RecoverAllButtonAndAnims() */

void __thiscall GeilivableLottery::RecoverAllButtonAndAnims(GeilivableLottery *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x318);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,1);
  }
  plVar1 = *(long **)(this + 800);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,1);
  }
  plVar1 = *(long **)(this + 0x310);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,1);
  }
  plVar1 = *(long **)(this + 0x348);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,1);
  }
  plVar1 = *(long **)(this + 0x328);
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
  return;
}


/* GeilivableLottery::CloseBonusEffect() */

void __thiscall GeilivableLottery::CloseBonusEffect(GeilivableLottery *this)

{
  bool bVar1;
  long *plVar2;
  
  if (*(LotteryPanel **)(this + 0x348) != (LotteryPanel *)0x0) {
    LotteryPanel::CloseBonusEffect(*(LotteryPanel **)(this + 0x348));
  }
  plVar2 = *(long **)(this + 0x318);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x188))(plVar2,0);
  }
  plVar2 = *(long **)(this + 0x310);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x188))(plVar2,0);
  }
  plVar2 = *(long **)(this + 800);
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
  bVar1 = std::operator==(L"",(wstring *)(this + 0x2c8));
  if (((bVar1) || (bVar1 = std::operator==(L"",(wstring *)(this + 0x2c0)), bVar1)) &&
     (this[0x129] != (GeilivableLottery)0x0)) {
    LawnApp::ShowGLDeliveryUI(gLawnApp);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeilivableLottery::SetInitInfo(int, int, int, int, int) */

void __thiscall
GeilivableLottery::SetInitInfo
          (GeilivableLottery *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined1 auStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x2ec) = param_2;
  *(int *)(this + 0x2f0) = param_3;
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x2f4) = param_4;
  *(int *)(this + 0x2f8) = param_5;
  *(int *)(this + 0x2e8) = param_1;
  Sexy::StrFormat(L"%d",auStack_10,(ulong)(uint)param_5);
  FUN_054766c8(this + 0x298,auStack_10);
  FUN_05476c50(auStack_10);
  Sexy::StrFormat(L"%d",auStack_10,(ulong)*(uint *)(this + 0x2ec));
  FUN_054766c8(this + 0x2a8,auStack_10);
  FUN_05476c50(auStack_10);
  Sexy::StrFormat(L"%d",auStack_10,(ulong)*(uint *)(this + 0x2f0));
  FUN_054766c8(this + 0x2b0,auStack_10);
  FUN_05476c50(auStack_10);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 == (PlayerInfo *)0x0) {
    uVar1 = *(uint *)(this + 0x2f4);
  }
  else {
    uVar1 = PlayerInfo::GetGLRemainChances(this_01);
    *(uint *)(this + 0x2f4) = uVar1;
  }
  Sexy::StrFormat(L" %d",auStack_10,(ulong)uVar1);
  FUN_054766c8(this + 0x2b8,auStack_10);
  FUN_05476c50(auStack_10);
  if (*(LotteryPanel **)(this + 0x348) != (LotteryPanel *)0x0) {
    LotteryPanel::SetChances(*(LotteryPanel **)(this + 0x348),*(int *)(this + 0x2f4));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeilivableLottery::SetBonus(int, int) */

void __thiscall GeilivableLottery::SetBonus(GeilivableLottery *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(this + 0x348);
  if (lVar3 != 0) {
    iVar1 = *(int *)(this + 0x2ec);
    if (iVar1 != 0) {
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = *(int *)(this + 0x2f0) / iVar1;
      }
      FUN_04bbb540(lVar3 + 0x104,iVar2 - *(int *)(this + 0x2f4));
      lVar3 = *(long *)(this + 0x348);
    }
    FUN_04bbb548(lVar3 + 0x108,*(undefined4 *)(this + 0x2f0));
    LotteryPanel::SetBonus(*(LotteryPanel **)(this + 0x348),param_1,param_2);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeilivableLottery::GetBannerImage() */

void GeilivableLottery::GetBannerImage(void)

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
      this = (CachedUIResourcePtr *)&DAT_06b8a588;
    }
    else {
      this = (CachedUIResourcePtr *)&DAT_06b8a370;
    }
  }
  else if (*(int *)(in_x0 + 0x2e8) == 2) {
    if (*(char *)(in_x0 + 0x12a) == '\0') {
      this = (CachedUIResourcePtr *)&DAT_06b8a050;
    }
    else {
      this = (CachedUIResourcePtr *)&DAT_06b8a980;
    }
  }
  else if (*(char *)(in_x0 + 0x12a) == '\0') {
    this = (CachedUIResourcePtr *)&DAT_06b89fa0;
  }
  else {
    this = (CachedUIResourcePtr *)&DAT_06b8a8b8;
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
/* GeilivableLottery::Draw(Sexy::Graphics*) */

void __thiscall GeilivableLottery::Draw(GeilivableLottery *this,Graphics *param_1)

{
  char cVar1;
  undefined8 uVar2;
  ResourceInfo *pRVar3;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  Insets aIStack_50 [16];
  Insets aIStack_40 [8];
  undefined8 local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a168);
  PopingWidget::GetMainRect();
  PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,uVar2,aIStack_40);
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a3c0);
  Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x13c));
  PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar2,aIStack_40);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x300));
  Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x15c));
  PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,pRVar3,aIStack_40);
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a0c8);
  Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x16c));
  PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar2,aIStack_40);
  if (this[0x12a] == (GeilivableLottery)0x0) {
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a908);
    Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x19c));
    PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar2,aIStack_40);
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a868;
  }
  else {
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a4b0);
    Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x25c));
    PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar2,aIStack_40);
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a398);
    Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x26c));
    PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar2,aIStack_40);
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a140;
  }
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x1fc));
  PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar2,aIStack_40);
  cVar1 = FUN_04bbb510(this[0x115]);
  if (cVar1 == '\0') {
    uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
    Sexy::Color::Color((Color *)aIStack_40,1);
    WriteWordInRect(param_1,this + 0x290,this + 300,uVar2,aIStack_40,5,1);
    if (this[0x12a] == (GeilivableLottery)0x0) {
      uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_24_Outline);
      Sexy::Color::Color((Color *)aIStack_40,1);
      WriteWordInRect(param_1,this + 0x2a0,this + 0x19c,uVar2,aIStack_40,5,1);
      uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
      Sexy::Color::Color((Color *)aIStack_40,2);
      WriteWordInRect(param_1,this + 0x2a8,this + 0x21c,uVar2,aIStack_40,3,1);
      uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
      Sexy::Color::Color((Color *)aIStack_40,2);
      WriteWordInRect(param_1,this + 0x2b0,this + 0x22c,uVar2,aIStack_40,3,1);
    }
    uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32_ThickOutline)
    ;
    Sexy::Color::Color((Color *)aIStack_40,2);
    WriteWordInRect(param_1,this + 0x298,this + 0x20c,uVar2,aIStack_40,5,1);
    uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    Sexy::Color::Color((Color *)aIStack_40,2);
    WriteWordInRect(param_1,this + 0x2b8,this + 0x23c,uVar2,aIStack_40,3,1);
    uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
    Sexy::Color::Color((Color *)aIStack_40,1);
    WriteWordInRect(param_1,this + 0x2d0,this + 0x24c,uVar2,aIStack_40,0,1);
  }
  else {
    if (*(long *)(this + 0x310) != 0) {
      PVZ2UIButton::GetImageNormal();
      uVar2 = local_38;
      Sexy::Insets::Insets(aIStack_50,(Insets *)(this + 0x14c));
      PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar2,aIStack_50);
    }
    if ((*(LinkButton **)(this + 0x328) != (LinkButton *)0x0) &&
       (cVar1 = LinkButton::CanDraw(*(LinkButton **)(this + 0x328)), cVar1 != '\0')) {
      LinkButton::GetButtonImage();
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aIStack_50);
      Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x1ac));
      PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,pRVar3,aIStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_50);
    }
    if ((*(LinkButton **)(this + 0x330) != (LinkButton *)0x0) &&
       (cVar1 = LinkButton::CanDraw(*(LinkButton **)(this + 0x330)), cVar1 != '\0')) {
      LinkButton::GetButtonImage();
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aIStack_50);
      Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x1bc));
      PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,pRVar3,aIStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_50);
    }
    if ((*(LinkButton **)(this + 0x338) != (LinkButton *)0x0) &&
       (cVar1 = LinkButton::CanDraw(*(LinkButton **)(this + 0x338)), cVar1 != '\0')) {
      LinkButton::GetButtonImage();
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aIStack_50);
      Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x1cc));
      PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,pRVar3,aIStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_50);
    }
    if ((*(LinkButton **)(this + 0x340) != (LinkButton *)0x0) &&
       (cVar1 = LinkButton::CanDraw(*(LinkButton **)(this + 0x340)), cVar1 != '\0')) {
      LinkButton::GetButtonImage();
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aIStack_50);
      Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x1dc));
      PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,pRVar3,aIStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_50);
    }
    if (*(long *)(this + 0x318) != 0) {
      PVZ2UIButton::GetImageNormal();
      uVar2 = local_38;
      Sexy::Insets::Insets(aIStack_50,(Insets *)(this + 0x27c));
      PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar2,aIStack_50);
    }
    if (*(long *)(this + 800) != 0) {
      PVZ2UIButton::GetImageNormal();
      Sexy::Insets::Insets(aIStack_50,(Insets *)(this + 0x1ec));
      PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,local_38,aIStack_50);
    }
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a930);
    Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x17c));
    PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,uVar2,aIStack_40);
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a198);
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
/* GeilivableLottery::HasLoadedGroup(std::string) */

void __thiscall GeilivableLottery::HasLoadedGroup(GeilivableLottery *this,undefined8 param_2)

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
             *)(this + 0x350);
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
/* GeilivableLottery::ReleaseResourceGroups() */

void __thiscall GeilivableLottery::ReleaseResourceGroups(GeilivableLottery *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  string *psVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x350);
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


/* GeilivableLottery::~GeilivableLottery() */

void __thiscall GeilivableLottery::~GeilivableLottery(GeilivableLottery *this)

{
  PrimeText *this_00;
  
  *(undefined ***)this = &PTR_GetClass_069796d0;
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_06979a10;
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  ReleaseResourceGroups(this);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x350));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x308));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x300));
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
  return;
}


/* GeilivableLottery::~GeilivableLottery() */

void __thiscall GeilivableLottery::~GeilivableLottery(GeilivableLottery *this)

{
  ~GeilivableLottery(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeilivableLottery::AddLoadingGroup(std::string) */

void __thiscall GeilivableLottery::AddLoadingGroup(GeilivableLottery *this,string *param_2)

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
              ((vector<std::string,std::allocator<std::string>> *)(this + 0x350),param_2);
    LawnApp::LoadGroup(gLawnApp,param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeilivableLottery::AddResourceGroups() */

void __thiscall GeilivableLottery::AddResourceGroups(GeilivableLottery *this)

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
/* GeilivableLottery::GeilivableLottery() */

void __thiscall GeilivableLottery::GeilivableLottery(GeilivableLottery *this)

{
  undefined *puVar1;
  char cVar2;
  PrimeText *this_00;
  wchar16 *pwVar3;
  LineBreakCategory *pLVar4;
  LineBreakCategory *local_90;
  undefined8 uStack_88;
  LineBreakCategory *local_80;
  LineBreakCategory aLStack_70 [8];
  string asStack_68 [24];
  LineBreakCategory *local_50;
  undefined8 uStack_48;
  LineBreakCategory *local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  pLVar4 = aLStack_70;
  local_8 = ___stack_chk_guard;
  PopingWidget::PopingWidget((PopingWidget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x120));
  this[0x128] = (GeilivableLottery)0x0;
  this[0x129] = (GeilivableLottery)0x0;
  *(undefined ***)this = &PTR_GetClass_069796d0;
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_06979a10;
  this[0x12a] = (GeilivableLottery)0x0;
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
  *(undefined4 *)(this + 0x2fc) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x300));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x308));
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined8 *)(this + 0x318) = 0;
  *(undefined8 *)(this + 800) = 0;
  *(undefined8 *)(this + 0x328) = 0;
  *(undefined8 *)(this + 0x330) = 0;
  *(undefined8 *)(this + 0x338) = 0;
  *(undefined8 *)(this + 0x340) = 0;
  *(undefined8 *)(this + 0x348) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x350));
  AddResourceGroups(this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyRefresh);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<GeilivableLottery,void(GeilivableLottery::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnStartLottery);
  Sexy::Delegate0::Delegate0<GeilivableLottery,void(GeilivableLottery::*)()>(aDStack_38,asStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::StartLottery,aDStack_38);
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  this[0x12a] = (GeilivableLottery)0x1;
  pwVar3 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_68,"TestAndroid");
  cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar3,(wchar16 *)asStack_68,pLVar4,local_40,local_50);
  std::string::~string(asStack_68);
  nop();
  if (cVar2 != '\0') {
    this[0x12a] = (GeilivableLottery)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeilivableLottery::SetBonusList(std::vector<LotteryBonus, std::allocator<LotteryBonus> >&) */

void __thiscall GeilivableLottery::SetBonusList(GeilivableLottery *this,vector *param_1)

{
  int iVar1;
  LotteryPanel *this_00;
  
  if (*(long *)(this + 0x348) != 0) {
    return;
  }
  this_00 = ::operator_new(0x1b0);
  LotteryPanel::LotteryPanel(this_00);
  *(LotteryPanel **)(this + 0x348) = this_00;
  LotteryPanel::SetBonusList(this_00,param_1);
  iVar1 = FUN_04bbb550(*(undefined4 *)(this + 0x2e8));
  LotteryPanel::SetPeriod(*(LotteryPanel **)(this + 0x348),iVar1);
  LotteryPanel::SetChances(*(LotteryPanel **)(this + 0x348),*(int *)(this + 0x2f4));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeilivableLottery::InitView(bool) */

void __thiscall GeilivableLottery::InitView(GeilivableLottery *this,bool param_1)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  ulong uVar1;
  LawnApp *pLVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  LotteryResultProgressBar *pLVar16;
  SalesProgressBar *pSVar17;
  undefined8 uVar18;
  UILimitedGacha *this_01;
  ResourceInfo *pRVar19;
  string *extraout_x1;
  long lVar20;
  PVZ2UIButton *pPVar21;
  long *plVar22;
  code *pcVar23;
  LinkButton *pLVar24;
  HintUI *pHVar25;
  int local_98;
  string asStack_88 [8];
  int local_80;
  PVZ2UIImage aPStack_78 [4];
  int local_74;
  undefined8 local_40;
  long local_38;
  long local_8;
  
  this[0x59] = (GeilivableLottery)0x0;
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x300);
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  pLVar16 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a3c0);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
  pSVar17 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a3c0);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar17);
  iVar9 = (iVar6 << 1) / 3;
  iVar7 = FUN_04bbb930(0x2e4);
  iVar8 = FUN_04bbb930(600);
  iVar11 = *(int *)(this + 0x54) - iVar8 >> 1;
  iVar12 = *(int *)(this + 0x50) - iVar7 >> 1;
  iVar10 = iVar12 + iVar7 / 2;
  Sexy::Insets::Insets((Insets *)&local_40,iVar12,iVar11 + iVar9,iVar7,iVar8 - iVar9);
  PopingWidget::SetMainRect((PopingWidget *)this,(Insets *)&local_40);
  iVar7 = iVar10 - iVar5 / 2;
  Sexy::Insets::Insets((Insets *)&local_40,iVar7,iVar11,iVar5,iVar6);
  *(undefined8 *)(this + 0x13c) = local_40;
  *(long *)(this + 0x144) = local_38;
  Sexy::Insets::Insets((Insets *)&local_40,iVar7,iVar11,iVar5,(iVar6 * 5) / 6);
  *(undefined8 *)(this + 300) = local_40;
  *(long *)(this + 0x134) = local_38;
  TodStringTranslate(L"[GEILIVABLE_LOTTERY_MAIN_TITLE]");
  FUN_054766c8(this + 0x290,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  GetBannerImage();
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)&local_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  pLVar16 = (LotteryResultProgressBar *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
  pSVar17 = (SalesProgressBar *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar17);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar10 - iVar7 / 2,iVar11 + iVar9 + (iVar6 - iVar9),iVar7,iVar5);
  *(undefined8 *)(this + 0x15c) = local_40;
  *(long *)(this + 0x164) = local_38;
  pLVar16 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a0c8);
  iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
  pSVar17 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a0c8);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar17);
  iVar11 = *(int *)(this + 0x160);
  iVar7 = *(int *)(this + 0x168);
  iVar6 = FUN_04bbb930(10);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar10 - iVar9 / 2,iVar11 + iVar7 + iVar6 / 2,iVar9,iVar5);
  *(undefined8 *)(this + 0x16c) = local_40;
  *(long *)(this + 0x174) = local_38;
  iVar10 = FUN_04bbb930(0x50);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar10 + iVar12,*(int *)(this + 0x170),*(int *)(this + 0x178),
             *(int *)(this + 0x178));
  *(undefined8 *)(this + 0x17c) = local_40;
  *(long *)(this + 0x184) = local_38;
  if ((!param_1) && (*(LotteryPanel **)(this + 0x348) != (LotteryPanel *)0x0)) {
    LotteryPanel::InitView(*(LotteryPanel **)(this + 0x348));
    (**(code **)(**(long **)(this + 0x348) + 0x1a0))(*(long **)(this + 0x348),this + 0x17c);
    LotteryPanel::InitLotteryItems();
    LotteryPanel::SetInited(*(LotteryPanel **)(this + 0x348),true);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x348));
  }
  pLVar16 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a198);
  iVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
  pLVar16 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a198);
  iVar11 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
  Sexy::Insets::Insets
            ((Insets *)&local_40,*(int *)(this + 0x17c) + (*(int *)(this + 0x184) - iVar10) / 2,
             *(int *)(this + 0x180) + (*(int *)(this + 0x188) - iVar11) / 2,iVar10,iVar11);
  *(undefined8 *)(this + 0x18c) = local_40;
  *(long *)(this + 0x194) = local_38;
  if (this[0x12a] == (GeilivableLottery)0x0) {
    iVar10 = *(int *)(this + 0x184);
    iVar11 = *(int *)(this + 0x17c);
    iVar7 = FUN_04bbb930(10);
    iVar12 = *(int *)(this + 0x180);
    pLVar16 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a908);
    iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a908);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar17);
    Sexy::Insets::Insets
              ((Insets *)&local_40,iVar11 + iVar10 + iVar7 * 3,iVar12 + iVar7 * 2,iVar9,iVar5);
    *(undefined8 *)(this + 0x19c) = local_40;
    *(long *)(this + 0x1a4) = local_38;
    TodStringTranslate(L"[GEILIVABLE_LINK_TITLE]");
    FUN_054766c8(this + 0x2a0,(Insets *)&local_40);
    FUN_05476c50((Insets *)&local_40);
    pLVar16 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a348);
    iVar12 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a348);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
    iVar10 = *(int *)(this + 0x180);
    iVar11 = *(int *)(this + 0x188);
    iVar9 = FUN_04bbb930(10);
    Sexy::Insets::Insets
              ((Insets *)&local_40,*(int *)(this + 0x19c),((iVar10 + iVar11) - iVar7) - iVar9,iVar12
               ,iVar7);
    iVar10 = *(int *)(this + 0x1a0);
    iVar11 = *(int *)(this + 0x1a8);
    *(undefined8 *)(this + 0x1ec) = local_40;
    *(long *)(this + 500) = local_38;
    iVar12 = FUN_04bbb930(10);
    iVar10 = iVar10 + iVar11 + iVar12;
    pLVar24 = *(LinkButton **)(this + 0x328);
    iVar12 = (*(int *)(this + 0x1f0) - iVar10) / 2 - iVar12;
    if (pLVar24 == (LinkButton *)0x0) {
      pLVar24 = ::operator_new(0x308);
      LinkButton::LinkButton(pLVar24,0x3e9,(ButtonListener *)(this + 0x120));
      *(LinkButton **)(this + 0x328) = pLVar24;
    }
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b8a4d8);
    HintUI::SetTitleImage((HintUI *)pLVar24,(Insets *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    iVar11 = *(int *)(this + 0x19c);
    iVar7 = LinkButton::GetLinkButtonWidth(*(LinkButton **)(this + 0x328));
    iVar9 = FUN_04bbb930(5);
    iVar5 = LinkButton::GetLinkButtonHeight(*(LinkButton **)(this + 0x328));
    iVar6 = FUN_04bbb930(5);
    iVar8 = LinkButton::GetLinkButtonWidth(*(LinkButton **)(this + 0x328));
    iVar13 = LinkButton::GetLinkButtonHeight(*(LinkButton **)(this + 0x328));
    Sexy::Insets::Insets
              ((Insets *)&local_40,iVar11 + (iVar12 - iVar7) / 2 + iVar9,
               iVar10 + (iVar12 - iVar5) / 2 + iVar6,iVar8,iVar13);
    lVar20 = **(long **)(this + 0x328);
    *(undefined8 *)(this + 0x1ac) = local_40;
    *(long *)(this + 0x1b4) = local_38;
    (**(code **)(lVar20 + 0x1a0))(*(long **)(this + 0x328),this + 0x1ac);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x328));
    pLVar2 = gLawnApp;
    if (*(long *)(this + 0x330) == 0) {
      std::string::string((string *)&local_40,"LUA_UI_DaveShop");
      cVar4 = LawnApp::CanLoadGroup(pLVar2,(string *)&local_40);
      std::string::~string((string *)&local_40);
      nop();
      if (cVar4 != '\0') {
        pLVar24 = ::operator_new(0x308);
        LinkButton::LinkButton(pLVar24,0x3ea,(ButtonListener *)(this + 0x120));
        *(LinkButton **)(this + 0x330) = pLVar24;
      }
    }
    pLVar2 = gLawnApp;
    this_01 = *(UILimitedGacha **)(this + 0x338);
    if (this_01 == (UILimitedGacha *)0x0) {
      std::string::string((string *)&local_40,"UI_World_Unlock_Pack");
      cVar4 = LawnApp::CanLoadGroup(pLVar2,(string *)&local_40);
      std::string::~string((string *)&local_40);
      nop();
      if (cVar4 != '\0') {
        pLVar24 = ::operator_new(0x308);
        this_01 = (UILimitedGacha *)
                  LinkButton::LinkButton(pLVar24,0x3eb,(ButtonListener *)(this + 0x120));
        *(LinkButton **)(this + 0x338) = pLVar24;
        goto LAB_04bc2db4;
      }
      this_01 = *(UILimitedGacha **)(this + 0x338);
      if (this_01 != (UILimitedGacha *)0x0) goto LAB_04bc2db4;
    }
    else {
LAB_04bc2db4:
      UILimitedGacha::GetGachaMainPlantName(this_01);
      Sexy::Upper((Sexy *)aPStack_78,extraout_x1);
      std::operator+((string *)&DAT_06b8a848,(string *)&local_40);
      std::string::~string((string *)&local_40);
      std::string::~string((string *)aPStack_78);
      bVar3 = std::operator!=("",asStack_88);
      if (bVar3) {
        lVar20 = StringHelper::ToImage(asStack_88,false);
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aPStack_78);
        if (lVar20 == 0) {
          Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)aPStack_78);
        }
        else {
          Sexy::BaseResource::GetRtId();
          Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                    ((RtWeakPtr<CthulhuPropertySheet> *)aPStack_78,(RtId *)&local_40);
          Sexy::RtId::~RtId((RtId *)&local_40);
        }
        pRVar19 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aPStack_78);
        if (pRVar19 != (ResourceInfo *)0x0) {
          pHVar25 = *(HintUI **)(this + 0x338);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aPStack_78);
          HintUI::SetTitleImage(pHVar25,(Insets *)&local_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_78)
        ;
      }
      pLVar24 = *(LinkButton **)(this + 0x338);
      PVZ2UIButton::GetImageNormal();
      if (local_38 == 0) {
        CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b8a890);
        HintUI::SetTitleImage((HintUI *)pLVar24,(Insets *)&local_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        pLVar24 = *(LinkButton **)(this + 0x338);
      }
      iVar11 = *(int *)(this + 0x19c);
      iVar7 = LinkButton::GetLinkButtonWidth(pLVar24);
      iVar9 = FUN_04bbb930(5);
      iVar5 = FUN_04bbb930(10);
      iVar6 = LinkButton::GetLinkButtonHeight(*(LinkButton **)(this + 0x338));
      iVar8 = FUN_04bbb930(0xf);
      iVar13 = LinkButton::GetLinkButtonWidth(*(LinkButton **)(this + 0x338));
      iVar14 = LinkButton::GetLinkButtonHeight(*(LinkButton **)(this + 0x338));
      Sexy::Insets::Insets
                ((Insets *)&local_40,iVar11 + (iVar12 - iVar7) / 2 + iVar9,
                 iVar10 + iVar12 + iVar5 + (iVar12 - iVar6) / 2 + iVar8,iVar13,iVar14);
      lVar20 = **(long **)(this + 0x338);
      *(undefined8 *)(this + 0x1cc) = local_40;
      *(long *)(this + 0x1d4) = local_38;
      (**(code **)(lVar20 + 0x1a0))(*(long **)(this + 0x338),this + 0x1cc);
      (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x338));
      std::string::~string(asStack_88);
    }
    pHVar25 = *(HintUI **)(this + 0x330);
    if (pHVar25 != (HintUI *)0x0) {
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b8a320);
      HintUI::SetTitleImage(pHVar25,(Insets *)&local_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      iVar11 = *(int *)(this + 0x19c);
      iVar7 = FUN_04bbb930(10);
      iVar9 = LinkButton::GetLinkButtonWidth(*(LinkButton **)(this + 0x330));
      iVar5 = FUN_04bbb930(0x23);
      iVar6 = LinkButton::GetLinkButtonHeight(*(LinkButton **)(this + 0x330));
      iVar8 = FUN_04bbb930(0x12);
      iVar13 = LinkButton::GetLinkButtonWidth(*(LinkButton **)(this + 0x338));
      iVar14 = LinkButton::GetLinkButtonHeight(*(LinkButton **)(this + 0x338));
      Sexy::Insets::Insets
                ((Insets *)&local_40,iVar12 + iVar11 + iVar7 + (iVar12 - iVar9) / 2 + iVar5,
                 iVar10 + (iVar12 - iVar6) / 2 + iVar8,iVar13,iVar14);
      lVar20 = **(long **)(this + 0x330);
      *(undefined8 *)(this + 0x1bc) = local_40;
      *(long *)(this + 0x1c4) = local_38;
      (**(code **)(lVar20 + 0x1a0))(*(long **)(this + 0x330),this + 0x1bc);
      (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x330));
    }
    pLVar24 = *(LinkButton **)(this + 0x340);
    if (pLVar24 == (LinkButton *)0x0) {
      pLVar24 = ::operator_new(0x308);
      LinkButton::LinkButton(pLVar24,0x3ec,(ButtonListener *)(this + 0x120));
      *(LinkButton **)(this + 0x340) = pLVar24;
    }
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b8a000);
    HintUI::SetTitleImage((HintUI *)pLVar24,(Insets *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    iVar11 = *(int *)(this + 0x19c);
    iVar7 = FUN_04bbb930(10);
    iVar9 = LinkButton::GetLinkButtonWidth(*(LinkButton **)(this + 0x340));
    iVar5 = FUN_04bbb930(0x19);
    iVar6 = FUN_04bbb930(10);
    iVar8 = LinkButton::GetLinkButtonHeight(*(LinkButton **)(this + 0x340));
    iVar13 = FUN_04bbb930(10);
    iVar14 = LinkButton::GetLinkButtonWidth(*(LinkButton **)(this + 0x340));
    iVar15 = LinkButton::GetLinkButtonHeight(*(LinkButton **)(this + 0x340));
    Sexy::Insets::Insets
              ((Insets *)&local_40,iVar12 + iVar11 + iVar7 + (iVar12 - iVar9) / 2 + iVar5,
               iVar10 + iVar12 + iVar6 + (iVar12 - iVar8) / 2 + iVar13,iVar14,iVar15);
    lVar20 = **(long **)(this + 0x340);
    *(undefined8 *)(this + 0x1dc) = local_40;
    *(long *)(this + 0x1e4) = local_38;
    (**(code **)(lVar20 + 0x1a0))(*(long **)(this + 0x340),this + 0x1dc);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x340));
    pPVar21 = *(PVZ2UIButton **)(this + 800);
    if (pPVar21 == (PVZ2UIButton *)0x0) {
      FUN_05478178((Sexy *)aPStack_78,&DAT_056f11a8,asStack_88);
      Sexy::Color::Color((Color *)&local_40,1);
      pPVar21 = ::operator_new(0x300);
      PVZ2UIButton::PVZ2UIButton
                (pPVar21,3,(ButtonListener *)(this + 0x120),(wstring *)aPStack_78,(Color *)&local_40
                );
      *(PVZ2UIButton **)(this + 800) = pPVar21;
      FUN_05476c50((Sexy *)aPStack_78);
      nop();
      pPVar21 = *(PVZ2UIButton **)(this + 800);
      if (pPVar21 != (PVZ2UIButton *)0x0) goto LAB_04bc30e0;
    }
    else {
LAB_04bc30e0:
      PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b8a348,3);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8a0a0,3);
      PVZ2UIButton::SetDialogStates(pPVar21,aPStack_78,(PVZ2UIImage *)&local_40);
      (**(code **)(**(long **)(this + 800) + 0x1a0))(*(long **)(this + 800),this + 0x1ec);
      (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 800));
    }
    pLVar16 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a868);
    iVar12 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a868);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
    iVar10 = *(int *)(this + 0x170);
    iVar11 = *(int *)(this + 0x178);
    iVar9 = FUN_04bbb930(10);
    Sexy::Insets::Insets
              ((Insets *)&local_40,*(int *)(this + 0x16c),iVar10 + iVar11 + iVar9 / 2,iVar12,iVar7);
    *(undefined8 *)(this + 0x1fc) = local_40;
    *(long *)(this + 0x204) = local_38;
    iVar12 = FUN_04bbb930(0x57);
    iVar10 = *(int *)(this + 0x1fc);
    iVar7 = FUN_04bbb930(2);
    iVar11 = *(int *)(this + 0x200);
    iVar9 = FUN_04bbb930(0x32);
    Sexy::Insets::Insets
              ((Insets *)&local_40,iVar12 + iVar10,iVar7 + iVar11,iVar9,*(int *)(this + 0x208));
    *(undefined8 *)(this + 0x21c) = local_40;
    *(long *)(this + 0x224) = local_38;
    iVar11 = FUN_04bbb930(0x154);
    iVar10 = *(int *)(this + 0x1fc);
    iVar12 = FUN_04bbb930(0x9b);
    Sexy::Insets::Insets
              ((Insets *)&local_40,iVar11 + iVar10,*(int *)(this + 0x220),iVar12,
               *(int *)(this + 0x228));
    *(undefined8 *)(this + 0x22c) = local_40;
    *(long *)(this + 0x234) = local_38;
    iVar11 = FUN_04bbb930(0x253);
    iVar10 = *(int *)(this + 0x1fc);
    iVar12 = FUN_04bbb930(0x5f);
    Sexy::Insets::Insets
              ((Insets *)&local_40,iVar11 + iVar10,*(int *)(this + 0x220),iVar12,
               *(int *)(this + 0x228));
    *(undefined8 *)(this + 0x23c) = local_40;
    *(long *)(this + 0x244) = local_38;
  }
  else {
    pLVar16 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a4b0);
    iVar12 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a4b0);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
    iVar10 = *(int *)(this + 0x17c);
    iVar11 = *(int *)(this + 0x184);
    iVar9 = FUN_04bbb930(10);
    Sexy::Insets::Insets
              ((Insets *)&local_40,iVar10 + iVar11 + iVar9 * 2,iVar9 * 2 + *(int *)(this + 0x180),
               iVar12,iVar7);
    *(undefined8 *)(this + 0x25c) = local_40;
    *(long *)(this + 0x264) = local_38;
    pLVar16 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a398);
    iVar12 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a398);
    iVar9 = SalesProgressBar::GetCurrentLevel(pSVar17);
    iVar10 = (*(int *)(this + 0x264) - iVar12) / 2;
    Sexy::Insets::Insets
              ((Insets *)&local_40,iVar10 + *(int *)(this + 0x25c),iVar10 + *(int *)(this + 0x260),
               iVar12,iVar9);
    *(undefined8 *)(this + 0x26c) = local_40;
    *(long *)(this + 0x274) = local_38;
    iVar5 = FUN_04bbb930(10);
    iVar11 = iVar5 + 3;
    if (-1 < iVar5) {
      iVar11 = iVar5;
    }
    iVar10 = (((iVar7 - iVar9) + iVar10 * -2) - iVar5 / 2) / 2;
    Sexy::Insets::Insets
              ((Insets *)&local_40,*(int *)(this + 0x26c),
               *(int *)(this + 0x270) + *(int *)(this + 0x278) + (iVar11 >> 2),iVar12,iVar10);
    *(undefined8 *)(this + 0x27c) = local_40;
    *(long *)(this + 0x284) = local_38;
    iVar7 = *(int *)(this + 0x288);
    uVar1 = (ulong)local_40 >> 0x20;
    iVar9 = FUN_04bbb930(10);
    iVar11 = iVar9 + 3;
    if (-1 < iVar9) {
      iVar11 = iVar9;
    }
    Sexy::Insets::Insets
              ((Insets *)&local_40,*(int *)(this + 0x27c),(int)uVar1 + iVar7 + (iVar11 >> 2),iVar12,
               iVar10);
    pPVar21 = *(PVZ2UIButton **)(this + 0x318);
    *(undefined8 *)(this + 0x1ec) = local_40;
    *(long *)(this + 500) = local_38;
    if (pPVar21 == (PVZ2UIButton *)0x0) {
      FUN_05478178(aPStack_78,L"[GEILIVABLE_LOTTERY_PAY_BUTTON]",asStack_88);
      Sexy::Color::Color((Color *)&local_40,1);
      pPVar21 = ::operator_new(0x300);
      PVZ2UIButton::PVZ2UIButton
                (pPVar21,2,(ButtonListener *)(this + 0x120),(wstring *)aPStack_78,(Color *)&local_40
                );
      *(PVZ2UIButton **)(this + 0x318) = pPVar21;
      FUN_05476c50(aPStack_78);
      nop();
      pPVar21 = *(PVZ2UIButton **)(this + 0x318);
      if (pPVar21 != (PVZ2UIButton *)0x0) goto LAB_04bc2988;
    }
    else {
LAB_04bc2988:
      PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b8a438,3);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8a410,3);
      PVZ2UIButton::SetDialogStates(pPVar21,aPStack_78,(PVZ2UIImage *)&local_40);
      (**(code **)(**(long **)(this + 0x318) + 0x1a0))(*(long **)(this + 0x318),this + 0x27c);
      plVar22 = *(long **)(this + 0x318);
      pcVar23 = *(code **)(*plVar22 + 800);
      uVar18 = PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZShaoEr_24_HardShadow);
      (*pcVar23)(plVar22,uVar18);
      (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x318));
    }
    pPVar21 = *(PVZ2UIButton **)(this + 800);
    if (pPVar21 == (PVZ2UIButton *)0x0) {
      FUN_05478178(aPStack_78,L"[GEILIVABLE_LOTTERY_DELIVERY_BUTTON]",asStack_88);
      Sexy::Color::Color((Color *)&local_40,1);
      pPVar21 = ::operator_new(0x300);
      PVZ2UIButton::PVZ2UIButton
                (pPVar21,3,(ButtonListener *)(this + 0x120),(wstring *)aPStack_78,(Color *)&local_40
                );
      *(PVZ2UIButton **)(this + 800) = pPVar21;
      FUN_05476c50(aPStack_78);
      nop();
      pPVar21 = *(PVZ2UIButton **)(this + 800);
      if (pPVar21 != (PVZ2UIButton *)0x0) goto LAB_04bc2a1c;
    }
    else {
LAB_04bc2a1c:
      PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b8aa50,3);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8a5b0,3);
      PVZ2UIButton::SetDialogStates(pPVar21,aPStack_78,(PVZ2UIImage *)&local_40);
      (**(code **)(**(long **)(this + 800) + 0x1a0))(*(long **)(this + 800),this + 0x1ec);
      plVar22 = *(long **)(this + 800);
      pcVar23 = *(code **)(*plVar22 + 800);
      uVar18 = PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZShaoEr_24_HardShadow);
      (*pcVar23)(plVar22,uVar18);
      (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 800));
    }
    pLVar16 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a140);
    iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a140);
    iVar9 = SalesProgressBar::GetCurrentLevel(pSVar17);
    iVar5 = FUN_04bbb930(0x253);
    iVar10 = *(int *)(this + 0x170);
    iVar11 = *(int *)(this + 0x16c);
    iVar12 = *(int *)(this + 0x178);
    iVar6 = FUN_04bbb930(10);
    Sexy::Insets::Insets
              ((Insets *)&local_40,(iVar5 + iVar11) - iVar7,iVar10 + iVar12 + iVar6 / 2,iVar7,iVar9)
    ;
    *(long *)(this + 0x204) = local_38;
    *(undefined8 *)(this + 0x1fc) = local_40;
    iVar10 = *(int *)(this + 0x204);
    iVar5 = (int)local_40;
    iVar12 = FUN_04bbb930(8);
    iVar11 = *(int *)(this + 0x200);
    iVar7 = FUN_04bbb930(0x5f);
    iVar9 = FUN_04bbb930(0x14);
    Sexy::Insets::Insets
              ((Insets *)&local_40,iVar10 + iVar5,iVar11 - iVar12,iVar7,
               iVar9 + *(int *)(this + 0x208));
    *(undefined8 *)(this + 0x23c) = local_40;
    *(long *)(this + 0x244) = local_38;
  }
  pLVar16 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a500);
  iVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
  pSVar17 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a500);
  iVar11 = SalesProgressBar::GetCurrentLevel(pSVar17);
  PopingWidget::GetMainRect();
  PopingWidget::GetMainRect();
  iVar12 = FUN_04bbb930(0xfffffff1);
  PopingWidget::GetMainRect();
  iVar7 = FUN_04bbb930(10);
  Sexy::Insets::Insets
            ((Insets *)&local_40,((local_98 + local_80) - iVar10 / 2) + iVar12,
             (local_74 - iVar11 / 2) + iVar7,iVar10,iVar11);
  pPVar21 = *(PVZ2UIButton **)(this + 0x310);
  *(undefined8 *)(this + 0x14c) = local_40;
  *(long *)(this + 0x154) = local_38;
  if (pPVar21 == (PVZ2UIButton *)0x0) {
    FUN_05478178(aPStack_78,&DAT_056f11a8,asStack_88);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar21 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar21,1,(ButtonListener *)(this + 0x120),(wstring *)aPStack_78,(Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x310) = pPVar21;
    FUN_05476c50(aPStack_78);
    nop();
    pPVar21 = *(PVZ2UIButton **)(this + 0x310);
    if (pPVar21 == (PVZ2UIButton *)0x0) goto LAB_04bc3398;
  }
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b8a500,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8a538,3);
  PVZ2UIButton::SetDialogStates(pPVar21,aPStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0x310) + 0x1a0))(*(long **)(this + 0x310),this + 0x14c);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x310));
LAB_04bc3398:
  iVar10 = *(int *)(this + 0x164);
  iVar11 = *(int *)(this + 0x15c);
  iVar7 = FUN_04bbb930(0xffffffc8);
  iVar9 = FUN_04bbb930(10);
  iVar12 = *(int *)(this + 0x160);
  iVar5 = FUN_04bbb930(0x30);
  iVar6 = FUN_04bbb930(0x28);
  Sexy::Insets::Insets((Insets *)&local_40,iVar11 + iVar10 / 2 + iVar7,iVar9 + iVar12,iVar5,iVar6);
  *(undefined8 *)(this + 0x20c) = local_40;
  *(long *)(this + 0x214) = local_38;
  iVar12 = FUN_04bbb930(0x235);
  iVar10 = *(int *)(this + 0x15c);
  iVar7 = FUN_04bbb930(10);
  iVar11 = *(int *)(this + 0x160);
  iVar9 = FUN_04bbb930(0x73);
  iVar5 = FUN_04bbb930(0x28);
  Sexy::Insets::Insets((Insets *)&local_40,iVar12 + iVar10,iVar7 + iVar11,iVar9,iVar5);
  *(undefined8 *)(this + 0x24c) = local_40;
  *(long *)(this + 0x254) = local_38;
  if (!param_1) {
    (**(code **)(*(long *)this + 0x318))(this);
    this[0x128] = (GeilivableLottery)0x1;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GeilivableLottery::ShowWindow() */

void __thiscall GeilivableLottery::ShowWindow(GeilivableLottery *this)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  LawnApp::RefreshGeilivableLottery(gLawnApp);
  cVar1 = LawnApp::IsGeilivableLotteryValid(gLawnApp);
  if (cVar1 == '\0') {
    return;
  }
  InitView(this,false);
  uVar3 = operator|(0x10,0x20);
  uVar3 = operator|(uVar3,0x1000);
  uVar2 = operator|(uVar3,0x2000);
  PopingWidget::NormalInit((PopingWidget *)0x3e99999a,this,uVar2);
  (**(code **)(*(long *)this + 0x310))(this);
  MessageRouter::Post<std::string_const&,char_const*>
            ((MessageRouter *)gMessageRouter,Message::JoinActivity,"Comsume_Gems_Event");
  return;
}


/* GeilivableLottery::OnNotifyRefresh(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&) */

void GeilivableLottery::OnNotifyRefresh(bool param_1,set *param_2)

{
  if (((ulong)param_2 & 0xff) == 0) {
    LawnApp::ShowNetworkError(gLawnApp);
    LawnApp::KillGeilivableLottery(gLawnApp);
    return;
  }
  ShowWindow((GeilivableLottery *)(ulong)param_1);
  return;
}


/* GeilivableLottery::Refresh() */

void __thiscall GeilivableLottery::Refresh(GeilivableLottery *this)

{
  InitView(this,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeilivableLottery::UpdateTimeLabel() */

void __thiscall GeilivableLottery::UpdateTimeLabel(GeilivableLottery *this)

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
LAB_04bc3b04:
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
          goto LAB_04bc3b04;
        }
        TodStringTranslate(L"[REMAIN_DAYS]");
        TodReplaceNumberString(awStack_a0,L"{DAYS}",(int)(lVar4 / 0x15180));
        FUN_054766c8(this + 0x2d0,(Color *)&local_98);
        FUN_05476c50((Color *)&local_98);
        FUN_05476c50(awStack_a0);
      }
      ActiveItem::~ActiveItem(aAStack_88);
      goto LAB_04bc39f4;
    }
  }
  Sexy::Color::Color((Color *)&local_98,2);
  *(undefined8 *)(this + 0x2d8) = local_98;
  *(undefined8 *)(this + 0x2e0) = uStack_90;
  TodStringTranslate(L"[NETWORK_FAILED_UNCONNECTED]");
  FUN_054766c8(this + 0x2d0,(Color *)&local_98);
  FUN_05476c50((Color *)&local_98);
LAB_04bc39f4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeilivableLottery::Update() */

void __thiscall GeilivableLottery::Update(GeilivableLottery *this)

{
  PopingWidget::Update((PopingWidget *)this);
  UpdateTimeLabel(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeilivableLottery::ButtonDepress(int) */

void __thiscall GeilivableLottery::ButtonDepress(GeilivableLottery *this,int param_1)

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
      LawnApp::KillGeilivableLottery(gLawnApp);
      goto LAB_04bc40f0;
    }
LAB_04bc41c4:
    ShowClosedHint();
  }
  else {
    if (param_1 < 0x3ea) {
      if (param_1 == 2) {
        LawnApp::ShowCoinStore(gLawnApp);
        LawnApp::KillGeilivableLottery(gLawnApp);
        goto LAB_04bc40f0;
      }
      if (param_1 == 3) {
        LawnApp::ShowGLDeliveryUI(gLawnApp);
        goto LAB_04bc40f0;
      }
      if (param_1 != 1) goto LAB_04bc40f0;
    }
    else {
      if (param_1 == 0x3eb) {
        iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar3);
        ActiveItem::~ActiveItem(aAStack_88);
        if (local_70 != '\0') {
          MessageRouter::Post<int,int,int,int>((MessageRouter *)gMessageRouter,Message::Jump,1,3);
          UILimitedGacha::createWithNetwork();
          LawnApp::KillGeilivableLottery(gLawnApp);
          goto LAB_04bc40f0;
        }
        goto LAB_04bc41c4;
      }
      if (param_1 < 0x3eb) {
        std::string::string(asStack_90,"DaveShop/active");
        bVar2 = GetLuaSharedData<bool>(asStack_90,false);
        std::string::~string(asStack_90);
        nop();
        if (!bVar2) goto LAB_04bc41c4;
        MessageRouter::Post<int,int,int,int>((MessageRouter *)gMessageRouter,Message::Jump,1,2);
        std::string::string(asStack_90,"OpenDaveShopUI");
        Cpp2Lua(asStack_90);
      }
      else {
        if (param_1 != 0x3ec) goto LAB_04bc40f0;
        MessageRouter::Post<int,int,int,int>((MessageRouter *)gMessageRouter,Message::Jump,1,4);
        pGVar1 = gGameStateMgr;
        std::string::string(asStack_90,"Gacha");
        GameStateMgr::ShowStore(pGVar1,asStack_90,5,5);
      }
      std::string::~string(asStack_90);
      nop();
    }
    LawnApp::KillGeilivableLottery(gLawnApp);
  }
LAB_04bc40f0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to GeilivableLottery::ButtonDepress(int) */

void __thiscall GeilivableLottery::ButtonDepress(GeilivableLottery *this,int param_1)

{
  ButtonDepress(this + -0x120,param_1);
  return;
}

