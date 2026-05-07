// Class: ProfilesListEntry


/* ProfilesListEntry::IsPlaceholder() const */

byte __thiscall ProfilesListEntry::IsPlaceholder(ProfilesListEntry *this)

{
  byte bVar1;
  
  bVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x308));
  return bVar1 ^ 1;
}


/* ProfilesListEntry::GetPlayerInfo() const */

RtWeakPtr<Sexy::SoundResource> * ProfilesListEntry::GetPlayerInfo(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0x308));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfilesListEntry::GetPlayerName() const */

void ProfilesListEntry::GetPlayerName(void)

{
  long lVar1;
  char cVar2;
  long in_x0;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(in_x0 + 0x308));
  if (cVar2 == '\0') {
    FUN_05478178();
    nop();
  }
  else {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x308));
    PlayerInfo::AM_GetName();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ProfilesListEntry::~ProfilesListEntry() */

void __thiscall ProfilesListEntry::~ProfilesListEntry(ProfilesListEntry *this)

{
  *(undefined ***)this = &PTR_GetClass_06790a40;
  *(undefined ***)(this + 0x198) = &PTR__ProfilesListEntry_06790da0;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_06790dc8;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x308));
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to ProfilesListEntry::~ProfilesListEntry() */

void __thiscall ProfilesListEntry::~ProfilesListEntry(ProfilesListEntry *this)

{
  ~ProfilesListEntry(this + -0x198);
  return;
}


/* ProfilesListEntry::~ProfilesListEntry() */

void __thiscall ProfilesListEntry::~ProfilesListEntry(ProfilesListEntry *this)

{
  ~ProfilesListEntry(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ProfilesListEntry::~ProfilesListEntry() */

void __thiscall ProfilesListEntry::~ProfilesListEntry(ProfilesListEntry *this)

{
  ~ProfilesListEntry(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfilesListEntry::Draw(Sexy::Graphics*) */

void __thiscall ProfilesListEntry::Draw(ProfilesListEntry *this,Graphics *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ResourceInfo *pRVar5;
  Image *pIVar6;
  undefined8 uVar7;
  PrimeTypeface *pPVar8;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x308);
  local_8 = ___stack_chk_guard;
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
  pIVar6 = (Image *)LocalProfileSaveData::GetProfilePicture((PlayerInfo *)pRVar5);
  if (pIVar6 != (Image *)0x0) {
    iVar2 = FUN_03e98680(10);
    iVar3 = FUN_03e98680(0x14);
    Sexy::Graphics::DrawImage
              (param_1,pIVar6,iVar2,iVar2,*(int *)(this + 0x54) - iVar3,
               *(int *)(this + 0x54) - iVar3);
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    PlayerInfo::AM_GetName();
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  }
  else {
    TodStringTranslate(L"[MAINMENU_CLICK_TO_ADD_PLAYER]");
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  }
  if (bVar1) {
    Sexy::Insets::Insets(aIStack_28,(Insets *)&PrimeText_Game::Color_Description_Brown);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  }
  else {
    Sexy::Insets::Insets(aIStack_28,(Insets *)&PrimeText_Game::Color_Add_Player_Faded);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  }
  if (bVar1) {
    iVar2 = FUN_03e98680(0x2d);
    uVar4 = iVar2 * -2;
    pPVar8._0_4_ = (PrimeTypeface *)(float)iVar2;
  }
  else {
    pPVar8._0_4_ = (PrimeTypeface *)0x0;
    uVar4 = (uint)bVar1;
  }
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32);
  iVar2 = *(int *)(this + 0x50);
  iVar3 = *(int *)(this + 0x54);
  FUN_05477b24(auStack_30,auStack_38);
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar8._0_4_,0,(float)(int)(uVar4 + iVar2),(float)iVar3,uVar7,param_1,auStack_30,1,1,
             aIStack_18,0);
  FUN_05476c50(auStack_30);
  FUN_05476c50(auStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfilesListEntry::SetPlayerInfo(Sexy::RtWeakPtr<PlayerInfo>) */

void __thiscall ProfilesListEntry::SetPlayerInfo(ProfilesListEntry *this,RtWeakPtr *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  PVZ2UIButton *this_00;
  LotteryResultProgressBar *pLVar10;
  SalesProgressBar *pSVar11;
  code *pcVar12;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x308),param_2);
  cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x308));
  if (cVar3 != '\0') {
    FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
    Sexy::Color::Color((Color *)aPStack_40,1);
    this_00 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (this_00,0,(ButtonListener *)(this + 0x300),awStack_78,(Color *)aPStack_40);
    FUN_05476c50(awStack_78);
    nop();
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ae0798,1);
    PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06ae0c50,1);
    PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,aPStack_40);
    pcVar12 = *(code **)(*(long *)this_00 + 0x198);
    iVar4 = FUN_03e98680(0xe);
    iVar1 = *(int *)(this + 0x50);
    pLVar10 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0798);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
    iVar2 = *(int *)(this + 0x54);
    pSVar11 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0798);
    iVar6 = SalesProgressBar::GetCurrentLevel(pSVar11);
    pLVar10 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0798);
    iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
    iVar8 = FUN_03e98680(0xe);
    pSVar11 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0798);
    uVar9 = SalesProgressBar::GetCurrentLevel(pSVar11);
    (*pcVar12)(this_00,(iVar1 - iVar4) - iVar5,(iVar2 - iVar6) / 2,iVar7 + iVar8,uVar9);
    (**(code **)(*(long *)this + 0x60))(this,this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfilesListEntry::ProfilesListEntry(Sexy::TRect<int> const&, int, Sexy::ButtonListener*,
   Sexy::RtWeakPtr<PlayerInfo>) */

void __thiscall
ProfilesListEntry::ProfilesListEntry
          (ProfilesListEntry *this,TRect *param_1,int param_2,ButtonListener *param_3,
          RtWeakPtrBase *param_5)

{
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_20,&DAT_056f11a8,auStack_28);
  Sexy::Color::Color((Color *)aRStack_18,1);
  PVZ2UIButton::PVZ2UIButton((PVZ2UIButton *)this,param_2,param_3,awStack_20,(Color *)aRStack_18);
  FUN_05476c50(awStack_20);
  nop();
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x300));
  *(undefined ***)this = &PTR_GetClass_06790a40;
  *(undefined ***)(this + 0x198) = &PTR__ProfilesListEntry_06790da0;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_06790dc8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x308));
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,param_5);
  SetPlayerInfo(this,aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfilesListEntry::ButtonDepress(int) */

void ProfilesListEntry::ButtonDepress(int param_1)

{
  char *pcVar1;
  MainMenu *pMVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Settings_Tab_Release");
  pMVar2 = (MainMenu *)LawnApp::GetMainMenu(gLawnApp);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            (aRStack_10,(RtWeakPtrBase *)((ulong)(uint)param_1 + 0x308));
  MainMenu::CreateWelcomeDialog(pMVar2,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ProfilesListEntry::ButtonDepress(int) */

void __thiscall ProfilesListEntry::ButtonDepress(ProfilesListEntry *this,int param_1)

{
  ButtonDepress((int)this + -0x300);
  return;
}

