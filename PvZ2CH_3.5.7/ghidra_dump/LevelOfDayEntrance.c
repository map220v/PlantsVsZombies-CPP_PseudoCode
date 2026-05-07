// Class: LevelOfDayEntrance


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfDayEntrance::ButtonPress(int) */

void __thiscall LevelOfDayEntrance::ButtonPress(LevelOfDayEntrance *this,int param_1)

{
  char cVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 2) {
    cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x198));
    if (cVar1 != '\0') {
      std::string::string(asStack_10,"active");
      EffectAnim_UIAnim::PlayOnce((EffectAnim_UIAnim *)(this + 0x198),asStack_10);
      std::string::~string(asStack_10);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to LevelOfDayEntrance::ButtonPress(int) */

void __thiscall LevelOfDayEntrance::ButtonPress(LevelOfDayEntrance *this,int param_1)

{
  ButtonPress(this + -0x120,param_1);
  return;
}


/* LevelOfDayEntrance::OnRefresh() */

void __thiscall LevelOfDayEntrance::OnRefresh(LevelOfDayEntrance *this)

{
  this[0x178] = (LevelOfDayEntrance)0x0;
  return;
}


/* LevelOfDayEntrance::ClearDayItem() */

void __thiscall LevelOfDayEntrance::ClearDayItem(LevelOfDayEntrance *this)

{
  std::vector<LevelOfDayItem*,std::allocator<LevelOfDayItem*>>::clear
            ((vector<LevelOfDayItem*,std::allocator<LevelOfDayItem*>> *)(this + 0x210));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfDayEntrance::GetLeveloftheDayLevelName() */

void __thiscall LevelOfDayEntrance::GetLeveloftheDayLevelName(LevelOfDayEntrance *this)

{
  long lVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  LevelOfTheDaySystem *this_02;
  LevelOfTheDayMgr *this_03;
  long lVar3;
  long lVar4;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 == (PlayerInfo *)0x0) {
LAB_04a76cd0:
    std::string::string(in_x8,"");
    nop();
  }
  else {
    this_02 = (LevelOfTheDaySystem *)Sexy::LazySingleton<LevelOfTheDaySystem>::GetInstance();
    iVar2 = LevelOfTheDaySystem::getCurActivityTypeID(this_02);
    iVar2 = PlayerInfo::GetLevelOfTheDayInfo(this_01,iVar2);
    if (iVar2 < 1) {
      lVar4 = 0;
    }
    else {
      if (7 < iVar2) goto LAB_04a76cd0;
      lVar4 = (long)(iVar2 + -1);
    }
    this_03 = (LevelOfTheDayMgr *)LevelOfTheDayMgr::GetInstance();
    lVar3 = LevelOfTheDayMgr::GetCurrentTheDayItem(this_03);
    FUN_04a76824(*(undefined8 *)(lVar3 + 0x80),lVar4);
    FUN_05475d88();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfDayEntrance::UpdateTimeLabel() */

void __thiscall LevelOfDayEntrance::UpdateTimeLabel(LevelOfDayEntrance *this)

{
  int iVar1;
  uint uVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  AndroidAsyncIOFile *this_02;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    this_02 = (AndroidAsyncIOFile *)Sexy::LazySingleton<LevelOfTheDaySystem>::GetInstance();
    iVar1 = Sexy::AndroidAsyncIOFile::GetSize(this_02);
    if (iVar1 - 1U < 8) {
      uVar2 = PlayerInfo::GetLevelOfTheDayRemainDays
                        (this_01,*(int *)(&DAT_05754f40 + (ulong)(iVar1 - 1U) * 4));
    }
    else {
      uVar2 = PlayerInfo::GetLevelOfTheDayRemainDays(this_01,0x2991);
    }
    if ((int)uVar2 < 1) {
      Sexy::StrFormat(L"0",(Color *)&local_18,(ulong)uVar2);
      FUN_054766c8(this + 400,(Color *)&local_18);
      FUN_05476c50((Color *)&local_18);
      Sexy::Color::Color((Color *)&local_18,2);
      *(undefined8 *)(this + 0x228) = local_18;
      *(undefined8 *)(this + 0x230) = uStack_10;
    }
    else {
      Sexy::StrFormat(L"%d",&local_18,(ulong)uVar2);
      FUN_054766c8(this + 400,(Color *)&local_18);
      FUN_05476c50((Color *)&local_18);
      Sexy::Color::Color((Color *)&local_18,1);
      *(undefined8 *)(this + 0x228) = local_18;
      *(undefined8 *)(this + 0x230) = uStack_10;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfDayEntrance::AddResourceGroups() */

void LevelOfDayEntrance::AddResourceGroups(void)

{
  bool bVar1;
  undefined8 uVar2;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_04a76e80(DAT_06b7e088);
  local_10 = FUN_04a76ed0(DAT_06b7e090);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    FUN_05475d88(asStack_20,uVar2);
    LawnApp::LoadGroup(gLawnApp,asStack_20);
    std::string::~string(asStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfDayEntrance::GetStartOffsetByIndex(int) */

void __thiscall LevelOfDayEntrance::GetStartOffsetByIndex(LevelOfDayEntrance *this,int param_1)

{
  bool bVar1;
  int *piVar2;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  undefined8 local_18;
  int local_10;
  long local_8;
  
  local_28 = 0;
  local_20 = 0;
  local_8 = ___stack_chk_guard;
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1e0));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x1e0));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_18);
    if (!bVar1) {
LAB_04a7707c:
      local_10 = local_20;
      local_18 = local_28;
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(local_28,local_20);
    }
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    if (param_1 == *piVar2) {
      local_28 = CONCAT44(piVar2[1],param_1);
      local_20 = piVar2[2];
      goto LAB_04a7707c;
    }
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_30);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfDayEntrance::HideAllButtonAndAnims() */

void __thiscall LevelOfDayEntrance::HideAllButtonAndAnims(LevelOfDayEntrance *this)

{
  bool bVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(**(long **)(this + 0x238) + 0x158))(*(long **)(this + 0x238),0);
  (**(code **)(**(long **)(this + 0x240) + 0x158))(*(long **)(this + 0x240),0);
  (**(code **)(**(long **)(this + 0x240) + 0x188))(*(long **)(this + 0x240),1);
  (**(code **)(**(long **)(this + 0x248) + 0x158))(*(long **)(this + 0x248),0);
  plVar2 = *(long **)(this + 0x250);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,0);
    (**(code **)(**(long **)(this + 0x250) + 0x188))(*(long **)(this + 0x250),1);
  }
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x210));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x210));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((LevelOfDayItem *)*puVar3 != (LevelOfDayItem *)0x0) {
      LevelOfDayItem::SetScaling((LevelOfDayItem *)*puVar3,false);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfDayEntrance::RecoverAllButtonAndAnims() */

void __thiscall LevelOfDayEntrance::RecoverAllButtonAndAnims(LevelOfDayEntrance *this)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  LevelOfDayItem *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(**(long **)(this + 0x238) + 0x158))(*(long **)(this + 0x238),1);
  (**(code **)(**(long **)(this + 0x240) + 0x158))(*(long **)(this + 0x240),1);
  (**(code **)(**(long **)(this + 0x240) + 0x188))(*(long **)(this + 0x240),0);
  (**(code **)(**(long **)(this + 0x248) + 0x158))(*(long **)(this + 0x248),1);
  plVar3 = *(long **)(this + 0x250);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x158))(plVar3,0);
    (**(code **)(**(long **)(this + 0x250) + 0x188))(*(long **)(this + 0x250),1);
  }
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x198));
  if (cVar1 != '\0') {
    std::string::string((string *)&local_18,"shake");
    std::string::string((string *)&local_10,"normal");
    EffectAnim_UIAnim::PlayOnceThenLoop
              ((EffectAnim_UIAnim *)(this + 0x198),(exception_ptr *)&local_18,(string *)&local_10);
    std::string::~string((string *)&local_10);
    nop();
    std::string::~string((string *)&local_18);
    nop();
  }
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x210));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x210));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_00 = (LevelOfDayItem *)*puVar4;
    if (this_00 != (LevelOfDayItem *)0x0) {
      (**(code **)(*(long *)this_00 + 0x158))(this_00,1);
      LevelOfDayItem::SetScaling(this_00,true);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfDayEntrance::DrawArrow(Sexy::Graphics*) */

void __thiscall LevelOfDayEntrance::DrawArrow(LevelOfDayEntrance *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  Image *pIVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1f8));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x1f8));
  bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar3) {
    do {
      piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      iVar1 = *piVar4;
      iVar2 = piVar4[1];
      if (piVar4[2] == 3) {
        pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7df90);
      }
      else if (piVar4[2] == 4) {
        pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7df68);
      }
      else {
        pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7de40);
      }
      if (pIVar5 != (Image *)0x0) {
        Sexy::Graphics::DrawImage
                  (param_1,pIVar5,iVar1 + *(int *)(this + 0x168),iVar2 + *(int *)(this + 0x16c));
      }
      __gnu_cxx::
      __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
      ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                    *)&local_18);
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    } while (bVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfDayEntrance::Draw(Sexy::Graphics*) */

void __thiscall LevelOfDayEntrance::Draw(LevelOfDayEntrance *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  AndroidAsyncIOFile *this_00;
  RenaissanceChallengeNewManager *this_01;
  long lVar5;
  CachedUIResourcePtr<Sexy::Image> *this_02;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  PopingWidget::GetMainRect();
  uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7e058);
  PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,aIStack_18,uVar4);
  uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7e1b0);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x148));
  PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar4,aIStack_18);
  this_00 = (AndroidAsyncIOFile *)Sexy::LazySingleton<LevelOfTheDaySystem>::GetInstance();
  iVar2 = Sexy::AndroidAsyncIOFile::GetSize(this_00);
  if (iVar2 == 1) {
    this_02 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7e328;
  }
  else if (iVar2 == 2) {
    this_02 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7e0a8;
  }
  else {
    if (iVar2 != 6) {
      if (iVar2 == 7) {
        this_02 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7dfb8;
        goto LAB_04a777f8;
      }
      if (iVar2 != 8) goto LAB_04a7760c;
      this_01 = (RenaissanceChallengeNewManager *)
                Sexy::LazySingleton<RenaissanceChallengeNewManager>::GetInstance();
      uVar3 = RenaissanceChallengeNewManager::GetResourceId(this_01);
      if (0 < (int)uVar3) {
        Sexy::StrFormat("IMAGE_UI_LEVELOFTHEDAY_IMG_HINT_CHILDREN_%d",aIStack_18,(ulong)uVar3);
        lVar5 = StringHelper::ToImage((string *)aIStack_18,false);
        std::string::~string((string *)aIStack_18);
        if (lVar5 != 0) {
          Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x138));
          PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,lVar5,aIStack_18);
        }
        goto LAB_04a7760c;
      }
    }
    this_02 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7e378;
  }
LAB_04a777f8:
  uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->(this_02);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x138));
  PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar4,aIStack_18);
LAB_04a7760c:
  uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7dd08);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x168));
  PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar4,aIStack_18);
  cVar1 = FUN_04a76820(this[0x115]);
  if (cVar1 == '\0') {
    DrawArrow(this,param_1);
    cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x198));
    if (cVar1 != '\0') {
      EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x198),param_1);
    }
    uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_Shaded);
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,this + 0x188,this + 0x128,uVar4,aIStack_18,5,1);
    uVar4 = PrimeText_PotentialTypeface::Typeface
                      (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
    Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x228));
    WriteWordInRect(param_1,this + 400,this + 0x158,uVar4,aIStack_18,5,1);
    FUN_05478178(auStack_20,&DAT_056f11a8,auStack_28);
    uVar4 = PrimeText_PotentialTypeface::Typeface
                      (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
    Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x228));
    WriteWordInRect(param_1,auStack_20,(Insets *)(this + 0x168),uVar4,aIStack_18,5,1);
    FUN_05476c50(auStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfDayEntrance::ReleaseResourceGroups() */

void __thiscall LevelOfDayEntrance::ReleaseResourceGroups(LevelOfDayEntrance *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_04a76e80(DAT_06b7e088);
  local_10 = FUN_04a76ed0(DAT_06b7e090);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    FUN_05475d88(asStack_20,uVar2);
    LawnApp::LoadGroup(gLawnApp,asStack_20);
    std::string::~string(asStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1c8);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    FUN_05475d88(asStack_20,uVar2);
    LawnApp::LoadGroup(gLawnApp,asStack_20);
    std::string::~string(asStack_20);
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


/* LevelOfDayEntrance::~LevelOfDayEntrance() */

void __thiscall LevelOfDayEntrance::~LevelOfDayEntrance(LevelOfDayEntrance *this)

{
  PrimeText *this_00;
  
  *(undefined **)(this + 0x120) = &DAT_0693cba8;
  *(undefined ***)this = &PTR_GetClass_0693c860;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  ClearDayItem(this);
  std::vector<StartOffset,std::allocator<StartOffset>>::clear
            ((vector<StartOffset,std::allocator<StartOffset>> *)(this + 0x1e0));
  std::vector<ArrowInfo,std::allocator<ArrowInfo>>::clear
            ((vector<ArrowInfo,std::allocator<ArrowInfo>> *)(this + 0x1f8));
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  ReleaseResourceGroups(this);
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  std::vector<LevelOfDayItem*,std::allocator<LevelOfDayItem*>>::~vector
            ((vector<LevelOfDayItem*,std::allocator<LevelOfDayItem*>> *)(this + 0x210));
  std::vector<ArrowInfo,std::allocator<ArrowInfo>>::~vector
            ((vector<ArrowInfo,std::allocator<ArrowInfo>> *)(this + 0x1f8));
  std::vector<StartOffset,std::allocator<StartOffset>>::~vector
            ((vector<StartOffset,std::allocator<StartOffset>> *)(this + 0x1e0));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x1c8));
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x198));
  FUN_05476c50(this + 400);
  FUN_05476c50(this + 0x188);
  PopingWidget::~PopingWidget((PopingWidget *)this);
  return;
}


/* LevelOfDayEntrance::~LevelOfDayEntrance() */

void __thiscall LevelOfDayEntrance::~LevelOfDayEntrance(LevelOfDayEntrance *this)

{
  ~LevelOfDayEntrance(this);
  AK::FreeHook(this);
  return;
}


/* LevelOfDayEntrance::AddDayItem(LevelOfDayItem*) */

void __thiscall LevelOfDayEntrance::AddDayItem(LevelOfDayEntrance *this,LevelOfDayItem *param_1)

{
  LevelOfDayItem *local_8;
  
  local_8 = param_1;
  std::vector<LevelOfDayItem*,std::allocator<LevelOfDayItem*>>::push_back
            ((vector<LevelOfDayItem*,std::allocator<LevelOfDayItem*>> *)(this + 0x210),&local_8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfDayEntrance::CalcStartOffset() */

void __thiscall LevelOfDayEntrance::CalcStartOffset(LevelOfDayEntrance *this)

{
  vector<StartOffset,std::allocator<StartOffset>> *this_00;
  vector<ArrowInfo,std::allocator<ArrowInfo>> *this_01;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  LotteryResultProgressBar *pLVar8;
  SalesProgressBar *pSVar9;
  int local_88;
  int local_84;
  undefined4 local_80;
  undefined4 local_78;
  int local_74;
  int local_70;
  undefined4 local_68;
  int local_64;
  int local_60;
  undefined4 local_58;
  int local_54;
  int local_50;
  undefined4 local_48;
  int local_44;
  int local_40;
  undefined4 local_38;
  int local_34;
  int local_30;
  undefined4 local_28;
  int local_24;
  int local_20;
  undefined4 local_18;
  int local_14;
  int local_10;
  long local_8;
  
  this_00 = (vector<StartOffset,std::allocator<StartOffset>> *)(this + 0x1e0);
  local_8 = ___stack_chk_guard;
  this_01 = (vector<ArrowInfo,std::allocator<ArrowInfo>> *)(this + 0x1f8);
  std::vector<StartOffset,std::allocator<StartOffset>>::clear(this_00);
  std::vector<ArrowInfo,std::allocator<ArrowInfo>>::clear(this_01);
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7df68);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7df68);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar9);
  iVar5 = FUN_04a769c0(4);
  iVar4 = iVar4 - iVar5;
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7dd40);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  iVar5 = iVar6 + iVar4;
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7dd40);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar9);
  iVar1 = (iVar6 - iVar3) / 2;
  local_78 = 1;
  local_74 = FUN_04a769c0(0x16);
  iVar2 = (iVar7 - iVar3) / 2;
  local_70 = FUN_04a769c0(0x21);
  std::vector<StartOffset,std::allocator<StartOffset>>::push_back(this_00,(StartOffset *)&local_78);
  local_88 = local_74 + iVar1;
  iVar3 = iVar7 + local_70;
  local_84 = FUN_04a769c0(2);
  local_84 = iVar3 - local_84;
  local_80 = 4;
  std::vector<ArrowInfo,std::allocator<ArrowInfo>>::push_back(this_01,(ArrowInfo *)&local_88);
  local_68 = 2;
  local_60 = local_70 + iVar7 + iVar4;
  local_64 = local_74;
  std::vector<StartOffset,std::allocator<StartOffset>>::push_back(this_00,(StartOffset *)&local_68);
  iVar3 = iVar6 + local_64;
  local_88 = FUN_04a769c0(2);
  local_88 = iVar3 - local_88;
  local_80 = 2;
  local_84 = local_60 + iVar2;
  std::vector<ArrowInfo,std::allocator<ArrowInfo>>::push_back(this_01,(ArrowInfo *)&local_88);
  local_54 = local_74 + iVar5;
  local_58 = 3;
  local_50 = local_60;
  std::vector<StartOffset,std::allocator<StartOffset>>::push_back(this_00,(StartOffset *)&local_58);
  local_88 = local_54 + iVar1;
  iVar4 = local_50 - iVar4;
  local_84 = FUN_04a769c0(2);
  local_84 = iVar4 - local_84;
  local_80 = 3;
  std::vector<ArrowInfo,std::allocator<ArrowInfo>>::push_back(this_01,(ArrowInfo *)&local_88);
  local_48 = 4;
  local_44 = local_54;
  local_40 = local_70;
  std::vector<StartOffset,std::allocator<StartOffset>>::push_back(this_00,(StartOffset *)&local_48);
  iVar3 = iVar6 + local_44;
  local_88 = FUN_04a769c0(2);
  local_88 = iVar3 - local_88;
  local_80 = 2;
  local_84 = local_40 + iVar2;
  std::vector<ArrowInfo,std::allocator<ArrowInfo>>::push_back(this_01,(ArrowInfo *)&local_88);
  local_34 = local_44 + iVar5;
  local_38 = 5;
  local_30 = local_70;
  std::vector<StartOffset,std::allocator<StartOffset>>::push_back(this_00,(StartOffset *)&local_38);
  local_88 = local_34 + iVar1;
  iVar7 = iVar7 + local_30;
  local_84 = FUN_04a769c0(2);
  local_84 = iVar7 - local_84;
  local_80 = 4;
  std::vector<ArrowInfo,std::allocator<ArrowInfo>>::push_back(this_01,(ArrowInfo *)&local_88);
  local_24 = local_34;
  local_28 = 6;
  local_20 = local_60;
  std::vector<StartOffset,std::allocator<StartOffset>>::push_back(this_00,(StartOffset *)&local_28);
  iVar6 = iVar6 + local_24;
  local_88 = FUN_04a769c0(2);
  local_88 = iVar6 - local_88;
  local_84 = local_20 + iVar2;
  local_80 = 2;
  std::vector<ArrowInfo,std::allocator<ArrowInfo>>::push_back(this_01,(ArrowInfo *)&local_88);
  local_14 = local_34 + iVar5;
  local_18 = 7;
  local_10 = local_70;
  std::vector<StartOffset,std::allocator<StartOffset>>::push_back(this_00,(StartOffset *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfDayEntrance::InitView() */

void __thiscall LevelOfDayEntrance::InitView(LevelOfDayEntrance *this)

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
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  LotteryResultProgressBar *pLVar14;
  SalesProgressBar *pSVar15;
  AndroidAsyncIOFile *this_00;
  LevelOfDayPanel *this_01;
  PVZ2UIButton *pPVar16;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  LevelOfTheDaySystem *this_04;
  RenaissanceChallengeNewManager *this_05;
  wchar_t *pwVar17;
  long lVar18;
  long *plVar19;
  code *pcVar20;
  bool bVar21;
  undefined1 auVar22 [12];
  wstring awStack_a0 [8];
  undefined4 local_98;
  int local_94;
  undefined4 local_90;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  this[0x59] = (LevelOfDayEntrance)0x0;
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x1c8));
  iVar2 = FUN_04a769c0(0x2fd);
  iVar3 = FUN_04a769c0(0x1e0);
  iVar1 = *(int *)(this + 0x54);
  iVar10 = *(int *)(this + 0x50) - iVar2 >> 1;
  iVar4 = FUN_04a769c0(0x14);
  iVar4 = (iVar1 - iVar3) + iVar4 >> 1;
  iVar1 = iVar10 + iVar2 / 2;
  Sexy::Insets::Insets((Insets *)&local_40,iVar10,iVar4,iVar2,iVar3);
  PopingWidget::SetMainRect((PopingWidget *)this,(Insets *)&local_40);
  iVar5 = FUN_04a769c0(0x87);
  iVar6 = FUN_04a769c0(0x28);
  iVar7 = FUN_04a769c0(10);
  Sexy::Insets::Insets((Insets *)&local_40,iVar1 - iVar5 / 2,iVar7 + iVar4,iVar5,iVar6);
  *(undefined8 *)(this + 0x128) = local_40;
  *(undefined8 *)(this + 0x130) = uStack_38;
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7e0a8);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  pSVar15 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7e0a8);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar15);
  iVar7 = FUN_04a769c0(0x28);
  Sexy::Insets::Insets((Insets *)&local_40,iVar1 - iVar5 / 2,iVar7 + iVar4,iVar5,iVar6);
  *(undefined8 *)(this + 0x138) = local_40;
  *(undefined8 *)(this + 0x140) = uStack_38;
  this_00 = (AndroidAsyncIOFile *)Sexy::LazySingleton<LevelOfTheDaySystem>::GetInstance();
  iVar5 = Sexy::AndroidAsyncIOFile::GetSize(this_00);
  if (iVar5 == 1) {
    pwVar17 = L"[LABOR_DAY_CHALLENGE_TITLE]";
LAB_04a790d8:
    TodStringTranslate(pwVar17);
    FUN_054766c8(this + 0x188,(Insets *)&local_40);
    FUN_05476c50((Insets *)&local_40);
  }
  else {
    if (iVar5 == 2) {
      pwVar17 = L"[SUMMEREVENT_DAY_CHALLENGE_TITLE]";
      goto LAB_04a790d8;
    }
    if (iVar5 == 6) {
      pwVar17 = L"[CHILDREN_DAY_CHALLENGE_TITLE]";
      goto LAB_04a790d8;
    }
    if (iVar5 == 7) {
      pwVar17 = L"[WINTER_DAY_CHALLENGE_TITLE]";
      goto LAB_04a790d8;
    }
    if (iVar5 == 8) {
      TodStringTranslate(L"[CHILDREN_DAY_CHALLENGE_TITLE]");
      FUN_054766c8(this + 0x188,(Insets *)&local_40);
      FUN_05476c50((Insets *)&local_40);
      this_05 = (RenaissanceChallengeNewManager *)
                Sexy::LazySingleton<RenaissanceChallengeNewManager>::GetInstance();
      uVar13 = RenaissanceChallengeNewManager::GetResourceId(this_05);
      if (0 < (int)uVar13) {
        Sexy::StrFormat("[CHILDREN_DAY_CHALLENGE_TITLE_%d]",(string *)&local_88,(ulong)uVar13);
        Sexy::ToWString((string *)&local_88);
        TodStringTranslate(awStack_78);
        FUN_054766c8(this + 0x188,(Insets *)&local_40);
        FUN_05476c50((Insets *)&local_40);
        FUN_05476c50(awStack_78);
        std::string::~string((string *)&local_88);
      }
    }
  }
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7e1b0);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  pSVar15 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7e1b0);
  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar15);
  iVar6 = FUN_04a769c0(0xd);
  iVar5 = ((iVar10 + iVar2) - iVar7) - iVar6;
  iVar6 = ((iVar4 + iVar3) - iVar8) - iVar6;
  Sexy::Insets::Insets((Insets *)&local_40,iVar5,iVar6,iVar7,iVar8);
  *(undefined8 *)(this + 0x148) = local_40;
  *(undefined8 *)(this + 0x150) = uStack_38;
  iVar7 = FUN_04a769c0(0x96);
  iVar9 = FUN_04a769c0(0x14);
  Sexy::Insets::Insets((Insets *)&local_40,iVar7 + iVar5,iVar6,iVar9,iVar8);
  *(undefined8 *)(this + 0x158) = local_40;
  *(undefined8 *)(this + 0x160) = uStack_38;
  iVar5 = FUN_04a769c0(10);
  iVar6 = FUN_04a769c0(0x6e);
  iVar7 = FUN_04a769c0(300);
  Sexy::Insets::Insets((Insets *)&local_40,iVar5 + iVar10,iVar6 + iVar4,iVar2 + iVar5 * -2,iVar7);
  *(undefined8 *)(this + 0x168) = local_40;
  *(undefined8 *)(this + 0x170) = uStack_38;
  CalcStartOffset(this);
  this_01 = ::operator_new(0xe0);
  LevelOfDayPanel::LevelOfDayPanel(this_01,(TRect *)(this + 0x168),this);
  lVar18 = *(long *)this_01;
  *(LevelOfDayPanel **)(this + 0x238) = this_01;
  (**(code **)(lVar18 + 0x158))(this_01,0);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x238));
  FUN_05478178(awStack_78,&DAT_056f11a8,&local_88);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar16 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar16,0,(ButtonListener *)(this + 0x120),awStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x240) = pPVar16;
  FUN_05476c50(awStack_78);
  nop();
  pPVar16 = *(PVZ2UIButton **)(this + 0x240);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b7e3f0,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b7e350,3);
  PVZ2UIButton::SetDialogStates(pPVar16,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  plVar19 = *(long **)(this + 0x240);
  pcVar20 = *(code **)(*plVar19 + 0x198);
  iVar10 = FUN_04a769c0(0x118);
  pSVar15 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7e3f0);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar15);
  iVar5 = FUN_04a769c0(4);
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7e3f0);
  uVar11 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  pSVar15 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7e3f0);
  uVar12 = SalesProgressBar::GetCurrentLevel(pSVar15);
  (*pcVar20)(plVar19,iVar10 + iVar1,(iVar4 - iVar2) + iVar5,uVar11,uVar12);
  (**(code **)(**(long **)(this + 0x240) + 0x158))(*(long **)(this + 0x240),0);
  (**(code **)(**(long **)(this + 0x240) + 0x188))(*(long **)(this + 0x240),1);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x240));
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7e0d0);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  pSVar15 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7e0d0);
  iVar10 = SalesProgressBar::GetCurrentLevel(pSVar15);
  iVar10 = (iVar10 * 6) / 5;
  FUN_05478178(awStack_a0,&DAT_056f11a8,(Insets *)&local_40);
  nop();
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
  if (this_03 != (PlayerInfo *)0x0) {
    this_04 = (LevelOfTheDaySystem *)Sexy::LazySingleton<LevelOfTheDaySystem>::GetInstance();
    iVar5 = LevelOfTheDaySystem::getCurActivityTypeID(this_04);
    auVar22 = PlayerInfo::GetLevelOfTheDayInfo(this_03,iVar5);
    local_90 = auVar22._8_4_;
    local_98 = auVar22._0_4_;
    local_94 = auVar22._4_4_;
    if (local_94 < 1) {
      FUN_054772c4(awStack_a0,L"[BIRTHZ_DIALOG_START]");
    }
    else {
      FUN_054772c4(awStack_a0,L"[BIRTHZ_DIALOG_AGAIN]");
    }
    auVar22 = PlayerInfo::GetLevelOfTheDayInfo(this_03,iVar5);
    local_80 = auVar22._8_4_;
    local_88 = auVar22._0_4_;
    local_84 = auVar22._4_4_;
    if (7 < local_88) {
      iVar5 = PlayerInfo::GetLevelOfTheDayRemainDays(this_03,0x2a0a);
      bVar21 = 0 < iVar5;
      goto LAB_04a78ef0;
    }
  }
  bVar21 = false;
LAB_04a78ef0:
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar16 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar16,1,(ButtonListener *)(this + 0x120),awStack_a0,(Color *)&local_40);
  lVar18 = *(long *)pPVar16;
  *(PVZ2UIButton **)(this + 0x248) = pPVar16;
  (**(code **)(lVar18 + 0x198))
            (pPVar16,iVar1 - ((iVar2 << 1) >> 1),(iVar4 + iVar3) - iVar10 / 2,iVar2 << 1,iVar10);
  pPVar16 = *(PVZ2UIButton **)(this + 0x248);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b7e0d0,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b7df40,3);
  PVZ2UIButton::SetDialogStates(pPVar16,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0x248) + 0x158))(*(long **)(this + 0x248),0);
  (**(code **)(**(long **)(this + 0x248) + 0x188))(*(long **)(this + 0x248),bVar21);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x248));
  FUN_05476c50(awStack_a0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfDayEntrance::LevelOfDayEntrance() */

void __thiscall LevelOfDayEntrance::LevelOfDayEntrance(LevelOfDayEntrance *this)

{
  PrimeText *this_00;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PopingWidget::PopingWidget((PopingWidget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x120));
  *(undefined ***)this = &PTR_GetClass_0693c860;
  *(undefined **)(this + 0x120) = &DAT_0693cba8;
  Sexy::Insets::Insets((Insets *)(this + 0x128));
  Sexy::Insets::Insets((Insets *)(this + 0x138));
  Sexy::Insets::Insets((Insets *)(this + 0x148));
  Sexy::Insets::Insets((Insets *)(this + 0x158));
  Sexy::Insets::Insets((Insets *)(this + 0x168));
  FUN_05476574(this + 0x188);
  FUN_05476574(this + 400);
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x198));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1c8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1e0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1f8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x210));
  Sexy::Color::Color((Color *)(this + 0x228));
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  FUN_054772c4(this + 0x188,&DAT_056f11a8);
  this[0x178] = (LevelOfDayEntrance)0x0;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined8 *)(this + 0x250) = 0;
  Sexy::Color::Color((Color *)&local_18,1);
  *(undefined8 *)(this + 0x228) = local_18;
  *(undefined8 *)(this + 0x230) = uStack_10;
  std::vector<StartOffset,std::allocator<StartOffset>>::clear
            ((vector<StartOffset,std::allocator<StartOffset>> *)(this + 0x1e0));
  std::vector<ArrowInfo,std::allocator<ArrowInfo>>::clear
            ((vector<ArrowInfo,std::allocator<ArrowInfo>> *)(this + 0x1f8));
  AddResourceGroups();
  ClearDayItem(this);
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelOfDayEntrance::Update() */

void __thiscall LevelOfDayEntrance::Update(LevelOfDayEntrance *this)

{
  char cVar1;
  
  PopingWidget::Update((PopingWidget *)this);
  UpdateTimeLabel(this);
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x198));
  if (cVar1 == '\0') {
    return;
  }
  EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x198));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfDayEntrance::ButtonDepress(int) */

void __thiscall LevelOfDayEntrance::ButtonDepress(LevelOfDayEntrance *this,int param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  AndroidAsyncIOFile *this_00;
  char *__s;
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 1) {
    LawnApp::KillLevelofDayEntrance(gLawnApp);
    this_00 = (AndroidAsyncIOFile *)Sexy::LazySingleton<LevelOfTheDaySystem>::GetInstance();
    iVar3 = Sexy::AndroidAsyncIOFile::GetSize(this_00);
    if ((iVar3 == 6) || (iVar3 == 1)) {
      GetLeveloftheDayLevelName(this);
      bVar2 = std::operator!=("",asStack_30);
      if (bVar2) {
        GameStateMgr::StartLevel(gGameStateMgr,&DAT_06b7e0a0,asStack_30,0xffffffff,1,1,0);
        FUN_05475d88(asStack_20,asStack_30);
        FUN_04a7980c(aDStack_18,asStack_20);
        __s = (char *)DString::c_str(aDStack_18);
        std::string::string(asStack_28,__s);
        nop();
        DString::~DString(aDStack_18);
        std::string::~string(asStack_20);
        puVar1 = gMessageRouter;
        FUN_05475d88(aDStack_18,asStack_28);
        MessageRouter::Post<std::string_const&,std::string>
                  ((MessageRouter *)puVar1,Message::PinataParty,aDStack_18);
        std::string::~string((string *)aDStack_18);
        std::string::~string(asStack_28);
      }
      std::string::~string(asStack_30);
    }
    else {
      if (iVar3 != 2) {
        if (iVar3 == 3) {
          LawnApp::ShowTimeTravelEventEntranceUI(gLawnApp);
          goto LAB_04a79908;
        }
        if (iVar3 == 4) {
          LawnApp::ShowPlantDefenceEntrance(gLawnApp);
          goto LAB_04a79908;
        }
        if (1 < iVar3 - 7U) goto LAB_04a79908;
      }
      LawnApp::ShowSummerEventEntranceUI(gLawnApp);
    }
  }
  else if (param_1 == 2) {
    LawnApp::KillLevelofDayEntrance(gLawnApp);
    LawnApp::ShowChildrenDayUI();
  }
  else if (param_1 == 0) {
    LawnApp::KillLevelofDayEntrance(gLawnApp);
  }
LAB_04a79908:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to LevelOfDayEntrance::ButtonDepress(int) */

void __thiscall LevelOfDayEntrance::ButtonDepress(LevelOfDayEntrance *this,int param_1)

{
  ButtonDepress(this + -0x120,param_1);
  return;
}

