// Class: SalesUI


/* SalesUI::ReleaseBoardView() */

void __thiscall SalesUI::ReleaseBoardView(SalesUI *this)

{
  if (*(long *)(this + 0x518) != 0) {
    (**(code **)(*(long *)this + 0x68))();
    if (*(long **)(this + 0x518) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x518) + 0x18))();
    }
    *(undefined8 *)(this + 0x518) = 0;
  }
  return;
}


/* SalesUI::IsRewardBoxInited() */

void __thiscall SalesUI::IsRewardBoxInited(SalesUI *this)

{
  if (*(long *)(this + 0x510) != 0) {
    FUN_04a57990(*(undefined1 *)(*(long *)(this + 0x510) + 0x128));
    return;
  }
  return;
}


/* SalesUI::GetSkuId() */

void SalesUI::GetSkuId(void)

{
  long in_x0;
  
  if (*(int *)(in_x0 + 0x1b4) < 3) {
    FUN_04a57b0c(DAT_06b7cb98,(long)(*(int *)(in_x0 + 0x1b0) + 3));
    FUN_05475d88();
    return;
  }
  FUN_04a57b0c(DAT_06b7cb98,(long)*(int *)(in_x0 + 0x1b0));
  FUN_05475d88();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesUI::HasLoadedGroup(std::string) */

void __thiscall SalesUI::HasLoadedGroup(SalesUI *this,string *param_2)

{
  char cVar1;
  undefined8 uVar2;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x240));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x240));
  do {
    cVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!(bool)cVar1) {
LAB_04a5a1d0:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(cVar1);
    }
    uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    FUN_05475d88(asStack_20,uVar2);
    cVar1 = std::operator==(asStack_20,param_2);
    if (cVar1 != '\0') {
      std::string::~string(asStack_20);
      goto LAB_04a5a1d0;
    }
    std::string::~string(asStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesUI::HideAllButtonAndAnims() */

void __thiscall SalesUI::HideAllButtonAndAnims(SalesUI *this)

{
  bool bVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  plVar2 = *(long **)(this + 0x508);
  local_8 = ___stack_chk_guard;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,0);
    (**(code **)(**(long **)(this + 0x508) + 0x188))(*(long **)(this + 0x508),1);
  }
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x228));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x228));
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((SalesButton *)*puVar3 != (SalesButton *)0x0) {
      SalesButton::SetVisible((SalesButton *)*puVar3,false);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (*(long **)(this + 0x4c8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x4c8) + 0x158))();
    (**(code **)(**(long **)(this + 0x4c8) + 0x188))(*(long **)(this + 0x4c8),1);
  }
  plVar2 = *(long **)(this + 0x4d0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,0);
    (**(code **)(**(long **)(this + 0x4d0) + 0x188))(*(long **)(this + 0x4d0),1);
  }
  plVar2 = *(long **)(this + 0x4d8);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,0);
    (**(code **)(**(long **)(this + 0x4d8) + 0x188))(*(long **)(this + 0x4d8),1);
  }
  plVar2 = *(long **)(this + 0x4e0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,0);
    (**(code **)(**(long **)(this + 0x4e0) + 0x188))(*(long **)(this + 0x4e0),1);
  }
  plVar2 = *(long **)(this + 0x4e8);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,0);
    (**(code **)(**(long **)(this + 0x4e8) + 0x188))(*(long **)(this + 0x4e8),1);
  }
  plVar2 = *(long **)(this + 0x4f0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,0);
    (**(code **)(**(long **)(this + 0x4f0) + 0x188))(*(long **)(this + 0x4f0),1);
  }
  plVar2 = *(long **)(this + 0x518);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,0);
  }
  SalesProgressBar::SetVisible((SalesProgressBar *)(this + 0x260),false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesUI::OnSalesBought() */

void __thiscall SalesUI::OnSalesBought(SalesUI *this)

{
  bool bVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x228));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x228));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    lVar4 = *plVar3;
    cVar2 = FUN_04a57974(*(undefined1 *)(lVar4 + 0x40));
    if (cVar2 != '\0') {
      FUN_04a57984(lVar4 + 0x40);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SalesUI::SecondConfirmCancel() */

void __thiscall SalesUI::SecondConfirmCancel(SalesUI *this)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  OnSalesBought(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesUI::RemoveAllSalesButtons() */

void __thiscall SalesUI::RemoveAllSalesButtons(SalesUI *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  long *plVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x228);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((long *)*plVar2 != (long *)0x0) {
      (**(code **)(*(long *)*plVar2 + 0x18))();
    }
    *plVar2 = 0;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<SalesButton*,std::allocator<SalesButton*>>::clear
            ((vector<SalesButton*,std::allocator<SalesButton*>> *)this_00);
  (**(code **)(*(long *)this + 0x68))(this,*(undefined8 *)(this + 0x4c8));
  (**(code **)(*(long *)this + 0x68))(this,*(undefined8 *)(this + 0x4d0));
  (**(code **)(*(long *)this + 0x68))(this,*(undefined8 *)(this + 0x4d8));
  if (*(long **)(this + 0x4c8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x4c8) + 0x18))();
    *(undefined8 *)(this + 0x4c8) = 0;
  }
  if (*(long **)(this + 0x4d0) == (long *)0x0) {
    plVar2 = *(long **)(this + 0x4d8);
  }
  else {
    (**(code **)(**(long **)(this + 0x4d0) + 0x18))();
    *(undefined8 *)(this + 0x4d0) = 0;
    plVar2 = *(long **)(this + 0x4d8);
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
    *(undefined8 *)(this + 0x4d8) = 0;
  }
  (**(code **)(*(long *)this + 0x68))(this,*(undefined8 *)(this + 0x4e0));
  (**(code **)(*(long *)this + 0x68))(this,*(undefined8 *)(this + 0x4e8));
  (**(code **)(*(long *)this + 0x68))(this,*(undefined8 *)(this + 0x4f0));
  if (*(long **)(this + 0x4e0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x4e0) + 0x18))();
    *(undefined8 *)(this + 0x4e0) = 0;
  }
  if (*(long **)(this + 0x4e8) == (long *)0x0) {
    plVar2 = *(long **)(this + 0x4f0);
  }
  else {
    (**(code **)(**(long **)(this + 0x4e8) + 0x18))();
    *(undefined8 *)(this + 0x4e8) = 0;
    plVar2 = *(long **)(this + 0x4f0);
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
    *(undefined8 *)(this + 0x4f0) = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesUI::ResetLevelImg() */

void __thiscall SalesUI::ResetLevelImg(SalesUI *this)

{
  int iVar1;
  undefined4 uVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  CachedUIResourcePtr *this_02;
  string asStack_18 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = PlantChipNameMapperServerID::GetInstance();
  NameMapperBase::GetNameForId(iVar1);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    uVar2 = PlayerInfo::GetPlantStarLevel(this_01,asStack_18,false);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 600),(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    switch(uVar2) {
    case 2:
      this_02 = (CachedUIResourcePtr *)&DAT_06b7cfb0;
      break;
    case 3:
      this_02 = (CachedUIResourcePtr *)&DAT_06b7cc78;
      break;
    case 4:
      this_02 = (CachedUIResourcePtr *)&DAT_06b7d080;
      break;
    case 5:
      this_02 = (CachedUIResourcePtr *)&DAT_06b7ccf8;
      break;
    default:
      this_02 = (CachedUIResourcePtr *)&DAT_06b7cc28;
    }
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr(this_02);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 600),(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  }
  std::string::~string(asStack_18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesUI::InitBoardView() */

void __thiscall SalesUI::InitBoardView(SalesUI *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LotteryResultProgressBar *pLVar6;
  SalesProgressBar *this_00;
  PlantLevelUpListView *pPVar7;
  long *plVar8;
  int local_28 [4];
  undefined4 local_18;
  int iStack_14;
  int local_10;
  undefined4 uStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PopingWidget::GetMainRect();
  PopingWidget::GetMainRect();
  iVar1 = local_28[0] + local_10;
  iVar2 = FUN_04a58180(0x28);
  pLVar6 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7cbd8);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  iVar3 = (iVar1 - iVar2) - iVar3;
  PopingWidget::GetMainRect();
  iVar1 = iStack_14;
  iVar2 = FUN_04a58180(100);
  pLVar6 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7cbd8);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7cbd8);
  iVar5 = SalesProgressBar::GetCurrentLevel(this_00);
  Sexy::Insets::Insets((Insets *)&local_18,iVar3,iVar1 + iVar2,iVar4,iVar5);
  *(ulong *)(this + 0x178) = CONCAT44(iStack_14,local_18);
  *(ulong *)(this + 0x180) = CONCAT44(uStack_c,local_10);
  if (*(long *)(this + 0x518) != 0) {
    (**(code **)(*(long *)this + 0x68))(this);
    if (*(long **)(this + 0x518) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x518) + 0x18))();
    }
    *(undefined8 *)(this + 0x518) = 0;
  }
  iVar4 = PlantChipNameMapperServerID::GetInstance();
  NameMapperBase::GetNameForId(iVar4);
  ReleaseBoardView(this);
  FUN_05475d88((Insets *)&local_18,(string *)local_28);
  pPVar7 = ::operator_new(0x1e0);
  PlantLevelUpListView::PlantLevelUpListView(pPVar7,(Insets *)&local_18,1);
  *(PlantLevelUpListView **)(this + 0x518) = pPVar7;
  std::string::~string((string *)&local_18);
  pPVar7 = *(PlantLevelUpListView **)(this + 0x518);
  *(undefined4 *)(pPVar7 + 0x90) = *(undefined4 *)(pPVar7 + 0x50);
  pPVar7[0x59] = (PlantLevelUpListView)0x0;
  PlantLevelUpListView::HideDisplayItems(pPVar7,false);
  PlantLevelUpListView::DisableAutoNext(*(PlantLevelUpListView **)(this + 0x518));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x518));
  plVar8 = *(long **)(this + 0x518);
  iVar4 = FUN_04a58180(0x14a);
  iVar5 = FUN_04a58180(100);
  (**(code **)(*plVar8 + 0x1a8))(plVar8,iVar3 - iVar4,(iVar1 + iVar2) - iVar5);
  std::string::~string((string *)local_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesUI::Draw(Sexy::Graphics*) */

void __thiscall SalesUI::Draw(SalesUI *this,Graphics *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  Insets *pIVar13;
  LotteryResultProgressBar *pLVar14;
  SalesProgressBar *this_00;
  ResourceInfo *pRVar15;
  Image *pIVar16;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 auStack_30 [8];
  undefined8 local_28 [2];
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PopingWidget::GetMainRect();
  uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d058);
  PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,(Insets *)local_18,uVar11);
  uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7cad0);
  Sexy::Insets::Insets((Insets *)local_18,(Insets *)(this + 0x138));
  PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar11,(Insets *)local_18);
  uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7c8d8);
  Sexy::Insets::Insets((Insets *)local_18,(Insets *)(this + 0x168));
  PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar11,(Insets *)local_18);
  uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7cbd8);
  Sexy::Insets::Insets((Insets *)local_18,(Insets *)(this + 0x178));
  PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar11,(Insets *)local_18);
  Sexy::Insets::Insets((Insets *)local_18,(Insets *)(this + 0x188));
  uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7c8b0);
  PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,(Insets *)local_18,uVar11);
  cVar2 = FUN_04a578f4(this[0x115]);
  if (cVar2 != '\0') {
    Sexy::Insets::Insets((Insets *)local_18,(Insets *)(this + 0x198));
    uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7caf8);
    PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,(Insets *)local_18,uVar11);
    goto LAB_04a5c1f4;
  }
  uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_Shaded);
  Sexy::Color::Color((Color *)local_18,1);
  WriteWordInRect(param_1,this + 0x1b8,this + 0x128,uVar11,(Insets *)local_18,5,1);
  SalesProgressBar::OnDraw((SalesProgressBar *)(this + 0x260),param_1);
  cVar2 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x1f8));
  if (cVar2 != '\0') {
    EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x1f8),param_1);
  }
  local_28[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 0x228));
  local_18[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(this + 0x228));
  while (bVar3 = __gnu_cxx::operator!=((__normal_iterator *)local_28,(__normal_iterator *)local_18),
        bVar3) {
    puVar12 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_28);
    if ((SalesButton *)*puVar12 != (SalesButton *)0x0) {
      SalesButton::OnDraw((SalesButton *)*puVar12,param_1);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_28);
  }
  uVar11 = PrimeText_PotentialTypeface::Typeface
                     (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
  Sexy::Insets::Insets((Insets *)local_18,(Insets *)(this + 0x4f8));
  WriteWordInRect(param_1,this + 0x1c0,this + 0x148,uVar11,(Insets *)local_18,5,1);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x498));
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x498));
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar3) {
    pIVar13 = (Insets *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    Sexy::Insets::Insets((Insets *)local_28,pIVar13);
    FUN_05478178(auStack_30,&DAT_056f11a8,auStack_48);
    uVar11 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
    Sexy::Color::Color((Color *)local_18,1);
    WriteWordInRect(param_1,auStack_30,(exception_ptr *)local_28,uVar11,(Insets *)local_18,5,1);
    FUN_05476c50(auStack_30);
    nop();
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_40);
  }
  if (this[0x1a9] == (SalesUI)0x0) {
LAB_04a5c1c8:
    bVar3 = CachedUIResourcePtr::operator_cast_to_bool((CachedUIResourcePtr *)&DAT_06b7cca8);
    if (!bVar3) goto LAB_04a5c1e0;
LAB_04a5c320:
    pIVar16 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7cca8);
    iVar10 = FUN_04a58180(0xf);
    Sexy::Graphics::DrawImage
              (param_1,pIVar16,*(int *)(this + 0x168) - iVar10,*(int *)(this + 0x16c) - iVar10);
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 600));
  }
  else {
    cVar2 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x1c8));
    if (cVar2 == '\0') goto LAB_04a5c1c8;
    EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x1c8),param_1);
    bVar3 = CachedUIResourcePtr::operator_cast_to_bool((CachedUIResourcePtr *)&DAT_06b7cca8);
    if (bVar3) goto LAB_04a5c320;
LAB_04a5c1e0:
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 600));
  }
  if (bVar3) {
    this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 600);
    iVar4 = FUN_04a58180(0xf);
    iVar10 = *(int *)(this + 0x168);
    pLVar14 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7cca8);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
    pLVar14 = (LotteryResultProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
    iVar7 = FUN_04a58180(0xf);
    iVar1 = *(int *)(this + 0x16c);
    pLVar14 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7cca8);
    iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
    this_00 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
    iVar9 = SalesProgressBar::GetCurrentLevel(this_00);
    pRVar15 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_01);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar15,
               ((iVar10 - iVar4) + iVar5 / 2) - (int)((float)iVar6 * 1.5) / 2,
               ((iVar1 - iVar7) + iVar8 / 2) - (int)((float)iVar9 * 1.5) / 2,
               (int)((float)iVar6 * 1.5),(int)((float)iVar9 * 1.5));
  }
LAB_04a5c1f4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SalesUI::AddResourceGroups() */

void SalesUI::AddResourceGroups(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_04a5a5dc(DAT_06b7cea0);
  uVar2 = FUN_04a5a62c(DAT_06b7cea8);
  FUN_04a5c534(uVar1,uVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesUI::GetRewardQuantity() */

void __thiscall SalesUI::GetRewardQuantity(SalesUI *this)

{
  ProfileMgr *this_00;
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  CurrentSalesInfo aCStack_38 [24];
  undefined8 local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar1 = ProfileMgr::GetCurrentProfile(this_00);
  uVar3 = 0;
  if ((lVar1 != 0) && (uVar3 = 0, *(int *)(this + 0x1b0) <= *(int *)(this + 0x1b4))) {
    PlayerInfo::GetCurrentSalesInfo();
    puVar2 = (undefined4 *)FUN_04a57b14(local_20,(long)*(int *)(this + 0x1b0));
    uVar3 = *puVar2;
    CurrentSalesInfo::~CurrentSalesInfo(aCStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesUI::OnSetUpSalesBought() */

void __thiscall SalesUI::OnSetUpSalesBought(SalesUI *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NetworkMgr *this_02;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    iVar1 = PlantChipNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar1);
    PlayerInfo::GetIsPlantUnlocked(this_01,asStack_10);
    this_02 = (NetworkMgr *)NetworkMgr::Instance();
    iVar2 = NetworkMgr::GetNewNetWorkProcess(this_02);
    iVar1 = *(int *)(this + 0x1ac);
    iVar3 = GetRewardQuantity(this);
    INetworkMsgProcess::VerifySalesReward(iVar2,iVar1,iVar3);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SalesUI::SecondConfirmBuy() */

void __thiscall SalesUI::SecondConfirmBuy(SalesUI *this)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  OnSetUpSalesBought(this);
  OnSalesBought(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesUI::GetPrices() */

void __thiscall SalesUI::GetPrices(SalesUI *this)

{
  ProfileMgr *this_00;
  long lVar1;
  undefined4 uVar2;
  CurrentSalesInfo aCStack_38 [24];
  undefined8 local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar1 = ProfileMgr::GetCurrentProfile(this_00);
  uVar2 = 0;
  if ((lVar1 != 0) && (uVar2 = 0, *(int *)(this + 0x1b0) <= *(int *)(this + 0x1b4))) {
    PlayerInfo::GetCurrentSalesInfo();
    lVar1 = FUN_04a57b14(local_20,(long)*(int *)(this + 0x1b0));
    uVar2 = *(undefined4 *)(lVar1 + 4);
    CurrentSalesInfo::~CurrentSalesInfo(aCStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* SalesUI::SalesUI() */

void __thiscall SalesUI::SalesUI(SalesUI *this)

{
  PopingWidget::PopingWidget((PopingWidget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x120));
  *(undefined ***)this = &PTR_GetClass_06936f80;
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_069372c8;
  Sexy::Insets::Insets((Insets *)(this + 0x128));
  Sexy::Insets::Insets((Insets *)(this + 0x138));
  Sexy::Insets::Insets((Insets *)(this + 0x148));
  Sexy::Insets::Insets((Insets *)(this + 0x158));
  Sexy::Insets::Insets((Insets *)(this + 0x168));
  Sexy::Insets::Insets((Insets *)(this + 0x178));
  Sexy::Insets::Insets((Insets *)(this + 0x188));
  Sexy::Insets::Insets((Insets *)(this + 0x198));
  FUN_05476574(this + 0x1b8);
  FUN_05476574(this + 0x1c0);
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x1c8));
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x1f8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x228));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x240));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 600));
  SalesProgressBar::SalesProgressBar((SalesProgressBar *)(this + 0x260));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x498));
  Sexy::Color::Color((Color *)(this + 0x4f8));
  return;
}


/* SalesUI::ReleaseResourceGroups() */

void __thiscall SalesUI::ReleaseResourceGroups(SalesUI *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x240);
  uVar1 = FUN_04a5a5dc(DAT_06b7cea0);
  uVar2 = FUN_04a5a62c(DAT_06b7cea8);
  FUN_04a5c614(uVar1,uVar2);
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  FUN_04a5a208(uVar1,uVar2);
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)this_00);
  return;
}


/* SalesUI::~SalesUI() */

void __thiscall SalesUI::~SalesUI(SalesUI *this)

{
  PrimeText *this_00;
  
  *(undefined ***)this = &PTR_GetClass_06936f80;
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_069372c8;
  ReleaseBoardView(this);
  RemoveAllSalesButtons(this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  ReleaseResourceGroups(this);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  std::vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>>::~vector
            ((vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>> *)(this + 0x498));
  SalesProgressBar::~SalesProgressBar((SalesProgressBar *)(this + 0x260));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 600));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x240));
  std::vector<SalesButton*,std::allocator<SalesButton*>>::~vector
            ((vector<SalesButton*,std::allocator<SalesButton*>> *)(this + 0x228));
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x1f8));
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x1c8));
  FUN_05476c50(this + 0x1c0);
  FUN_05476c50(this + 0x1b8);
  PopingWidget::~PopingWidget((PopingWidget *)this);
  return;
}


/* SalesUI::~SalesUI() */

void __thiscall SalesUI::~SalesUI(SalesUI *this)

{
  ~SalesUI(this);
  AK::FreeHook(this);
  return;
}


/* SalesUI::CreateRewardBox() */

void __thiscall SalesUI::CreateRewardBox(SalesUI *this)

{
  char *pcVar1;
  SalesRewardBox *this_00;
  
  if (*(long *)(this + 0x510) != 0) {
    return;
  }
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
  this_00 = ::operator_new(0x2b0);
  SalesRewardBox::SalesRewardBox(this_00);
  *(SalesRewardBox **)(this + 0x510) = this_00;
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360));
  return;
}


/* SalesUI::ShowRewardBox() */

void __thiscall SalesUI::ShowRewardBox(SalesUI *this)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  cVar1 = IsRewardBoxInited(this);
  if (cVar1 != '\0') {
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x510));
    LawnApp::PushOverlaysToTop(gLawnApp);
    pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar3,"Play_UI_Map_PopUp_Reward");
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x510));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x510));
    MessageRouter::Post<std::string_const&,char_const*>
              ((MessageRouter *)gMessageRouter,Message::OpenUI,"SalesBox");
    lVar5 = *(long *)(this + 0x510);
    if (lVar5 != 0) {
      uVar4 = operator|(0x10,0x20);
      uVar4 = operator|(uVar4,0x1000);
      uVar2 = operator|(uVar4,0x2000);
      PopingWidget::NormalInit((PopingWidget *)0x3e99999a,lVar5,uVar2);
      (**(code **)(**(long **)(this + 0x510) + 0x310))(*(long **)(this + 0x510));
      return;
    }
  }
  return;
}


/* SalesUI::KillRewardBox() */

void __thiscall SalesUI::KillRewardBox(SalesUI *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x510) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))
              ((long *)gLawnApp[0x6c],*(undefined8 *)(this + 0x510));
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x510));
    *(undefined8 *)(this + 0x510) = 0;
  }
  return;
}


/* SalesUI::BackToMap() */

void __thiscall SalesUI::BackToMap(SalesUI *this)

{
  LawnApp *this_00;
  char cVar1;
  
  if (gLawnApp != (LawnApp *)0x0) {
    LawnApp::KillPVZ2Dialog(gLawnApp);
    cVar1 = FUN_04a57994(*(undefined8 *)(this + 0x510));
    if (cVar1 != '\0') {
      KillRewardBox(this);
    }
    this_00 = gLawnApp;
    cVar1 = LawnApp::IsSalesUIValid(gLawnApp);
    if (cVar1 != '\0') {
      LawnApp::KillSalesUI(this_00);
      return;
    }
  }
  return;
}


/* SalesUI::InitRewardBox(bool, int) */

void __thiscall SalesUI::InitRewardBox(SalesUI *this,bool param_1,int param_2)

{
  SalesProgressBar *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  this_00 = (SalesProgressBar *)(this + 0x260);
  iVar2 = SalesProgressBar::GetCurrentLevel(this_00);
  iVar3 = SalesProgressBar::GetCurrentPieces(this_00);
  iVar4 = SalesProgressBar::GetAdvancePieves(this_00);
  if ((*(long *)(this + 0x510) != 0) && (cVar1 = IsRewardBoxInited(this), cVar1 == '\0')) {
    SalesRewardBox::InitBox
              (*(SalesRewardBox **)(this + 0x510),param_1,*(int *)(this + 0x1ac),iVar2,param_2,iVar3
               ,iVar4);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesUI::InitPlantPreview() */

void __thiscall SalesUI::InitPlantPreview(SalesUI *this)

{
  EffectAnim_UIAnim *this_00;
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  LotteryResultProgressBar *pLVar9;
  SalesProgressBar *pSVar10;
  ProfileMgr *this_01;
  long lVar11;
  string asStack_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  string asStack_20 [8];
  int local_18;
  int iStack_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PopingWidget::GetMainRect();
  iVar8 = local_18;
  iVar3 = FUN_04a58180(0x28);
  PopingWidget::GetMainRect();
  iVar1 = iStack_14;
  iVar4 = FUN_04a58180(100);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7c8d8);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7c8d8);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar10);
  Sexy::Insets::Insets((Insets *)&local_18,iVar8 + iVar3,iVar1 + iVar4,iVar5,iVar6);
  *(ulong *)(this + 0x168) = CONCAT44(iStack_14,local_18);
  *(ulong *)(this + 0x170) = CONCAT44(local_c,local_10);
  iVar6 = FUN_04a58180(100);
  iVar7 = FUN_04a58180(10);
  Sexy::Insets::Insets
            ((Insets *)&local_18,(iVar8 + iVar3 + iVar5) - iVar6,iVar7 + iVar1 + iVar4,iVar6,iVar6);
  *(ulong *)(this + 0x158) = CONCAT44(iStack_14,local_18);
  *(ulong *)(this + 0x160) = CONCAT44(local_c,local_10);
  PopingWidget::GetMainRect();
  iVar8 = local_18;
  iVar3 = FUN_04a58180(0x28);
  PopingWidget::GetMainRect();
  iVar1 = iStack_14;
  iVar4 = FUN_04a58180(0x87);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7c8d8);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7c8d8);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar10);
  Sexy::Insets::Insets((Insets *)&local_18,iVar8 + iVar3,iVar1 + iVar4,iVar5,iVar6);
  std::vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>>::push_back
            ((vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>> *)(this + 0x498),
             (TRect *)(this + 0x158));
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar11 = ProfileMgr::GetCurrentProfile(this_01);
  if (lVar11 != 0) {
    iVar8 = PlantChipNameMapperServerID::GetInstance();
    this_00 = (EffectAnim_UIAnim *)(this + 0x1f8);
    NameMapperBase::GetNameForId(iVar8);
    iVar8 = FUN_04a58180(10);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_28,(float)(local_18 + local_10 / 2),
               (float)(iStack_14 + iVar8 + local_c / 2));
    FUN_05475d88(asStack_20,asStack_30);
    EffectAnim_UIAnim::InitPlantUIAnim(0x3fb33333,local_28,local_24,this_00,asStack_20,1);
    std::string::~string(asStack_20);
    cVar2 = EffectAnim_UIAnim::IsValid(this_00);
    if (cVar2 != '\0') {
      EffectAnim_UIAnim::HideAvatarLayer(this_00);
      EffectAnim_UIAnim::PlayIdleLoop(this_00);
    }
    ResetLevelImg(this);
    std::string::~string(asStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SalesUI::OnRefresh() */

void __thiscall SalesUI::OnRefresh(SalesUI *this)

{
  ResetLevelImg(this);
  SalesProgressBar::OnRefresh((bool)((char)this + '`'));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesUI::OnVerifiedSales(bool) */

void __thiscall SalesUI::OnVerifiedSales(SalesUI *this,bool param_1)

{
  LawnApp *this_00;
  char cVar1;
  ProfileMgr *this_01;
  long lVar2;
  PVZ2UIDialog *pPVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  wstring awStack_70 [8];
  Delegate0 aDStack_68 [48];
  wstring awStack_38 [24];
  undefined8 local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  OnSalesBought(this);
  this_00 = gLawnApp;
  if (param_1) {
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar2 = ProfileMgr::GetCurrentProfile(this_01);
    if (lVar2 == 0) {
      iVar5 = 0;
      iVar6 = iVar5;
    }
    else if (*(int *)(this + 0x1b4) < *(int *)(this + 0x1b0)) {
      iVar5 = 0;
      iVar6 = 0;
    }
    else {
      PlayerInfo::GetCurrentSalesInfo();
      lVar2 = FUN_04a57b14(local_20,(long)*(int *)(this + 0x1b0));
      iVar5 = *(int *)(lVar2 + 4);
      CurrentSalesInfo::~CurrentSalesInfo((CurrentSalesInfo *)awStack_38);
      PlayerInfo::GetCurrentSalesInfo();
      piVar4 = (int *)FUN_04a57b14(local_20,(long)*(int *)(this + 0x1b0));
      iVar6 = *piVar4;
      CurrentSalesInfo::~CurrentSalesInfo((CurrentSalesInfo *)awStack_38);
    }
    MessageRouter::Post<int,int,int,int>
              ((MessageRouter *)gMessageRouter,Message::LimitedSalesBought,iVar5,iVar6);
    OnRefresh(this);
    cVar1 = IsRewardBoxInited(this);
    if (cVar1 != '\0') {
      ShowRewardBox(this);
    }
  }
  else {
    FUN_05478178(awStack_70,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_80);
    FUN_05478178(awStack_38,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_78);
    pPVar3 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_70,awStack_38);
    FUN_05476c50(awStack_38);
    nop();
    FUN_05476c50(awStack_70);
    nop();
    FUN_05478178(awStack_70,L"[DIALOG_STRING_OK]",auStack_78);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_68,awStack_38);
    PVZ2UIDialog::AddButton(pPVar3,awStack_70,aDStack_68,0);
    FUN_05476c50(awStack_70);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SalesUI::AddLoadingGroup(std::string) */

void __thiscall SalesUI::AddLoadingGroup(SalesUI *this,string *param_2)

{
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x240),param_2);
  LawnApp::LoadGroup(gLawnApp,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesUI::InitSalesButtons() */

void __thiscall SalesUI::InitSalesButtons(SalesUI *this)

{
  vector<SalesButton*,std::allocator<SalesButton*>> *this_00;
  ButtonListener *pBVar1;
  vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>> *this_01;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  SalesButton *pSVar12;
  PVZ2UIButton *pPVar13;
  NameMapperBase *this_02;
  string *psVar14;
  PlantType *this_03;
  long lVar15;
  long lVar16;
  code *pcVar17;
  undefined1 auStack_78 [8];
  wstring awStack_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar12 = ::operator_new(0x1c8);
  SalesButton::SalesButton(pSVar12);
  *(SalesButton **)(this + 0x4b0) = pSVar12;
  iVar2 = *(int *)(this + 0x188) + *(int *)(this + 400) / 2;
  if (*(int *)(this + 0x1b4) < 3) {
    this_02 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
    cVar5 = NameMapperBase::ContainsId(this_02,*(int *)(this + 0x1ac));
    if (cVar5 != '\0') {
      iVar11 = PlantChipNameMapperServerID::GetInstance();
      NameMapperBase::GetNameForId(iVar11);
      psVar14 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar14);
      this_03 = (PlantType *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18)
      ;
      lVar15 = PlantType::GetProps(this_03);
      if (*(int *)(lVar15 + 0x2c) < 4) {
        *(undefined4 *)(this + 0x1b0) = 0;
        *(undefined4 *)(this + 0x1b4) = 1;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      std::string::~string((string *)aIStack_28);
    }
  }
  Sexy::Insets::Insets((Insets *)&local_68);
  Sexy::Insets::Insets((Insets *)&local_58);
  Sexy::Insets::Insets((Insets *)&local_48);
  if (*(int *)(this + 0x1b4) == 1) {
    *(undefined4 *)(this + 0x1b0) = 0;
    iVar10 = FUN_04a58180(300);
    iVar6 = FUN_04a58180(0x3c);
    iVar11 = *(int *)(this + 0x18c);
    iVar7 = FUN_04a58180(0x50);
    Sexy::Insets::Insets((Insets *)&local_18,iVar2 - iVar10 / 2,iVar6 + iVar11,iVar10,iVar7);
    local_68 = local_18;
    local_60 = uStack_10;
  }
  else if (*(int *)(this + 0x1b4) == 2) {
    iVar10 = FUN_04a58180(0x23);
    iVar2 = *(int *)(this + 0x188);
    iVar6 = FUN_04a58180(0x3c);
    iVar11 = *(int *)(this + 0x18c);
    iVar7 = FUN_04a58180(300);
    iVar8 = FUN_04a58180(0x50);
    Sexy::Insets::Insets((Insets *)&local_18,iVar10 + iVar2,iVar6 + iVar11,iVar7,iVar8);
    iVar2 = *(int *)(this + 0x188);
    iVar11 = *(int *)(this + 400);
    local_68 = local_18;
    local_60 = uStack_10;
    iVar6 = FUN_04a58180(300);
    iVar7 = FUN_04a58180(0x23);
    iVar8 = FUN_04a58180(0x3c);
    iVar10 = *(int *)(this + 0x18c);
    iVar9 = FUN_04a58180(0x50);
    Sexy::Insets::Insets
              ((Insets *)&local_18,((iVar2 + iVar11) - iVar6) - iVar7,iVar8 + iVar10,iVar6,iVar9);
    local_58 = local_18;
    local_50 = uStack_10;
  }
  else {
    iVar6 = FUN_04a58180(5);
    iVar11 = *(int *)(this + 0x188);
    iVar7 = FUN_04a58180(0x3c);
    iVar10 = *(int *)(this + 0x18c);
    iVar8 = FUN_04a58180(200);
    iVar9 = FUN_04a58180(0x50);
    Sexy::Insets::Insets((Insets *)&local_18,iVar6 + iVar11,iVar7 + iVar10,iVar8,iVar9);
    local_68 = local_18;
    local_60 = uStack_10;
    iVar10 = FUN_04a58180(200);
    iVar6 = FUN_04a58180(0x3c);
    iVar11 = *(int *)(this + 0x18c);
    iVar7 = FUN_04a58180(0x50);
    Sexy::Insets::Insets((Insets *)&local_18,iVar2 - iVar10 / 2,iVar6 + iVar11,iVar10,iVar7);
    iVar2 = *(int *)(this + 0x188);
    iVar11 = *(int *)(this + 400);
    local_58 = local_18;
    local_50 = uStack_10;
    iVar6 = FUN_04a58180(200);
    iVar7 = FUN_04a58180(5);
    iVar8 = FUN_04a58180(0x3c);
    iVar10 = *(int *)(this + 0x18c);
    iVar9 = FUN_04a58180(0x50);
    Sexy::Insets::Insets
              ((Insets *)&local_18,((iVar2 + iVar11) - iVar6) - iVar7,iVar8 + iVar10,iVar6,iVar9);
    local_48 = local_18;
    local_40 = uStack_10;
  }
  this_00 = (vector<SalesButton*,std::allocator<SalesButton*>> *)(this + 0x228);
  pSVar12 = *(SalesButton **)(this + 0x4b0);
  Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&local_68);
  pBVar1 = (ButtonListener *)(this + 0x120);
  this_01 = (vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>> *)(this + 0x498);
  SalesButton::InitSalesButton(pSVar12,(Insets *)&local_18,0);
  std::vector<SalesButton*,std::allocator<SalesButton*>>::push_back
            (this_00,(SalesButton **)(this + 0x4b0));
  FUN_05478178(aIStack_28,&DAT_056f11a8,aIStack_38);
  Sexy::Color::Color((Color *)&local_18,1);
  pPVar13 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar13,1,pBVar1,(wstring *)aIStack_28,(Color *)&local_18);
  *(PVZ2UIButton **)(this + 0x4c8) = pPVar13;
  FUN_05476c50(aIStack_28);
  nop();
  (**(code **)(**(long **)(this + 0x4c8) + 0x1a0))(*(long **)(this + 0x4c8),(Insets *)&local_68);
  (**(code **)(**(long **)(this + 0x4c8) + 0x188))(*(long **)(this + 0x4c8),1);
  lVar15 = *(long *)(this + 0x4c8);
  pcVar17 = *(code **)(*(long *)this + 0x60);
  *(undefined1 *)(lVar15 + 0x59) = 0;
  (*pcVar17)(this,lVar15);
  uVar4 = local_60;
  uVar3 = local_68;
  iVar2 = local_68._4_4_;
  iVar11 = FUN_04a58180(0xa5);
  Sexy::Insets::Insets(aIStack_38,(int)uVar3,iVar2,(int)uVar4,iVar11);
  FUN_05478178(aIStack_28,&DAT_056f11a8,awStack_70);
  Sexy::Color::Color((Color *)&local_18,1);
  pPVar13 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar13,4,pBVar1,(wstring *)aIStack_28,(Color *)&local_18);
  *(PVZ2UIButton **)(this + 0x4e0) = pPVar13;
  FUN_05476c50(aIStack_28);
  nop();
  (**(code **)(**(long **)(this + 0x4e0) + 0x1a0))(*(long **)(this + 0x4e0),aIStack_38);
  (**(code **)(**(long **)(this + 0x4e0) + 0x188))(*(long **)(this + 0x4e0),1);
  lVar16 = *(long *)(this + 0x4e0);
  lVar15 = *(long *)(this + 0x4b0);
  *(undefined1 *)(lVar16 + 0x59) = 0;
  FUN_04a57fb8(lVar15 + 0x138,lVar16);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x4e0));
  std::vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>>::push_back
            (this_01,(TRect *)&local_68);
  std::vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>>::push_back
            (this_01,(TRect *)aIStack_38);
  if (1 < *(int *)(this + 0x1b4)) {
    pSVar12 = ::operator_new(0x1c8);
    SalesButton::SalesButton(pSVar12);
    *(SalesButton **)(this + 0x4b8) = pSVar12;
    Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&local_58);
    SalesButton::InitSalesButton(pSVar12,(Insets *)&local_18,1);
    std::vector<SalesButton*,std::allocator<SalesButton*>>::push_back
              (this_00,(SalesButton **)(this + 0x4b8));
    FUN_05478178(aIStack_28,&DAT_056f11a8,awStack_70);
    Sexy::Color::Color((Color *)&local_18,1);
    pPVar13 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar13,2,pBVar1,(wstring *)aIStack_28,(Color *)&local_18);
    *(PVZ2UIButton **)(this + 0x4d0) = pPVar13;
    FUN_05476c50(aIStack_28);
    nop();
    (**(code **)(**(long **)(this + 0x4d0) + 0x1a0))(*(long **)(this + 0x4d0),(Insets *)&local_58);
    (**(code **)(**(long **)(this + 0x4d0) + 0x188))(*(long **)(this + 0x4d0),1);
    lVar15 = *(long *)(this + 0x4d0);
    pcVar17 = *(code **)(*(long *)this + 0x60);
    *(undefined1 *)(lVar15 + 0x59) = 0;
    (*pcVar17)(this,lVar15);
    uVar4 = local_50;
    uVar3 = local_58;
    iVar2 = local_58._4_4_;
    iVar11 = FUN_04a58180(0xa5);
    Sexy::Insets::Insets(aIStack_28,(int)uVar3,iVar2,(int)uVar4,iVar11);
    FUN_05478178(awStack_70,&DAT_056f11a8,auStack_78);
    Sexy::Color::Color((Color *)&local_18,1);
    pPVar13 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar13,5,pBVar1,awStack_70,(Color *)&local_18);
    *(PVZ2UIButton **)(this + 0x4e8) = pPVar13;
    FUN_05476c50(awStack_70);
    nop();
    (**(code **)(**(long **)(this + 0x4e8) + 0x1a0))(*(long **)(this + 0x4e8),aIStack_28);
    (**(code **)(**(long **)(this + 0x4e8) + 0x188))(*(long **)(this + 0x4e8),1);
    lVar16 = *(long *)(this + 0x4e8);
    lVar15 = *(long *)(this + 0x4b8);
    *(undefined1 *)(lVar16 + 0x59) = 0;
    FUN_04a57fb8(lVar15 + 0x138,lVar16);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x4e8));
    std::vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>>::push_back
              (this_01,(TRect *)&local_58);
    std::vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>>::push_back
              (this_01,(TRect *)aIStack_28);
    if (2 < *(int *)(this + 0x1b4)) {
      pSVar12 = ::operator_new(0x1c8);
      SalesButton::SalesButton(pSVar12);
      *(SalesButton **)(this + 0x4c0) = pSVar12;
      Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&local_48);
      SalesButton::InitSalesButton(pSVar12,(Insets *)&local_18,2);
      std::vector<SalesButton*,std::allocator<SalesButton*>>::push_back
                (this_00,(SalesButton **)(this + 0x4c0));
      FUN_05478178(aIStack_28,&DAT_056f11a8,awStack_70);
      Sexy::Color::Color((Color *)&local_18,1);
      pPVar13 = ::operator_new(0x300);
      PVZ2UIButton::PVZ2UIButton(pPVar13,3,pBVar1,(wstring *)aIStack_28,(Color *)&local_18);
      *(PVZ2UIButton **)(this + 0x4d8) = pPVar13;
      FUN_05476c50(aIStack_28);
      nop();
      (**(code **)(**(long **)(this + 0x4d8) + 0x1a0))(*(long **)(this + 0x4d8),(Insets *)&local_48)
      ;
      (**(code **)(**(long **)(this + 0x4d8) + 0x188))(*(long **)(this + 0x4d8),1);
      lVar15 = *(long *)(this + 0x4d8);
      pcVar17 = *(code **)(*(long *)this + 0x60);
      *(undefined1 *)(lVar15 + 0x59) = 0;
      (*pcVar17)(this,lVar15);
      uVar4 = local_40;
      uVar3 = local_48;
      iVar2 = local_48._4_4_;
      iVar11 = FUN_04a58180(0xa5);
      Sexy::Insets::Insets(aIStack_28,(int)uVar3,iVar2,(int)uVar4,iVar11);
      FUN_05478178(awStack_70,&DAT_056f11a8,auStack_78);
      Sexy::Color::Color((Color *)&local_18,1);
      pPVar13 = ::operator_new(0x300);
      PVZ2UIButton::PVZ2UIButton(pPVar13,6,pBVar1,awStack_70,(Color *)&local_18);
      *(PVZ2UIButton **)(this + 0x4f0) = pPVar13;
      FUN_05476c50(awStack_70);
      nop();
      (**(code **)(**(long **)(this + 0x4f0) + 0x1a0))(*(long **)(this + 0x4f0),aIStack_28);
      (**(code **)(**(long **)(this + 0x4f0) + 0x188))(*(long **)(this + 0x4f0),1);
      lVar16 = *(long *)(this + 0x4f0);
      lVar15 = *(long *)(this + 0x4c0);
      *(undefined1 *)(lVar16 + 0x59) = 0;
      FUN_04a57fb8(lVar15 + 0x138,lVar16);
      (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x4f0));
      std::vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>>::push_back
                (this_01,(TRect *)&local_48);
      std::vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>>::push_back
                (this_01,(TRect *)aIStack_28);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesUI::InitView() */

void __thiscall SalesUI::InitView(SalesUI *this)

{
  EffectAnim_UIAnim *this_00;
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  LotteryResultProgressBar *pLVar10;
  SalesProgressBar *pSVar11;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  PVZ2UIButton *pPVar12;
  undefined4 uVar13;
  undefined1 auStack_80 [8];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x520] = (SalesUI)0x1;
  uVar13 = PVZ_EOT();
  this[0x59] = (SalesUI)0x0;
  *(undefined4 *)(this + 0x524) = uVar13;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  std::vector<SalesButton*,std::allocator<SalesButton*>>::clear
            ((vector<SalesButton*,std::allocator<SalesButton*>> *)(this + 0x228));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x240));
  std::vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>>::clear
            ((vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>> *)(this + 0x498));
  *(undefined8 *)(this + 0x508) = 0;
  *(undefined8 *)(this + 0x510) = 0;
  *(undefined8 *)(this + 0x518) = 0;
  this[0x1a9] = (SalesUI)0x0;
  this[0x1a8] = (SalesUI)0x0;
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1b4) = 0;
  Sexy::Color::Color((Color *)&local_40,1);
  *(ulong *)(this + 0x4f8) = CONCAT44(uStack_3c,local_40);
  *(undefined8 *)(this + 0x500) = uStack_38;
  iVar3 = FUN_04a58180(0x2ee);
  iVar4 = FUN_04a58180(500);
  iVar1 = *(int *)(this + 0x50) - iVar3 >> 1;
  iVar5 = FUN_04a58180(0);
  iVar9 = iVar1 + iVar3 / 2;
  iVar5 = iVar5 + (*(int *)(this + 0x54) - iVar4 >> 1);
  Sexy::Insets::Insets((Insets *)&local_40,iVar1,iVar5,iVar3,iVar4);
  PopingWidget::SetMainRect((PopingWidget *)this,(Insets *)&local_40);
  iVar4 = FUN_04a58180(0x87);
  iVar6 = FUN_04a58180(10);
  iVar7 = FUN_04a58180(0x28);
  Sexy::Insets::Insets((Insets *)&local_40,iVar9 - iVar4 / 2,iVar6 + iVar5,iVar4,iVar7);
  *(ulong *)(this + 0x128) = CONCAT44(uStack_3c,local_40);
  *(undefined8 *)(this + 0x130) = uStack_38;
  TodStringTranslate(L"[SALES_TITLE]");
  FUN_054766c8(this + 0x1b8,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7cad0);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  iVar9 = iVar9 - iVar4 / 2;
  iVar4 = FUN_04a58180(0x3c);
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7cad0);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7cad0);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar11);
  Sexy::Insets::Insets((Insets *)&local_40,iVar9,iVar4 + iVar5,iVar6,iVar7);
  *(ulong *)(this + 0x138) = CONCAT44(uStack_3c,local_40);
  *(undefined8 *)(this + 0x140) = uStack_38;
  iVar6 = FUN_04a58180(0x8c);
  iVar8 = FUN_04a58180(100);
  Sexy::Insets::Insets((Insets *)&local_40,iVar6 + iVar9,iVar4 + iVar5,iVar8,iVar7);
  *(ulong *)(this + 0x148) = CONCAT44(uStack_3c,local_40);
  *(undefined8 *)(this + 0x150) = uStack_38;
  iVar4 = FUN_04a58180(0x1e);
  iVar9 = iVar3 + iVar4 * -2;
  iVar6 = FUN_04a58180(0x140);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7c8b0);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar11);
  Sexy::Insets::Insets((Insets *)&local_40,iVar4 + iVar1,iVar6 + iVar5,iVar9,iVar7);
  *(ulong *)(this + 0x188) = CONCAT44(uStack_3c,local_40);
  *(undefined8 *)(this + 400) = uStack_38;
  iVar7 = FUN_04a58180(0xf);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7caf8);
  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar11);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar7 + iVar4 + iVar1,iVar6 + iVar5 + iVar7,iVar9 + iVar7 * -2,
             iVar8);
  *(ulong *)(this + 0x198) = CONCAT44(uStack_3c,local_40);
  *(undefined8 *)(this + 0x1a0) = uStack_38;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  if (this_02 != (PlayerInfo *)0x0) {
    PlayerInfo::GetCurrentSalesInfo();
    *(undefined4 *)(this + 0x1ac) = uStack_3c;
    CurrentSalesInfo::~CurrentSalesInfo((CurrentSalesInfo *)&local_40);
    PlayerInfo::GetCurrentSalesInfo();
    this[0x1a9] = local_40._0_1_;
    CurrentSalesInfo::~CurrentSalesInfo((CurrentSalesInfo *)&local_40);
    iVar9 = PlayerInfo::GetCurrentSalesPricesCount(this_02);
    if (iVar9 == 0) {
      *(undefined4 *)(this + 0x1b0) = 0;
      *(undefined4 *)(this + 0x1b4) = 1;
    }
    else {
      *(int *)(this + 0x1b4) = iVar9;
      *(int *)(this + 0x1b0) = iVar9 + -1;
    }
  }
  this_00 = (EffectAnim_UIAnim *)(this + 0x1c8);
  InitBoardView(this);
  InitPlantPreview(this);
  InitSalesButtons(this);
  Sexy::Insets::Insets((Insets *)&local_40,(Insets *)(this + 0x198));
  SalesProgressBar::InitView((SalesProgressBar *)(this + 0x260),(Insets *)&local_40);
  std::string::string((string *)&local_40,"POPANIM_EFFECTS_SALES_NEW");
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_78,(float)(*(int *)(this + 0x158) + *(int *)(this + 0x160) / 2),
             (float)(*(int *)(this + 0x15c) + *(int *)(this + 0x164) / 2));
  EffectAnim_UIAnim::InitUIAnim(0x3f70a3d7,local_78,local_74,this_00,(Insets *)&local_40,1);
  std::string::~string((string *)&local_40);
  nop();
  if ((this[0x1a9] != (SalesUI)0x0) && (cVar2 = EffectAnim_UIAnim::IsValid(this_00), cVar2 != '\0'))
  {
    std::string::string((string *)&local_40,"bubble_normal");
    EffectAnim_UIAnim::PlayLoop(this_00,(Insets *)&local_40);
    std::string::~string((string *)&local_40);
    nop();
  }
  FUN_05478178((FastCurve *)&local_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar12,0,(ButtonListener *)(this + 0x120),(wstring *)&local_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x508) = pPVar12;
  FUN_05476c50((FastCurve *)&local_78);
  nop();
  pPVar12 = *(PVZ2UIButton **)(this + 0x508);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_78,&DAT_06b7c888,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b7cd80,3);
  PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)&local_78,(PVZ2UIImage *)&local_40);
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7c888);
  iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7c888);
  uVar13 = SalesProgressBar::GetCurrentLevel(pSVar11);
  iVar4 = FUN_04a58180(0xfffffff6);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7c888);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar11);
  iVar7 = FUN_04a58180(4);
  (**(code **)(**(long **)(this + 0x508) + 0x198))
            (*(long **)(this + 0x508),((iVar1 + iVar3) - iVar9) + iVar4,(iVar5 - iVar6) + iVar7,
             iVar9,uVar13);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x508));
  (**(code **)(*(long *)this + 0x318))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesUI::Init() */

void __thiscall SalesUI::Init(SalesUI *this)

{
  undefined *puVar1;
  PrimeText *this_00;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  CBMemberTranslatorX aCStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  *(undefined8 *)(this + 0x4c8) = 0;
  *(undefined8 *)(this + 0x4d0) = 0;
  *(undefined8 *)(this + 0x4d8) = 0;
  *(undefined8 *)(this + 0x4e0) = 0;
  *(undefined8 *)(this + 0x4e8) = 0;
  *(undefined8 *)(this + 0x4f0) = 0;
  FUN_054772c4(this + 0x1b8,&DAT_056f11a8);
  FUN_054772c4(this + 0x1c0,&DAT_056f11a8);
  AddResourceGroups();
  RemoveAllSalesButtons(this);
  InitView(this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnSalesBought);
  Sexy::Delegate0::Delegate0<SalesUI,void(SalesUI::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::SalesBought,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnVerifiedSales);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::Subscribe<bool,Sexy::CBMemberTranslatorX<SalesUI,void(SalesUI::*)(bool)>>
            ((MessageRouter *)puVar1,Message::VerifiedSales,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnSetUpSalesBought);
  Sexy::Delegate0::Delegate0<SalesUI,void(SalesUI::*)()>(aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::SetUpSalesBought,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesUI::RefreshSalesButtons() */

void __thiscall SalesUI::RefreshSalesButtons(SalesUI *this)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NameMapperBase *this_02;
  string *psVar3;
  PlantType *this_03;
  long lVar4;
  int iVar5;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 == (PlayerInfo *)0x0) {
    iVar2 = *(int *)(this + 0x1b4);
  }
  else {
    iVar2 = PlayerInfo::GetCurrentSalesPricesCount(this_01);
    if (iVar2 == 0) {
      iVar5 = 0;
      *(undefined4 *)(this + 0x1b4) = 1;
      iVar2 = 1;
    }
    else {
      *(int *)(this + 0x1b4) = iVar2;
      iVar5 = iVar2 + -1;
    }
    *(int *)(this + 0x1b0) = iVar5;
  }
  if (iVar2 < 3) {
    this_02 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
    cVar1 = NameMapperBase::ContainsId(this_02,*(int *)(this + 0x1ac));
    if (cVar1 != '\0') {
      iVar2 = PlantChipNameMapperServerID::GetInstance();
      NameMapperBase::GetNameForId(iVar2);
      psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
      this_03 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      lVar4 = PlantType::GetProps(this_03);
      if (*(int *)(lVar4 + 0x2c) < 4) {
        *(undefined4 *)(this + 0x1b0) = 0;
        *(undefined4 *)(this + 0x1b4) = 1;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      std::string::~string(asStack_18);
    }
  }
  RemoveAllSalesButtons(this);
  InitSalesButtons(this);
  (**(code **)(*(long *)this + 0x318))(this);
  (**(code **)(*(long *)this + 800))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesUI::OnChangePlant() */

void __thiscall SalesUI::OnChangePlant(SalesUI *this)

{
  bool bVar1;
  char cVar2;
  PrimeText *this_00;
  ProfileMgr *this_01;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_40;
  undefined8 local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar3 = ProfileMgr::GetCurrentProfile(this_01);
  if (lVar3 != 0) {
    PlayerInfo::GetCurrentSalesInfo();
    *(undefined4 *)(this + 0x1ac) = local_38._4_4_;
    CurrentSalesInfo::~CurrentSalesInfo((CurrentSalesInfo *)&local_38);
    PlayerInfo::GetCurrentSalesInfo();
    this[0x1a9] = local_38._0_1_;
    CurrentSalesInfo::~CurrentSalesInfo((CurrentSalesInfo *)&local_38);
    if (this[0x1a9] != (SalesUI)0x0) {
      cVar2 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x1c8));
      if (cVar2 != '\0') {
        std::string::string((string *)&local_40,"bubble_in");
        std::string::string((string *)&local_38,"bubble_normal");
        EffectAnim_UIAnim::PlayOnceThenLoop
                  ((EffectAnim_UIAnim *)(this + 0x1c8),(string *)&local_40,
                   (CurrentSalesInfo *)&local_38);
        std::string::~string((string *)&local_38);
        nop();
        std::string::~string((string *)&local_40);
        nop();
      }
    }
  }
  InitBoardView(this);
  InitPlantPreview(this);
  RefreshSalesButtons(this);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x228));
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x228));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    SalesButton::OnRefresh((SalesButton *)*puVar4);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  SalesProgressBar::OnRefresh((bool)((char)this + '`'));
  this[0x1a8] = (SalesUI)0x0;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesUI::UpdateTimeLabel() */

void __thiscall SalesUI::UpdateTimeLabel(SalesUI *this)

{
  int iVar1;
  LawnApp *this_00;
  char cVar2;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  long lVar3;
  ulong uVar4;
  PVZ2UIDialog *pPVar5;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  undefined8 local_50;
  undefined8 uStack_48;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  if (this_02 != (PlayerInfo *)0x0) {
    lVar3 = LawnApp::GetRealBeijingTime(gLawnApp);
    if (lVar3 < 1) {
      TodStringTranslate(L"[SALES_TIME_UNCONNECTED]");
      FUN_054766c8(this + 0x1c0,(Color *)&local_50);
      FUN_05476c50((Color *)&local_50);
      Sexy::Color::Color((Color *)&local_50,2);
      *(undefined8 *)(this + 0x4f8) = local_50;
      *(undefined8 *)(this + 0x500) = uStack_48;
    }
    else {
      uVar4 = PlayerInfo::GetCurrentSalesRefreshTime(this_02);
      lVar3 = (uVar4 & 0xffffffff) - lVar3;
      if (lVar3 < 0) {
        if (this[0x1a8] == (SalesUI)0x0) {
          this[0x1a8] = (SalesUI)0x1;
          PlayerInfo::TryNextSales(this_02,false);
          cVar2 = PlayerInfo::HasValidSales(this_02);
          this_00 = gLawnApp;
          if (cVar2 == '\0') {
            FUN_05478178(awStack_58,L"[SALES_REWARD_NO_VALID_SALES_TITLE]",auStack_68);
            FUN_05478178((wstring *)&local_50,L"[SALES_REWARD_NO_VALID_SALES]",auStack_60);
            pPVar5 = (PVZ2UIDialog *)
                     LawnApp::ShowPVZ2Dialog(this_00,awStack_58,(wstring *)&local_50);
            FUN_05476c50((wstring *)&local_50);
            nop();
            FUN_05476c50(awStack_58);
            nop();
            FUN_05478178(awStack_58,L"[BACK_TO_MAP]",auStack_60);
            Sexy::
            MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                      ((ReceivedDataCallback *)this,BackToMap);
            Sexy::Delegate0::Delegate0<SalesUI,void(SalesUI::*)()>(aDStack_38,(wstring *)&local_50);
            PVZ2UIDialog::AddButton(pPVar5,awStack_58,aDStack_38,0);
            FUN_05476c50(awStack_58);
            nop();
          }
          else {
            OnChangePlant(this);
          }
          goto LAB_04a6224c;
        }
        Sexy::Color::Color((Color *)&local_50,1);
        *(undefined8 *)(this + 0x4f8) = local_50;
        *(undefined8 *)(this + 0x500) = uStack_48;
      }
      else {
        Sexy::Color::Color((Color *)&local_50,1);
        *(undefined8 *)(this + 0x4f8) = local_50;
        *(undefined8 *)(this + 0x500) = uStack_48;
        if (0x1517f < lVar3) {
          TodStringTranslate(L"[SALES_TIME_DAYS]");
          TodReplaceNumberString(awStack_58,L"{DAYS}",(int)(lVar3 / 0x15180));
          FUN_054766c8(this + 0x1c0,(Color *)&local_50);
          FUN_05476c50((Color *)&local_50);
          FUN_05476c50(awStack_58);
          goto LAB_04a6224c;
        }
      }
      iVar1 = (int)(lVar3 / 0x3c);
      Sexy::StrFormat(L"%d:%02d:%02d",&local_50,lVar3 / 0xe10 & 0xffffffff,
                      (ulong)(uint)(iVar1 + (int)((lVar3 / 0x3c) / 0x3c) * -0x3c),
                      (ulong)(uint)((int)lVar3 + iVar1 * -0x3c));
      FUN_054766c8(this + 0x1c0,&local_50);
      FUN_05476c50(&local_50);
    }
  }
LAB_04a6224c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesUI::RecoverAllButtonAndAnims() */

void __thiscall SalesUI::RecoverAllButtonAndAnims(SalesUI *this)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  SalesButton *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  plVar5 = *(long **)(this + 0x508);
  local_8 = ___stack_chk_guard;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x158))(plVar5,1);
    (**(code **)(**(long **)(this + 0x508) + 0x188))(*(long **)(this + 0x508),0);
  }
  iVar1 = *(int *)(this + 0x1b4);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x228));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x228));
  while( true ) {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) break;
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_00 = (SalesButton *)*puVar6;
    if (this_00 != (SalesButton *)0x0) {
      SalesButton::SetVisible(this_00,true);
      iVar4 = FUN_04a57970(*(undefined4 *)(this_00 + 0x50));
      if (iVar1 + -1 == iVar4) {
        SalesButton::setState(this_00,2);
      }
      else {
        SalesButton::setState(this_00,1);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  plVar5 = *(long **)(this + 0x4c8);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x158))(plVar5,1);
    (**(code **)(**(long **)(this + 0x4c8) + 0x188))(*(long **)(this + 0x4c8),0);
  }
  plVar5 = *(long **)(this + 0x4d0);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x158))(plVar5,1);
    (**(code **)(**(long **)(this + 0x4d0) + 0x188))(*(long **)(this + 0x4d0),0);
  }
  plVar5 = *(long **)(this + 0x4d8);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x158))(plVar5,1);
    (**(code **)(**(long **)(this + 0x4d8) + 0x188))(*(long **)(this + 0x4d8),0);
  }
  plVar5 = *(long **)(this + 0x518);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x158))(plVar5,1);
  }
  SalesProgressBar::StartToShow((SalesProgressBar *)(this + 0x260));
  if (this[0x1a9] != (SalesUI)0x0) {
    cVar3 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x1c8));
    if (cVar3 != '\0') {
      std::string::string((string *)&local_18,"bubble_in");
      std::string::string((string *)&local_10,"bubble_normal");
      EffectAnim_UIAnim::PlayOnceThenLoop
                ((EffectAnim_UIAnim *)(this + 0x1c8),
                 (generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18,(string *)&local_10)
      ;
      std::string::~string((string *)&local_10);
      nop();
      std::string::~string((string *)&local_18);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesUI::PreviewSalesBtn(SalesButtonIndex) */

void __thiscall SalesUI::PreviewSalesBtn(SalesUI *this,int param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  SalesButton *pSVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x228);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) {
LAB_04a62944:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    pSVar5 = (SalesButton *)*puVar4;
    cVar1 = FUN_04a57974(pSVar5[0x40]);
    if ((cVar1 == '\0') && (iVar3 = FUN_04a57970(*(undefined4 *)(pSVar5 + 0x50)), iVar3 == param_2))
    {
      cVar1 = SalesButton::isInState(pSVar5,4);
      if ((cVar1 == '\0') &&
         ((cVar1 = SalesButton::isInState(pSVar5,5), cVar1 == '\0' &&
          (cVar1 = SalesButton::isInState(pSVar5,2), cVar1 == '\0')))) {
        local_18 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(this_00);
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_00);
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
              bVar2) {
          puVar4 = (undefined8 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
          pSVar5 = (SalesButton *)*puVar4;
          iVar3 = FUN_04a57970(*(undefined4 *)(pSVar5 + 0x50));
          if (param_2 == iVar3) {
            SalesButton::setState(pSVar5,2);
          }
          else {
            cVar1 = SalesButton::isInState(pSVar5,3);
            if (((cVar1 == '\0') && (cVar1 = SalesButton::isInState(pSVar5,1), cVar1 == '\0')) &&
               (cVar1 = SalesButton::isInState(pSVar5,5), cVar1 == '\0')) {
              SalesButton::setState(pSVar5,3);
            }
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
        }
      }
      goto LAB_04a62944;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesUI::BuySalesBtn(SalesButtonIndex) */

void __thiscall SalesUI::BuySalesBtn(SalesUI *this,int param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  LawnApp *pLVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ProfileMgr *this_01;
  PlayerInfo *pPVar5;
  PVZ2UIDialog *pPVar6;
  undefined8 *puVar7;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  PurchaseBroker *this_03;
  SalesButton *pSVar8;
  SalesButton *pSVar9;
  undefined4 uVar10;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  string asStack_60 [8];
  undefined8 local_58;
  undefined8 local_50 [3];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  iVar4 = PlantChipNameMapperServerID::GetInstance();
  NameMapperBase::GetNameForId(iVar4);
  if (pPVar5 != (PlayerInfo *)0x0) {
    FUN_05475d88((string *)local_50,asStack_60);
    cVar2 = PlayerInfo::HasRealLevelUpTo(pPVar5,(string *)local_50,0xffffffff);
    std::string::~string((string *)local_50);
    pLVar1 = gLawnApp;
    if (cVar2 != '\0') {
      FUN_05478178((wstring *)&local_58,L"[SALES_REWARD_HAS_MAX_LEVEL_TITLE]",auStack_70);
      FUN_05478178((string *)local_50,L"[SALES_REWARD_HAS_MAX_LEVEL]",auStack_68);
      pPVar6 = (PVZ2UIDialog *)
               LawnApp::ShowPVZ2Dialog(pLVar1,(wstring *)&local_58,(wstring *)local_50);
      FUN_05476c50((string *)local_50);
      nop();
      FUN_05476c50((wstring *)&local_58);
      nop();
      FUN_05478178((wstring *)&local_58,L"[DIALOG_STRING_OK]",auStack_68);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,(string *)local_50);
      PVZ2UIDialog::AddButton(pPVar6,(wstring *)&local_58,aDStack_38,0);
      FUN_05476c50((wstring *)&local_58);
      nop();
      goto LAB_04a62bb8;
    }
  }
  cVar2 = LawnApp::IsNetworkModuleOK();
  pLVar1 = gLawnApp;
  if (cVar2 == '\0') {
    FUN_05478178((wstring *)&local_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_70);
    FUN_05478178((string *)local_50,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_68);
    pPVar6 = (PVZ2UIDialog *)
             LawnApp::ShowPVZ2Dialog(pLVar1,(wstring *)&local_58,(wstring *)local_50);
    FUN_05476c50((string *)local_50);
    nop();
    FUN_05476c50((wstring *)&local_58);
    nop();
    FUN_05478178((wstring *)&local_58,L"[DIALOG_STRING_OK]",auStack_68);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,(string *)local_50);
    PVZ2UIDialog::AddButton(pPVar6,(wstring *)&local_58,aDStack_38,0);
    FUN_05476c50((wstring *)&local_58);
    nop();
  }
  else {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x228);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    local_50[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(this_00);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_58,(__normal_iterator *)local_50), bVar3)
    {
      puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58)
      ;
      pSVar8 = (SalesButton *)*puVar7;
      cVar2 = FUN_04a57974(pSVar8[0x40]);
      if ((cVar2 == '\0') &&
         (iVar4 = FUN_04a57970(*(undefined4 *)(pSVar8 + 0x50)), iVar4 == param_2)) {
        cVar2 = SalesButton::isInState(pSVar8,4);
        if ((cVar2 != '\0') || (cVar2 = SalesButton::isInState(pSVar8,2), cVar2 != '\0')) {
          pSVar8 = (SalesButton *)0x0;
          local_58 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin(this_00);
          local_50[0] = std::
                        vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        ::end(this_00);
          bVar3 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_58,(__normal_iterator *)local_50);
          pSVar9 = pSVar8;
          if (bVar3) {
            do {
              puVar7 = (undefined8 *)
                       std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
              pSVar8 = (SalesButton *)*puVar7;
              FUN_04a57978(pSVar8 + 0x40);
              cVar2 = SalesButton::isInState(pSVar8,4);
              if ((cVar2 == '\0') && (cVar2 = SalesButton::isInState(pSVar8,2), cVar2 == '\0')) {
                pSVar8 = pSVar9;
              }
              eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                        ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
              bVar3 = __gnu_cxx::operator!=
                                ((__normal_iterator *)&local_58,(__normal_iterator *)local_50);
              pSVar9 = pSVar8;
            } while (bVar3);
          }
          if (pSVar8 != (SalesButton *)0x0) {
            SalesButton::setState(pSVar8,5);
            this[0x520] = (SalesUI)0x0;
            uVar10 = PVZ_T();
            *(undefined4 *)(this + 0x524) = uVar10;
            this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
            this_03 = (PurchaseBroker *)
                      std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_rightmost(this_02);
            GetSkuId();
            PurchaseBroker::RequestPayment(this_03,(string *)local_50,0);
            std::string::~string((string *)local_50);
            OnSalesBought(this);
          }
        }
        break;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
    }
  }
LAB_04a62bb8:
  std::string::~string(asStack_60);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* SalesUI::ButtonDepress(int) */

void __thiscall SalesUI::ButtonDepress(SalesUI *this,int param_1)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0:
    LawnApp::KillSalesUI(gLawnApp);
    return;
  case 1:
    if (this[0x520] != (SalesUI)0x0) {
      *(undefined4 *)(this + 0x1b0) = 0;
      SalesProgressBar::RefreshAdvanceProgress((SalesProgressBar *)(this + 0x260));
      PreviewSalesBtn(this,0);
      return;
    }
    break;
  case 2:
    uVar1 = 1;
    if (this[0x520] != (SalesUI)0x0) {
LAB_04a62f04:
      *(undefined4 *)(this + 0x1b0) = uVar1;
      SalesProgressBar::RefreshAdvanceProgress((SalesProgressBar *)(this + 0x260));
      PreviewSalesBtn(this,uVar1);
      return;
    }
    break;
  case 3:
    if (this[0x520] != (SalesUI)0x0) {
      uVar1 = 2;
      goto LAB_04a62f04;
    }
    break;
  case 4:
    if (this[0x520] != (SalesUI)0x0) {
      BuySalesBtn(this,0);
      return;
    }
    break;
  case 5:
    if (this[0x520] != (SalesUI)0x0) {
      BuySalesBtn(this,1);
      return;
    }
    break;
  case 6:
    if (this[0x520] != (SalesUI)0x0) {
      BuySalesBtn(this,2);
      return;
    }
  }
  return;
}


/* non-virtual thunk to SalesUI::ButtonDepress(int) */

void __thiscall SalesUI::ButtonDepress(SalesUI *this,int param_1)

{
  ButtonDepress(this + -0x120,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesUI::Update() */

void __thiscall SalesUI::Update(SalesUI *this)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined4 uVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x520] == (SalesUI)0x0) &&
     (fVar4 = (float)PVZ_T(), *(float *)(this + 0x524) + 0.8 < fVar4)) {
    this[0x520] = (SalesUI)0x1;
    uVar5 = PVZ_EOT();
    *(undefined4 *)(this + 0x524) = uVar5;
  }
  PopingWidget::Update((PopingWidget *)this);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x228));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x228));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((SalesButton *)*puVar3 != (SalesButton *)0x0) {
      SalesButton::OnUpdate((SalesButton *)*puVar3);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  cVar2 = FUN_04a578f4(this[0x115]);
  if (cVar2 == '\0') {
    UpdateTimeLabel(this);
    cVar2 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x1f8));
    if (cVar2 != '\0') {
      EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x1f8));
    }
    SalesProgressBar::OnUpdate((SalesProgressBar *)(this + 0x260));
    if (this[0x1a9] != (SalesUI)0x0) {
      cVar2 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x1c8));
      if (cVar2 != '\0') {
        EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x1c8));
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SalesUI::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall SalesUI::DrawAll(SalesUI *this,ModalFlags *param_1,Graphics *param_2)

{
  char cVar1;
  
  LawnApp::DrawDarkeningLayer(gLawnApp,param_2,0.5);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  cVar1 = FUN_04a578f4(this[0x115]);
  if (cVar1 != '\0') {
    return;
  }
  SalesProgressBar::OnDraw((SalesProgressBar *)(this + 0x260),param_2);
  return;
}

