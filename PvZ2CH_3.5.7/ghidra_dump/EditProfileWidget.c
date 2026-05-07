// Class: EditProfileWidget


/* EditProfileWidget::EditWidgetText(int, std::wstring const&) */

void EditProfileWidget::EditWidgetText(int param_1,wstring *param_2)

{
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
            (*(long **)(gLawnApp + 0x360),(ulong)(uint)param_1);
  *(undefined1 *)(*(long *)((ulong)(uint)param_1 + 0x130) + 0x16c) = 0;
  return;
}


/* non-virtual thunk to EditProfileWidget::EditWidgetText(int, std::wstring const&) */

void __thiscall
EditProfileWidget::EditWidgetText(EditProfileWidget *this,int param_1,wstring *param_2)

{
  EditWidgetText((int)this + -0xe0,(wstring *)(ulong)(uint)param_1);
  return;
}


/* EditProfileWidget::SetIgnoreMouseInput(bool) */

void __thiscall EditProfileWidget::SetIgnoreMouseInput(EditProfileWidget *this,bool param_1)

{
  char cVar1;
  
  Sexy::WidgetContainer::SetIgnoreMouseInput((WidgetContainer *)this,param_1);
  if (((((*(uint *)(this + 0x148) & 0xfffffffd) == 0) && (!param_1)) &&
      (*(char *)(*(long *)(this + 0x130) + 0x16c) != '\0')) &&
     (cVar1 = EA::Text::GlyphCache_Memory::EndUpdate(gLawnApp), cVar1 != '\0')) {
    Sexy::EditWidget::SetEditWidgetActive(*(EditWidget **)(this + 0x130));
    return;
  }
  return;
}


/* EditProfileWidget::Update() */

void __thiscall EditProfileWidget::Update(EditProfileWidget *this)

{
  long lVar1;
  long *plVar2;
  
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if ((*(long *)(this + 0x130) == 0) ||
     (lVar1 = FUN_054765d0(*(long *)(this + 0x130) + 0xe8), lVar1 == 0)) {
    plVar2 = *(long **)(this + 0x138);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x188))(plVar2,1);
      (**(code **)(**(long **)(this + 0x138) + 0x158))(*(long **)(this + 0x138),1);
      return;
    }
  }
  else {
    plVar2 = *(long **)(this + 0x138);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x188))(plVar2,0);
      (**(code **)(**(long **)(this + 0x138) + 0x158))(*(long **)(this + 0x138),1);
    }
  }
  return;
}


/* EditProfileWidget::AllowChar(int, wchar_t) */

undefined8 __thiscall
EditProfileWidget::AllowChar(EditProfileWidget *this,int param_1,wchar_t param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = iswalnum(param_2);
  if ((iVar1 == 0) &&
     ((param_2 != L' ' || (lVar3 = FUN_054765c4(*(long *)(this + 0x130) + 0xe8), lVar3 == 0)))) {
    uVar2 = EA::Text::IsCharAlphabetic((wchar16)param_2);
    return uVar2;
  }
  return 1;
}


/* non-virtual thunk to EditProfileWidget::AllowChar(int, wchar_t) */

void __thiscall EditProfileWidget::AllowChar(EditProfileWidget *this,int param_1,wchar_t param_2)

{
  AllowChar(this + -0xe0,param_1,param_2);
  return;
}


/* EditProfileWidget::onErrorAccepted() */

void __thiscall EditProfileWidget::onErrorAccepted(EditProfileWidget *this)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  Sexy::EditWidget::SetEditWidgetActive(*(EditWidget **)(this + 0x130));
  return;
}


/* EditProfileWidget::onDeleteCanceled() */

void EditProfileWidget::onDeleteCanceled(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditProfileWidget::onDeleteAccepted() */

void __thiscall EditProfileWidget::onDeleteAccepted(EditProfileWidget *this)

{
  wstring *pwVar1;
  MainMenu *this_00;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillPVZ2Dialog(gLawnApp);
  pwVar1 = (wstring *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x140));
  PlayerInfo::AM_GetName();
  ProfileMgr::DeleteProfile(pwVar1);
  FUN_05476c50(auStack_10);
  this_00 = (MainMenu *)LawnApp::GetMainMenu(gLawnApp);
  MainMenu::ScrollLeft(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EditProfileWidget::onProfileIconPictureTaken(PlayerInfo const*, Sexy::MemoryImage*) */

void __thiscall
EditProfileWidget::onProfileIconPictureTaken
          (EditProfileWidget *this,PlayerInfo *param_1,MemoryImage *param_2)

{
  ResourceInfo *pRVar1;
  
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x140));
  if (param_1 != (PlayerInfo *)pRVar1) {
    return;
  }
  nop();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditProfileWidget::Draw(Sexy::Graphics*) */

void __thiscall EditProfileWidget::Draw(EditProfileWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  SalesProgressBar *this_00;
  wstring awStack_28 [8];
  undefined1 auStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_28,L"[MAINMENU_WELCOME]",aIStack_18);
  nop();
  if (*(int *)(this + 0x148) == 2) {
    FUN_054772c4(awStack_28,L"[MAINMENU_NEW_PROFILE]");
  }
  else if (*(int *)(this + 0x148) == 1) {
    FUN_054772c4(awStack_28,L"[MAINMENU_EDIT_PROFILE]");
  }
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
  iVar1 = FUN_03e98680(0x1b);
  iVar2 = *(int *)(this + 0x50);
  TodStringTranslate(awStack_28);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Generic_Title);
  Sexy::PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)0x0,(float)iVar1,(float)iVar2,uVar6,param_1,auStack_20,1,aIStack_18,0)
  ;
  FUN_05476c50(auStack_20);
  iVar2 = FUN_03e98680(0x3c);
  iVar1 = FUN_03e98680(0x14);
  iVar3 = FUN_03e98680(0x5b);
  iVar4 = FUN_03e98680(0x121);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0500);
  iVar5 = SalesProgressBar::GetCurrentLevel(this_00);
  Sexy::Insets::Insets(aIStack_18,iVar2 - iVar1,iVar3,iVar4,iVar5);
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0628);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  iVar2 = FUN_03e98680(0xfffffff6);
  iVar1 = FUN_03e98680(0x15f);
  iVar3 = FUN_03e98680(0x14);
  Sexy::Insets::Insets
            (aIStack_18,iVar2,iVar1,iVar3 + *(int *)(this + 0x50),*(int *)(this + 0x54) - iVar1);
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0888);
  Draw3SliceImage(param_1,aIStack_18,uVar6);
  FUN_05476c50(awStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditProfileWidget::~EditProfileWidget() */

void __thiscall EditProfileWidget::~EditProfileWidget(EditProfileWidget *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xe0) = &PTR_EditWidgetText_06790a08;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06790680;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_067909c0;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"Credits");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,false);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x140));
  std::vector<std::wstring,std::allocator<std::wstring>>::~vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)(this + 0x118));
  std::vector<std::wstring,std::allocator<std::wstring>>::~vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)(this + 0x100));
  std::vector<std::wstring,std::allocator<std::wstring>>::~vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EditProfileWidget::~EditProfileWidget() */

void __thiscall EditProfileWidget::~EditProfileWidget(EditProfileWidget *this)

{
  ~EditProfileWidget(this);
  AK::FreeHook(this);
  return;
}


/* EditProfileWidget::ButtonPress(int) */

void __thiscall EditProfileWidget::ButtonPress(EditProfileWidget *this,int param_1)

{
  char *pcVar1;
  
  if ((param_1 != 4) && (param_1 != 0xb)) {
    if (param_1 != 5) {
      return;
    }
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Cancel_Press");
    return;
  }
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Main_Save_Press");
  return;
}


/* non-virtual thunk to EditProfileWidget::ButtonPress(int) */

void __thiscall EditProfileWidget::ButtonPress(EditProfileWidget *this,int param_1)

{
  ButtonPress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditProfileWidget::ButtonDepress(int) */

void EditProfileWidget::ButtonDepress(int param_1)

{
  RtMixedPtrBase *this;
  LawnApp *pLVar1;
  char cVar2;
  int iVar3;
  ReceivedDataCallback *pRVar4;
  char *pcVar5;
  PVZ2UIDialog *pPVar6;
  PrimeTypeface *pPVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  MainMenu *this_00;
  NetworkMgr *this_01;
  INetworkMsgProcess *this_02;
  ProfileMgr *this_03;
  int in_w1;
  vector *in_x3;
  undefined1 auStack_68 [8];
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  pRVar4 = (ReceivedDataCallback *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if (in_w1 == 4) {
    pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    this = (RtMixedPtrBase *)(pRVar4 + 0x140);
    AudioMgr::SendEvent(pcVar5,"Play_UI_Button_Main_Save_Release");
    pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar5,"Play_UI_Button_Settings_Tab_Back_Release");
    FUN_05476574(awStack_60);
    if ((*(int *)(pRVar4 + 0x148) == 1) ||
       (cVar2 = Sexy::RtMixedPtrBase::IsValid(this), cVar2 != '\0')) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      PlayerInfo::AM_GetName();
      cVar2 = ProfileUtils::ChangeProfileName
                        (awStack_50,(wstring *)(*(long *)(pRVar4 + 0x130) + 0xe8),awStack_60,
                         (vector *)(pRVar4 + 0x118));
      FUN_05476c50(awStack_50);
    }
    else {
      ProfileUtils::CreateProfile
                ((ProfileUtils *)(*(long *)(pRVar4 + 0x130) + 0xe8),awStack_60,
                 (wstring *)(pRVar4 + 0x118),in_x3);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)awStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)awStack_50);
      cVar2 = Sexy::RtMixedPtrBase::IsValid(this);
      lVar8 = Sexy::LazySingleton<talkingGame>::GetInstancePtr();
      FUN_03e98238(lVar8 + 8);
    }
    pLVar1 = gLawnApp;
    if (cVar2 == '\0') {
      FUN_05478178(awStack_50,L"[USERNAME_ERROR]",awStack_58);
      pPVar6 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar1,awStack_50,awStack_60);
      FUN_05476c50(awStack_50);
      nop();
      FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_68);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                (pRVar4,onErrorAccepted);
      Sexy::Delegate0::Delegate0<EditProfileWidget,void(EditProfileWidget::*)()>
                (aDStack_38,awStack_50);
      PVZ2UIDialog::AddButton(pPVar6,awStack_58,aDStack_38,0);
      FUN_05476c50(awStack_58);
      nop();
    }
    else {
      this_00 = (MainMenu *)LawnApp::GetMainMenu(gLawnApp);
      MainMenu::ScrollLeft(this_00);
      ProfileUtils::TriggerTutorialFunnelEventForCurrentProfile(2);
      this_01 = (NetworkMgr *)NetworkMgr::Instance();
      this_02 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_01);
      if (*(code **)(*(long *)this_02 + 0x28) == INetworkMsgProcess::IsLogined) {
        cVar2 = INetworkMsgProcess::IsLogined(this_02);
      }
      else {
        cVar2 = (**(code **)(*(long *)this_02 + 0x28))();
      }
      if ((cVar2 != '\0') && (cVar2 = LawnApp::CheckProfileOpen(), cVar2 != '\0')) {
        this_03 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        ProfileMgr::Save(this_03,true,true);
      }
    }
    FUN_05476c50(awStack_60);
  }
  else if (in_w1 == 0xb) {
    pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar5,"Play_UI_Button_Main_Save_Release");
    uVar9 = time((time_t *)0x0);
    Sexy::SRand(uVar9);
    iVar3 = FUN_03e980a4(*(undefined8 *)(pRVar4 + 0xe8),*(undefined8 *)(pRVar4 + 0xf0));
    iVar3 = Sexy::Rand(iVar3);
    uVar10 = FUN_03e980b0(*(undefined8 *)(pRVar4 + 0xe8),(long)iVar3);
    iVar3 = FUN_03e980a4(*(undefined8 *)(pRVar4 + 0x100),*(undefined8 *)(pRVar4 + 0x108));
    iVar3 = Sexy::Rand(iVar3);
    uVar11 = FUN_03e980b0(*(undefined8 *)(pRVar4 + 0x100),(long)iVar3);
    FUN_0342e660(awStack_50,uVar10,uVar11);
    (**(code **)(**(long **)(pRVar4 + 0x130) + 0x340))(*(long **)(pRVar4 + 0x130),awStack_50,1);
    FUN_05476c50(awStack_50);
  }
  else if (in_w1 == 5) {
    pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar5,"Play_UI_Menu_Cancel_Release");
    pLVar1 = gLawnApp;
    FUN_05478178(awStack_58,L"[MAINMENU_DELETE_PROFILE_HEADER]",auStack_68);
    FUN_05478178(awStack_50,L"[MAINMENU_DELETE_PROFILE_BODY]",awStack_60);
    pPVar6 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar1,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[MAINMENU_DELETE_PROFILE]",awStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              (pRVar4,onDeleteAccepted);
    Sexy::Delegate0::Delegate0<EditProfileWidget,void(EditProfileWidget::*)()>
              (aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar6,awStack_58,aDStack_38,1);
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[MAINMENU_KEEP_PROFILE]",awStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              (pRVar4,onDeleteCanceled);
    Sexy::Delegate0::Delegate0<EditProfileWidget,void(EditProfileWidget::*)()>
              (aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar6,awStack_58,aDStack_38,0);
    FUN_05476c50(awStack_58);
    nop();
    pPVar7 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
    PVZ2UIDialog::SetHeaderFont(pPVar6,pPVar7,(Color *)&PrimeText_Game::Color_Generic_Title);
    pPVar7 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
    Sexy::Color::Color((Color *)awStack_50,1);
    PVZ2UIDialog::SetFooterFont(pPVar6,pPVar7,(Color *)awStack_50);
    PVZ2UIDialog::SetBackgroundDarken(pPVar6,true,0.5);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to EditProfileWidget::ButtonDepress(int) */

void __thiscall EditProfileWidget::ButtonDepress(EditProfileWidget *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditProfileWidget::addFilterNameList() */

void __thiscall EditProfileWidget::addFilterNameList(EditProfileWidget *this)

{
  string *psVar1;
  char cVar2;
  GenericResFile *this_00;
  char *__s;
  long lVar3;
  int *piVar4;
  undefined4 *puVar5;
  ulong uVar6;
  ulong uVar7;
  wstring awStack_48 [8];
  string asStack_40 [8];
  Buffer aBStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Buffer::Buffer(aBStack_38);
  psVar1 = Sexy::gSexyAppBase;
  this_00 = (GenericResFile *)
            CachedResourcePtr<Sexy::GenericResFile>::operator->
                      ((CachedResourcePtr<Sexy::GenericResFile> *)&DAT_06ae0bd8);
  __s = (char *)Sexy::GenericResFile::GetFilePath(this_00);
  std::string::string(asStack_40,__s);
  Sexy::SexyAppBase::ReadBufferFromFile(psVar1,(Buffer *)asStack_40,SUB81(aBStack_38,0));
  std::string::~string(asStack_40);
  nop();
  cVar2 = Sexy::Buffer::AtEnd(aBStack_38);
  while (cVar2 == '\0') {
    uVar7 = 0;
    FUN_05476574(awStack_48);
    Sexy::Buffer::ReadUTF8Line();
    lVar3 = FUN_054765d0(asStack_40);
    if (lVar3 != 0) {
      do {
        piVar4 = (int *)FUN_05476f5c(asStack_40,uVar7);
        if (((*piVar4 != 0xd) && (piVar4 = (int *)FUN_05476f5c(asStack_40,uVar7), *piVar4 != 10)) &&
           (piVar4 = (int *)FUN_05476f5c(asStack_40,uVar7), *piVar4 != 9)) {
          puVar5 = (undefined4 *)FUN_05476f5c(asStack_40,uVar7);
          FUN_054778bc(awStack_48,1,*puVar5);
        }
        uVar7 = uVar7 + 1;
        uVar6 = FUN_054765d0(asStack_40);
      } while (uVar7 < uVar6);
    }
    cVar2 = FUN_054765e8(awStack_48);
    if (cVar2 == '\0') {
      std::vector<std::wstring,std::allocator<std::wstring>>::push_back
                ((vector<std::wstring,std::allocator<std::wstring>> *)(this + 0x118),awStack_48);
    }
    FUN_05476c50(asStack_40);
    FUN_05476c50(awStack_48);
    cVar2 = Sexy::Buffer::AtEnd(aBStack_38);
  }
  Sexy::Buffer::~Buffer(aBStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditProfileWidget::EditProfileWidget(Sexy::RtWeakPtr<PlayerInfo>) */

void __thiscall EditProfileWidget::EditProfileWidget(EditProfileWidget *this,RtWeakPtr *param_2)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *this_00;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *this_01;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *this_02;
  ButtonListener *this_03;
  undefined *puVar1;
  LawnApp *this_04;
  string *psVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  GenericResFile *this_05;
  char *__s;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  SalesProgressBar *this_06;
  PVZ2UIEditWidget *this_07;
  PVZ2UIButton *pPVar16;
  long lVar17;
  Widget *pWVar18;
  code *pcVar19;
  long *plVar20;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  wstring awStack_c0 [8];
  Insets aIStack_b8 [16];
  Buffer aBStack_a8 [48];
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_8;
  
  this_00 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x140);
  local_8 = ___stack_chk_guard;
  this_01 = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x100);
  this_02 = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8);
  this_03 = (ButtonListener *)(this + 0xd8);
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener(this_03);
  Sexy::EditListener::EditListener((EditListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_06790680;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_067909c0;
  *(undefined ***)(this + 0xe0) = &PTR_EditWidgetText_06790a08;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(this_02);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(this_01);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x118));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(this_00)
  ;
  this_04 = gLawnApp;
  std::string::string((string *)&local_40,"Credits");
  LawnApp::LoadGroup(this_04,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  std::vector<std::wstring,std::allocator<std::wstring>>::clear
            ((vector<std::wstring,std::allocator<std::wstring>> *)this_02);
  std::vector<std::wstring,std::allocator<std::wstring>>::clear
            ((vector<std::wstring,std::allocator<std::wstring>> *)this_01);
  std::vector<std::wstring,std::allocator<std::wstring>>::clear
            ((vector<std::wstring,std::allocator<std::wstring>> *)(this + 0x118));
  Sexy::Buffer::Buffer(aBStack_a8);
  psVar2 = Sexy::gSexyAppBase;
  this_05 = (GenericResFile *)
            CachedResourcePtr<Sexy::GenericResFile>::operator->
                      ((CachedResourcePtr<Sexy::GenericResFile> *)&DAT_06ae0678);
  __s = (char *)Sexy::GenericResFile::GetFilePath(this_05);
  std::string::string((string *)&local_40,__s);
  Sexy::SexyAppBase::ReadBufferFromFile(psVar2,(Buffer *)&local_40,SUB81(aBStack_a8,0));
  std::string::~string((string *)&local_40);
  nop();
  Sexy::Buffer::ReadUTF8Line();
  Sexy::Buffer::ReadUTF8Line();
  FUN_05477b24((string *)&local_40,auStack_d8);
  MainMenu::SplitString((MainMenu *)this,(string *)&local_40,this_02,0x2c);
  FUN_05476c50((string *)&local_40);
  FUN_05477b24((string *)&local_40,auStack_d0);
  MainMenu::SplitString((MainMenu *)this,(string *)&local_40,this_01,0x2c);
  FUN_05476c50((string *)&local_40);
  addFilterNameList(this);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=((RtWeakPtr<PowerPropertySheet> *)this_00,param_2);
  Sexy::LazySingleton<ProfileMgr>::GetInstance();
  iVar5 = ProfileMgr::GetNumProfiles();
  uVar11 = 0;
  if (iVar5 != 0) {
    uVar11 = 2;
  }
  *(undefined4 *)(this + 0x148) = uVar11;
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar3) {
    *(undefined4 *)(this + 0x148) = 1;
  }
  iVar5 = FUN_03e98680(0x1a9);
  iVar6 = FUN_03e98680(0x1be);
  Sexy::Widget::Resize((Widget *)this,0,0,iVar5,iVar6);
  uVar13 = time((time_t *)0x0);
  Sexy::SRand(uVar13);
  iVar5 = FUN_03e980a4(*(undefined8 *)(this + 0xe8),*(undefined8 *)(this + 0xf0));
  iVar5 = Sexy::Rand(iVar5);
  uVar14 = FUN_03e980b0(*(undefined8 *)(this + 0xe8),(long)iVar5);
  iVar5 = FUN_03e980a4(*(undefined8 *)(this + 0x100),*(undefined8 *)(this + 0x108));
  iVar5 = Sexy::Rand(iVar5);
  uVar15 = FUN_03e980b0(*(undefined8 *)(this + 0x100),(long)iVar5);
  FUN_0342e660(auStack_c8,uVar14,uVar15);
  FUN_05477b24(awStack_c0,auStack_c8);
  iVar5 = FUN_03e98680(0x3c);
  iVar6 = FUN_03e98680(10);
  iVar7 = FUN_03e98680(0x14);
  iVar8 = FUN_03e98680(0x5b);
  iVar9 = FUN_03e98680(0x121);
  this_06 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0500);
  iVar10 = SalesProgressBar::GetCurrentLevel(this_06);
  Sexy::Insets::Insets((Insets *)&local_40,(iVar5 + iVar6) - iVar7,iVar8,iVar9 - iVar7,iVar10);
  bVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
  this_07 = ::operator_new(0x1b8);
  PVZ2UIEditWidget::PVZ2UIEditWidget
            (this_07,(TRect *)&local_40,0,(EditListener *)(this + 0xe0),awStack_c0,(bool)(bVar4 ^ 1)
            );
  lVar17 = *(long *)this_07;
  *(PVZ2UIEditWidget **)(this + 0x130) = this_07;
  (**(code **)(lVar17 + 0x170))(this_07,2,&PrimeText_Game::Color_Description_Brown);
  (**(code **)(**(long **)(this + 0x130) + 0x340))(*(long **)(this + 0x130),auStack_c8,1);
  pWVar18 = *(Widget **)(this + 0x130);
  pWVar18[0x16c] = (Widget)0x0;
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,pWVar18);
  FUN_05478178(awStack_78,L"[MAINMENU_SAVE]",aIStack_b8);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar16 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar16,4,this_03,awStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x138) = pPVar16;
  FUN_05476c50(awStack_78);
  nop();
  pPVar16 = *(PVZ2UIButton **)(this + 0x138);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ae0d48,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06ae0500,3);
  PVZ2UIButton::SetDialogStates(pPVar16,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  if ((*(uint *)(this + 0x148) & 0xfffffffd) == 0) {
    plVar20 = *(long **)(this + 0x138);
    iVar5 = FUN_03e98680(0x90);
    uVar11 = FUN_03e98680(0x177);
    uVar12 = FUN_03e98680(0x2b);
    (**(code **)(*plVar20 + 0x198))(plVar20,(*(int *)(this + 0x50) - iVar5) / 2,uVar11,iVar5,uVar12)
    ;
    (**(code **)(**(long **)(this + 0x138) + 0x188))(*(long **)(this + 0x138),1);
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x138));
    iVar5 = *(int *)(this + 0x148);
  }
  else {
    iVar6 = FUN_03e98680(0x6c);
    iVar7 = FUN_03e98680(0x27);
    plVar20 = *(long **)(this + 0x138);
    iVar5 = ((iVar6 * -2 - iVar7) + *(int *)(this + 0x50)) / 2;
    uVar11 = FUN_03e98680(0x177);
    uVar12 = FUN_03e98680(0x2b);
    (**(code **)(*plVar20 + 0x198))(plVar20,iVar7 + iVar5 + iVar6,uVar11,iVar6,uVar12);
    FUN_05478178(awStack_78,L"[MAINMENU_DELETE_PROFILE]",aIStack_b8);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar16 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar16,5,this_03,awStack_78,(Color *)&local_40);
    FUN_05476c50(awStack_78);
    nop();
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ae07e8,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06ae04a0,3);
    PVZ2UIButton::SetDialogStates(pPVar16,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
    uVar11 = FUN_03e98680(0x177);
    uVar12 = FUN_03e98680(0x2b);
    (**(code **)(*(long *)pPVar16 + 0x198))(pPVar16,iVar5,uVar11,iVar6,uVar12);
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)pPVar16);
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x138));
    iVar5 = *(int *)(this + 0x148);
  }
  if (iVar5 - 1U < 2) {
    FUN_05478178(awStack_78,&DAT_056f11a8,aIStack_b8);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar16 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar16,4,this_03,awStack_78,(Color *)&local_40);
    FUN_05476c50(awStack_78);
    nop();
    iVar7 = FUN_03e98680(0x175);
    iVar5 = *(int *)(this + 0x50);
    iVar8 = FUN_03e98680(0x1b);
    lVar17 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0938);
    iVar6 = *(int *)(lVar17 + 0x38);
    lVar17 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0938);
    Sexy::Insets::Insets(aIStack_b8,(iVar5 - iVar7) / 2,iVar8,iVar6,*(int *)(lVar17 + 0x3c));
    (**(code **)(*(long *)pPVar16 + 0x1a0))(pPVar16,aIStack_b8);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ae0938,1);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06ae0838,1);
    PVZ2UIButton::SetDialogStates(pPVar16,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)pPVar16);
  }
  FUN_05478178(awStack_78,&DAT_056f11a8,aIStack_b8);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar16 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar16,0xb,this_03,awStack_78,(Color *)&local_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ae06a0,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06ae0ca8,3);
  PVZ2UIButton::SetDialogStates(pPVar16,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  pcVar19 = *(code **)(*(long *)pPVar16 + 0x198);
  iVar5 = FUN_03e98680(0x3c);
  iVar6 = FUN_03e98680(5);
  iVar7 = FUN_03e98680(0x121);
  iVar8 = FUN_03e98680(9);
  iVar9 = FUN_03e98680(0x5b);
  iVar10 = FUN_03e98680(10);
  lVar17 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae06a0);
  uVar11 = *(undefined4 *)(lVar17 + 0x38);
  lVar17 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae06a0);
  (*pcVar19)(pPVar16,(iVar5 + iVar6 + iVar7) - iVar8,iVar9 - iVar10,uVar11,
             *(undefined4 *)(lVar17 + 0x3c));
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)pPVar16);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onProfileIconPictureTaken);
  local_100 = local_40;
  uStack_f8 = uStack_38;
  local_f0 = local_30;
  MessageRouter::
  Subscribe<PlayerInfo_const*,Sexy::MemoryImage*,Sexy::CBMemberTranslatorX<EditProfileWidget,void(EditProfileWidget::*)(PlayerInfo_const*,Sexy::MemoryImage*)>>
            ((MessageRouter *)puVar1,Message::ProfileIconPictureTaken,&local_100);
  FUN_05476c50(awStack_c0);
  FUN_05476c50(auStack_c8);
  FUN_05476c50(auStack_d0);
  FUN_05476c50(auStack_d8);
  Sexy::Buffer::~Buffer(aBStack_a8);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

