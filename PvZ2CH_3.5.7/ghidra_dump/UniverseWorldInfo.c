// Class: UniverseWorldInfo


/* UniverseWorldInfo::ScrollTargetReached(Sexy::ScrollWidget*) */

void UniverseWorldInfo::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UniverseWorldInfo::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UniverseWorldInfo::ScrollTargetReached(UniverseWorldInfo *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* UniverseWorldInfo::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UniverseWorldInfo::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UniverseWorldInfo::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UniverseWorldInfo::ScrollTargetInterrupted(UniverseWorldInfo *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* UniverseWorldInfo::UnlockCancel() */

void UniverseWorldInfo::UnlockCancel(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* UniverseWorldInfo::HideWorlds() */

void __thiscall UniverseWorldInfo::HideWorlds(UniverseWorldInfo *this)

{
  if (*(UniverseMap **)(this + 0x128) != (UniverseMap *)0x0) {
    UniverseMap::HideWorlds(*(UniverseMap **)(this + 0x128));
    return;
  }
  return;
}


/* UniverseWorldInfo::ShowWorlds() */

void UniverseWorldInfo::ShowWorlds(void)

{
  long lVar1;
  UniverseMap *this;
  
  if (((gLawnApp != (LawnApp *)0x0) && (lVar1 = LawnApp::GetWorldMap(gLawnApp), lVar1 != 0)) &&
     (this = (UniverseMap *)FUN_044e60d0(*(undefined8 *)(lVar1 + 0x2b0)), this != (UniverseMap *)0x0
     )) {
    UniverseMap::ShowWorlds(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseWorldInfo::TransToWorld(std::string const&) */

void UniverseWorldInfo::TransToWorld(string *param_1)

{
  UniverseMap *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  param_1[0xf7] = (string)0x0;
  local_8 = ___stack_chk_guard;
  if ((param_1[0xf6] != (string)0x0) &&
     (pUVar1 = *(UniverseMap **)(param_1 + 0x128), pUVar1 != (UniverseMap *)0x0)) {
    FUN_05475d88(asStack_10,param_1 + 0x138);
    UniverseMap::TransToWorldByName(pUVar1,asStack_10);
    std::string::~string(asStack_10);
  }
  ShowWorlds();
  LawnApp::KillWorldPreview(gLawnApp);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseWorldInfo::~UniverseWorldInfo() */

void __thiscall UniverseWorldInfo::~UniverseWorldInfo(UniverseWorldInfo *this)

{
  UniverseWorldInfo *pUVar1;
  LawnApp *pLVar2;
  UniverseWorldInfo *this_00;
  UniverseWorldInfo *this_01;
  string asStack_10 [8];
  long local_8;
  
  this_00 = this + 0x490;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_06856270;
  local_8 = ___stack_chk_guard;
  *(undefined ***)(this + 0xd8) = &PTR__UniverseWorldInfo_06856228;
  *(undefined ***)this = &PTR_GetClass_06855ef0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  EffectAnim_UIAnim::SafeRelease((EffectAnim_UIAnim *)(this + 0x250));
  EffectAnim_UIAnim::SafeRelease((EffectAnim_UIAnim *)(this + 0x280));
  EffectAnim_UIAnim::SafeRelease((EffectAnim_UIAnim *)(this + 0x2e0));
  EffectAnim_UIAnim::SafeRelease((EffectAnim_UIAnim *)(this + 0x2b0));
  EffectAnim_UIAnim::SafeRelease((EffectAnim_UIAnim *)(this + 0x310));
  EffectAnim_UIAnim::SafeRelease((EffectAnim_UIAnim *)(this + 0x340));
  EffectAnim_UIAnim::SafeRelease((EffectAnim_UIAnim *)(this + 0x370));
  this_01 = this + 0x3a0;
  do {
    pUVar1 = this_01 + 0x30;
    EffectAnim_UIAnim::SafeRelease((EffectAnim_UIAnim *)this_01);
    this_01 = pUVar1;
  } while (pUVar1 != this_00);
  if (*(long **)(this + 0x490) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x490) + 0x18))();
    *(undefined8 *)(this + 0x490) = 0;
  }
  pLVar2 = gLawnApp;
  std::string::string(asStack_10,"UI_UniverseWorldInfo");
  LawnApp::DeleteGroup(pLVar2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_10,"Effect_UniverseWorldInfo");
  LawnApp::DeleteGroup(pLVar2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_10,"UI_Universe");
  LawnApp::DeleteGroup(pLVar2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_Plant");
  LawnApp::DeleteGroup(pLVar2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_10,"TimeTunnel");
  LawnApp::DeleteGroup(pLVar2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x4a0));
  do {
    this_00 = this_00 + -0x30;
    EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)this_00);
  } while (this + 0x3a0 != this_00);
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x370));
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x340));
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x310));
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x2e0));
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x2b0));
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x280));
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x250));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x228));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x220));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x218));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x210));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x208));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x200));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1f8));
  FUN_05476c50(this + 0x1f0);
  FUN_05476c50(this + 0x1e8);
  std::string::~string((string *)(this + 0x138));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UniverseWorldInfo::~UniverseWorldInfo() */

void __thiscall UniverseWorldInfo::~UniverseWorldInfo(UniverseWorldInfo *this)

{
  ~UniverseWorldInfo(this + -0xd8);
  return;
}


/* UniverseWorldInfo::~UniverseWorldInfo() */

void __thiscall UniverseWorldInfo::~UniverseWorldInfo(UniverseWorldInfo *this)

{
  ~UniverseWorldInfo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UniverseWorldInfo::~UniverseWorldInfo() */

void __thiscall UniverseWorldInfo::~UniverseWorldInfo(UniverseWorldInfo *this)

{
  ~UniverseWorldInfo(this + -0xd8);
  return;
}


/* UniverseWorldInfo::GetCurrentWorldNameAppearAnim() */

void UniverseWorldInfo::GetCurrentWorldNameAppearAnim(void)

{
  long in_x0;
  
  std::operator+((string *)(in_x0 + 0x138),"_on");
  return;
}


/* UniverseWorldInfo::GetCurrentWorldNameIdleAnim() */

void UniverseWorldInfo::GetCurrentWorldNameIdleAnim(void)

{
  long in_x0;
  
  std::operator+((string *)(in_x0 + 0x138),"_loop");
  return;
}


/* UniverseWorldInfo::GetCurrentWorldNameDisappearAnim() */

void UniverseWorldInfo::GetCurrentWorldNameDisappearAnim(void)

{
  long in_x0;
  
  std::operator+((string *)(in_x0 + 0x138),"_off");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseWorldInfo::DrawTransitionEffect(Sexy::Graphics*) */

void __thiscall UniverseWorldInfo::DrawTransitionEffect(UniverseWorldInfo *this,Graphics *param_1)

{
  long lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x490) != 0) {
    lVar1 = FUN_044e60cc(*(undefined8 *)(*(long *)(this + 0x490) + 0x20));
    fVar3 = (float)*(int *)(lVar1 + 0x40);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_38,(float)*(int *)(lVar1 + 0x3c),fVar3);
    local_38 = (float)Sexy::SexyVector2::operator*
                                ((SexyVector2 *)&local_38,*(float *)(lVar1 + 0x28));
    local_34 = fVar3;
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    fVar3 = local_38;
    local_40 = 1.0;
    local_3c = (float)*(int *)(gLawnApp + 0xd4) / local_38;
    pfVar2 = eastl::max_alt<float>(&local_40,&local_3c);
    fVar4 = *pfVar2;
    FUN_044e60ac(-(fVar3 * 0.5),-(local_34 * 0.5),auStack_28,auStack_1c);
    Sexy::SexyTransform2D::Scale(aSStack_30,fVar4,fVar4);
    FUN_044e60ac((float)(*(int *)(gLawnApp + 0xd4) / 2),(float)(*(int *)(gLawnApp + 0xd8) / 2),
                 auStack_28,auStack_1c);
    PopAnimRig::Draw(*(PopAnimRig **)(this + 0x490),param_1,aSStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UniverseWorldInfo::OnDialogBgClosed(std::string const&) */

void UniverseWorldInfo::OnDialogBgClosed(string *param_1)

{
  char cVar1;
  char *in_x2;
  undefined4 uVar2;
  
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(param_1 + 0x250));
  if (cVar1 != '\0') {
    EA::Thread::MutexParameters::MutexParameters((MutexParameters *)(param_1 + 0x250),false,in_x2);
  }
  param_1[0xf9] = (string)0x1;
  *(undefined4 *)(param_1 + 0x110) = 0x3f800000;
  uVar2 = PVZ_T();
  *(undefined4 *)(param_1 + 0x11c) = uVar2;
  return;
}


/* UniverseWorldInfo::UpdateTransitionEffect() */

void __thiscall UniverseWorldInfo::UpdateTransitionEffect(UniverseWorldInfo *this)

{
  PopAnimRig *this_00;
  float fVar1;
  float fVar2;
  
  this_00 = *(PopAnimRig **)(this + 0x490);
  if (this_00 != (PopAnimRig *)0x0) {
    fVar1 = (float)PVZ_T();
    fVar2 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_00,fVar1,fVar2);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseWorldInfo::DrawWorldImage(Sexy::Graphics*) */

void __thiscall UniverseWorldInfo::DrawWorldImage(UniverseWorldInfo *this,Graphics *param_1)

{
  RtWeakPtr *this_00;
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  LotteryResultProgressBar *this_01;
  SalesProgressBar *this_02;
  ResourceInfo *pRVar6;
  float fVar7;
  float fVar8;
  Color aCStack_18 [12];
  int local_c;
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x1f8);
  local_8 = ___stack_chk_guard;
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar3) {
    this_01 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_01);
    fVar7 = *(float *)(this + 0x114);
    this_02 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar5 = SalesProgressBar::GetCurrentLevel(this_02);
    iVar1 = *(int *)(this + 0x1d0);
    fVar8 = *(float *)(this + 0x114);
    iVar2 = *(int *)(this + 0x1d4);
    Sexy::Color::Color(aCStack_18,1);
    local_c = (int)(*(float *)(this + 0x110) * 255.0);
    Sexy::Graphics::SetColor(param_1,aCStack_18);
    Sexy::Graphics::SetColorizeImages(param_1,true);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar6,iVar1 - (int)((float)iVar4 * fVar7) / 2,
               iVar2 - (int)((float)iVar5 * fVar8) / 2,(int)((float)iVar4 * fVar7),
               (int)((float)iVar5 * fVar8));
    Sexy::Graphics::SetColorizeImages(param_1,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseWorldInfo::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
UniverseWorldInfo::DrawAll(UniverseWorldInfo *this,ModalFlags *param_1,Graphics *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if ((((this[0x130] != (UniverseWorldInfo)0x0) && (*(long *)(this + 0x248) != 0)) &&
      (*(char *)(*(long *)(this + 0x248) + 0x6c) != '\0')) &&
     (cVar1 = AssetsManagerManifest::isVersionLoaded((AssetsManagerManifest *)(this + 0x2e0)),
     cVar1 != '\0')) {
    cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x370));
    if (cVar1 != '\0') {
      EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x370),param_2);
    }
  }
  DrawWorldImage(this,param_2);
  DrawTransitionEffect(this,param_2);
  FUN_05478178(auStack_20,&DAT_056f11a8,auStack_28);
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_26_Outline);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_2,auStack_20,this + 0x1c0,uVar2,aCStack_18,2,1);
  FUN_05476c50(auStack_20);
  nop();
  FUN_05478178(auStack_20,&DAT_056f11a8,auStack_28);
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_26_Outline);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_2,auStack_20,this + 0x1b0,uVar2,aCStack_18,2,1);
  FUN_05476c50(auStack_20);
  nop();
  FUN_05478178(auStack_20,&DAT_056f11a8,auStack_28);
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_26_Outline);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_2,auStack_20,this + 0x1a0,uVar2,aCStack_18,2,1);
  FUN_05476c50(auStack_20);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseWorldInfo::SolveMarks() */

void __thiscall UniverseWorldInfo::SolveMarks(UniverseWorldInfo *this)

{
  char cVar1;
  ProfileMgr *this_00;
  PlayerInfo *pPVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (pPVar2 != (PlayerInfo *)0x0) {
    cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x370));
    if ((cVar1 != '\0') && (this[0xfc] != (UniverseWorldInfo)0x0)) {
      FUN_05475d88(asStack_10,this + 0x138);
      cVar1 = PlayerInfo::IsPlantCupUnlocked(pPVar2,asStack_10);
      std::string::~string(asStack_10);
      if ((cVar1 == '\0') &&
         ((((this[0x130] != (UniverseWorldInfo)0x0 && (*(long *)(this + 0x248) != 0)) &&
           (*(char *)(*(long *)(this + 0x248) + 0x6c) != '\0')) &&
          (cVar1 = AssetsManagerManifest::isVersionLoaded((AssetsManagerManifest *)(this + 0x2e0)),
          cVar1 != '\0')))) {
        FUN_05475d88(asStack_10,this + 0x138);
        PlayerInfo::SetPlantCupUnlocked(pPVar2,asStack_10);
        std::string::~string(asStack_10);
        this[0xfc] = (UniverseWorldInfo)0x0;
        std::string::string(asStack_18,"plantcup_open");
        std::string::string(asStack_10,"plantcup_on");
        EffectAnim_UIAnim::PlayOnceThenLoop
                  ((EffectAnim_UIAnim *)(this + 0x370),asStack_18,asStack_10);
        std::string::~string(asStack_10);
        nop();
        std::string::~string(asStack_18);
        nop();
      }
    }
    cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x340));
    if ((cVar1 != '\0') && (this[0xfb] != (UniverseWorldInfo)0x0)) {
      FUN_05475d88(asStack_10,this + 0x138);
      cVar1 = PlayerInfo::IsBossCupUnlocked(pPVar2,asStack_10);
      std::string::~string(asStack_10);
      if ((cVar1 == '\0') &&
         ((this[0x130] != (UniverseWorldInfo)0x0 && (this[0xf0] != (UniverseWorldInfo)0x0)))) {
        FUN_05475d88(asStack_10,this + 0x138);
        PlayerInfo::SetBossCupUnlocked(pPVar2,asStack_10);
        std::string::~string(asStack_10);
        this[0xfb] = (UniverseWorldInfo)0x0;
        std::string::string(asStack_18,"zombiecup_open");
        std::string::string(asStack_10,"zombiecup_on");
        EffectAnim_UIAnim::PlayOnceThenLoop
                  ((EffectAnim_UIAnim *)(this + 0x340),asStack_18,asStack_10);
        std::string::~string(asStack_10);
        nop();
        std::string::~string(asStack_18);
        nop();
      }
    }
    cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x310));
    if ((cVar1 != '\0') && (this[0xfa] != (UniverseWorldInfo)0x0)) {
      FUN_05475d88(asStack_10,this + 0x138);
      cVar1 = PlayerInfo::IsStarCupUnlocked(pPVar2,asStack_10);
      std::string::~string(asStack_10);
      if ((cVar1 == '\0') &&
         ((this[0x130] != (UniverseWorldInfo)0x0 && (this[0xf1] != (UniverseWorldInfo)0x0)))) {
        FUN_05475d88(asStack_10,this + 0x138);
        PlayerInfo::SetStarCupUnlocked(pPVar2,asStack_10);
        std::string::~string(asStack_10);
        this[0xfa] = (UniverseWorldInfo)0x0;
        std::string::string(asStack_18,"starcup_open");
        std::string::string(asStack_10,"starcup_on");
        EffectAnim_UIAnim::PlayOnceThenLoop
                  ((EffectAnim_UIAnim *)(this + 0x310),asStack_18,asStack_10);
        std::string::~string(asStack_10);
        nop();
        std::string::~string(asStack_18);
        nop();
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseWorldInfo::OnPlantDetailOpened(std::string const&) */

void UniverseWorldInfo::OnPlantDetailOpened(string *param_1)

{
  char cVar1;
  long *plVar2;
  ProfileMgr *this;
  PlayerInfo *pPVar3;
  CrazyNPCManager *pCVar4;
  string asStack_48 [8];
  string asStack_40 [8];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  plVar2 = *(long **)(param_1 + 0x248);
  local_8 = ___stack_chk_guard;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,1);
  }
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(param_1 + 0x2b0));
  if (cVar1 != '\0') {
    std::string::string(asStack_40,"normal");
    EffectAnim_UIAnim::PlayLoop((EffectAnim_UIAnim *)(param_1 + 0x2b0),asStack_40);
    std::string::~string(asStack_40);
    nop();
  }
  plVar2 = *(long **)(param_1 + 0x230);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,1);
  }
  (**(code **)(**(long **)(param_1 + 0x238) + 0x158))(*(long **)(param_1 + 0x238),1);
  plVar2 = *(long **)(param_1 + 0x240);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,1);
  }
  param_1[0xf1] = (string)0x1;
  if (param_1[0x130] == (string)0x0) {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    if ((pPVar3 != (PlayerInfo *)0x0) &&
       (cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar3,0x32), cVar1 == '\0')) {
      PlayerInfo::SetActiveTutorial(pPVar3,0x32);
      PlayerInfo::CompleteTutorial(pPVar3,0x32);
      pCVar4 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
      std::string::string(asStack_48,"UNLOCK_WORLD_2");
      Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
      std::string::string(asStack_40,"");
      CrazyNPCManager::StartNarrativeID(pCVar4,asStack_48,aDStack_38,asStack_40);
      std::string::~string(asStack_40);
      nop();
      std::string::~string(asStack_48);
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
/* UniverseWorldInfo::GemUnlockConfirm() */

void __thiscall UniverseWorldInfo::GemUnlockConfirm(UniverseWorldInfo *this)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  WorldDataManager *pWVar2;
  UniverseWorldInfo *pUVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    pWVar2 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    FUN_05475d88(asStack_10,this + 0x138);
    iVar1 = WorldDataManager::GetWorldIdByName(pWVar2,asStack_10);
    std::string::~string(asStack_10);
    pUVar3 = ::operator_new(0x28);
    ICloudRequestCallbackFunction<UniverseWorldInfo,bool>::ICloudRequestCallbackFunction
              (pUVar3,(_func_void_bool_ptr *)this);
    PlayerInfo::SubtractGems(this_01,1,iVar1,(ICloudRequestCallbackFunctionBase *)pUVar3,1,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseWorldInfo::UnlockByGem() */

void __thiscall UniverseWorldInfo::UnlockByGem(UniverseWorldInfo *this)

{
  LawnApp *this_00;
  int iVar1;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  PVZ2UIDialog *pPVar2;
  undefined1 auStack_70 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  wstring awStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  MapEventItem *local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(WorldMapUtils **)(this + 0x498) != (WorldMapUtils *)0x0) {
    WorldMapUtils::FindGateMagentoInformation(*(WorldMapUtils **)(this + 0x498),___stack_chk_guard);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x4a0),(RtWeakPtr *)aRStack_68);
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    if (this_02 != (PlayerInfo *)0x0) {
      iVar1 = PlayerInfo::GetNumGems(this_02,true);
      if (0x39 < iVar1) {
        TodStringTranslate(L"[WORLDINFO_GEM_UNLOCK_DES_ANDROID]");
        TodReplaceNumberString(awStack_60,L"{GEMS}",0x3a);
        FUN_054766c8(awStack_60,awStack_50);
        FUN_05476c50(awStack_50);
        this_00 = gLawnApp;
        FUN_05478178(awStack_50,L"[WORLDINFO_GEM_UNLOCK_TITLE]",auStack_58);
        pPVar2 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_50,awStack_60);
        FUN_05476c50(awStack_50);
        nop();
        FUN_05478178(auStack_58,L"[WORLDINFO_UNLOCK_CANCEL]",auStack_70);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,UnlockCancel);
        Sexy::Delegate0::Delegate0<UniverseWorldInfo,void(UniverseWorldInfo::*)()>
                  (aDStack_38,awStack_50);
        PVZ2UIDialog::AddButton(pPVar2,auStack_58,aDStack_38,1);
        FUN_05476c50(auStack_58);
        nop();
        FUN_05478178(auStack_58,L"[WORLDINFO_UNLOCK_COMFIRM]",auStack_70);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,GemUnlockConfirm);
        Sexy::Delegate0::Delegate0<UniverseWorldInfo,void(UniverseWorldInfo::*)()>
                  (aDStack_38,awStack_50);
        PVZ2UIDialog::AddButton(pPVar2,auStack_58,aDStack_38,0);
        FUN_05476c50(auStack_58);
        nop();
        FUN_05476c50(awStack_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
        goto LAB_044e750c;
      }
      LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  }
LAB_044e750c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseWorldInfo::UnlockByStar() */

void __thiscall UniverseWorldInfo::UnlockByStar(UniverseWorldInfo *this)

{
  LawnApp *this_00;
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_58,L"[WORLDINFO_STAR_UNLOCK_TITLE]",auStack_68);
  FUN_05478178(awStack_50,L"[WORLDINFO_STAR_UNLOCK_DES]",auStack_60);
  pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05476c50(awStack_58);
  nop();
  FUN_05478178(awStack_58,L"[WORLDINFO_UNLOCK_CANCEL]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,UnlockCancel);
  Sexy::Delegate0::Delegate0<UniverseWorldInfo,void(UniverseWorldInfo::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,1);
  FUN_05476c50(awStack_58);
  nop();
  FUN_05478178(awStack_58,L"[WORLDINFO_UNLOCK_COMFIRM]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,StarUnlockConfirm);
  Sexy::Delegate0::Delegate0<UniverseWorldInfo,void(UniverseWorldInfo::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,0);
  FUN_05476c50(awStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseWorldInfo::CalcWorldPosAndScale() */

void UniverseWorldInfo::CalcWorldPosAndScale(void)

{
  EffectAnim_UIAnim *this;
  char cVar1;
  ReceivedDataCallback *in_x0;
  char *in_x2;
  float fVar2;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (in_x0[0xf5] != (ReceivedDataCallback)0x0) {
    fVar2 = (float)PVZ_T();
    if (fVar2 < *(float *)(in_x0 + 0x118) + 0.3) {
      fVar2 = (float)PVZ_T();
      *(float *)(in_x0 + 0x114) = (fVar2 - *(float *)(in_x0 + 0x118)) * 1.3333333 + 1.0;
    }
    else {
      fVar2 = (float)PVZ_T();
      if (fVar2 < *(float *)(in_x0 + 0x118) + 0.6) {
        fVar2 = (float)PVZ_T();
        fVar2 = ((-0.3 - *(float *)(in_x0 + 0x118)) + fVar2) * 3.3333333;
        *(int *)(in_x0 + 0x1d0) =
             (int)((float)*(int *)(in_x0 + 0x1d8) +
                  (float)(*(int *)(in_x0 + 0x1e0) - *(int *)(in_x0 + 0x1d8)) * fVar2);
        *(float *)(in_x0 + 0x114) = 1.4 - fVar2 * 0.39999998;
        *(int *)(in_x0 + 0x1d4) =
             (int)((float)*(int *)(in_x0 + 0x1dc) +
                  (float)(*(int *)(in_x0 + 0x1e4) - *(int *)(in_x0 + 0x1dc)) * fVar2);
      }
      else {
        this = (EffectAnim_UIAnim *)(in_x0 + 0x250);
        *(undefined8 *)(in_x0 + 0x1d0) = *(undefined8 *)(in_x0 + 0x1e0);
        in_x0[0xf5] = (ReceivedDataCallback)0x0;
        *(undefined4 *)(in_x0 + 0x114) = 0x3f800000;
        cVar1 = EffectAnim_UIAnim::IsValid(this);
        if (cVar1 != '\0') {
          EA::Thread::MutexParameters::MutexParameters((MutexParameters *)this,true,in_x2);
          std::string::string(asStack_58,"backPlane_on");
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    (in_x0,OnDialogBgOpened);
          Sexy::Delegate1<std::string_const&>::
          Delegate1<UniverseWorldInfo,void(UniverseWorldInfo::*)(std::string_const&)>
                    (aDStack_38,aCStack_50);
          EffectAnim_UIAnim::PlayOnceThen(this,asStack_58,aDStack_38);
          std::string::~string(asStack_58);
          nop();
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseWorldInfo::OnDialogBgOpened(std::string const&) */

void UniverseWorldInfo::OnDialogBgOpened(string *param_1)

{
  EffectAnim_UIAnim *this;
  bool bVar1;
  char cVar2;
  long *plVar3;
  code *pcVar4;
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  code *local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar4 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1 + 0x138,"modern");
  if ((bVar1) && (plVar3 = *(long **)(param_1 + 0x230), plVar3 != (long *)0x0)) {
    pcVar4 = *(code **)(*plVar3 + 0x158);
    (*pcVar4)(plVar3,1);
  }
  this = (EffectAnim_UIAnim *)(param_1 + 0x280);
  cVar2 = EffectAnim_UIAnim::IsValid(this);
  if (cVar2 != '\0') {
    EA::Thread::MutexParameters::MutexParameters((MutexParameters *)this,true,(char *)pcVar4);
    GetCurrentWorldNameAppearAnim();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)param_1,OnWorldNameAppeared);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<UniverseWorldInfo,void(UniverseWorldInfo::*)(std::string_const&)>
              (aDStack_38,asStack_50);
    EffectAnim_UIAnim::PlayOnceThen(this,asStack_58,aDStack_38);
    std::string::~string(asStack_58);
  }
  cVar2 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(param_1 + 0x250));
  if (cVar2 != '\0') {
    std::string::string(asStack_50,"backplane_loop");
    EffectAnim_UIAnim::PlayLoop((EffectAnim_UIAnim *)(param_1 + 0x250),asStack_50);
    std::string::~string(asStack_50);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseWorldInfo::OnLevelDetailOpened(std::string const&) */

void UniverseWorldInfo::OnLevelDetailOpened(string *param_1)

{
  EffectAnim_UIAnim *this;
  char cVar1;
  char *in_x2;
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0xf3] == (string)0x0) {
    this = (EffectAnim_UIAnim *)(param_1 + 0x2b0);
    param_1[0xf3] = (string)0x1;
    cVar1 = EffectAnim_UIAnim::IsValid(this);
    if (cVar1 != '\0') {
      EA::Thread::MutexParameters::MutexParameters((MutexParameters *)this,true,in_x2);
      std::string::string(asStack_58,"getreward_on");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)param_1,OnPlantDetailOpened);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<UniverseWorldInfo,void(UniverseWorldInfo::*)(std::string_const&)>
                (aDStack_38,asStack_50);
      EffectAnim_UIAnim::PlayOnceThen(this,asStack_58,aDStack_38);
      std::string::~string(asStack_58);
      nop();
    }
  }
  param_1[0xf4] = (string)0x0;
  param_1[0xf0] = (string)0x1;
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(param_1 + 0x2e0));
  if (cVar1 != '\0') {
    std::string::string(asStack_50,"easy_loop");
    EffectAnim_UIAnim::PlayLoop((EffectAnim_UIAnim *)(param_1 + 0x2e0),asStack_50);
    std::string::~string(asStack_50);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseWorldInfo::DetailOpeningHard(std::string const&) */

void UniverseWorldInfo::DetailOpeningHard(string *param_1)

{
  char cVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(param_1 + 0x2e0));
  if (cVar1 != '\0') {
    std::string::string(asStack_58,"hard_on");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)param_1,DetailLoopingHard);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<UniverseWorldInfo,void(UniverseWorldInfo::*)(std::string_const&)>
              (aDStack_38,aCStack_50);
    EffectAnim_UIAnim::PlayOnceThen((EffectAnim_UIAnim *)(param_1 + 0x2e0),asStack_58,aDStack_38);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseWorldInfo::DetailLoopingHard(std::string const&) */

void UniverseWorldInfo::DetailLoopingHard(string *param_1)

{
  EffectAnim_UIAnim *pEVar1;
  char cVar2;
  Delegate1<std::string_const&> *this;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  this = (Delegate1<std::string_const&> *)&__stack_chk_guard;
  param_1[0xf0] = (string)0x1;
  param_1[0xf4] = (string)0x1;
  local_8 = ___stack_chk_guard;
  cVar2 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(param_1 + 0x2e0));
  if (cVar2 != '\0') {
    this = aDStack_38;
    std::string::string(asStack_58,"hard_loop");
    pEVar1 = (EffectAnim_UIAnim *)(param_1 + 0x3a0);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)param_1,DetailClosingHard);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<UniverseWorldInfo,void(UniverseWorldInfo::*)(std::string_const&)>(this,aCStack_50);
    EffectAnim_UIAnim::PlayOnceThen((EffectAnim_UIAnim *)(param_1 + 0x2e0),asStack_58);
    std::string::~string(asStack_58);
    nop();
    cVar2 = EffectAnim_UIAnim::IsValid(pEVar1);
    while( true ) {
      if (cVar2 != '\0') {
        EA::Thread::MutexParameters::MutexParameters((MutexParameters *)pEVar1,true,(char *)this);
      }
      pEVar1 = pEVar1 + 0x30;
      if (pEVar1 == (EffectAnim_UIAnim *)(param_1 + 0x490)) break;
      cVar2 = EffectAnim_UIAnim::IsValid(pEVar1);
    }
  }
  if (param_1[0xf3] == (string)0x0) {
    pEVar1 = (EffectAnim_UIAnim *)(param_1 + 0x2b0);
    param_1[0xf3] = (string)0x1;
    cVar2 = EffectAnim_UIAnim::IsValid(pEVar1);
    if (cVar2 != '\0') {
      EA::Thread::MutexParameters::MutexParameters((MutexParameters *)pEVar1,true,(char *)this);
      std::string::string(asStack_58,"getreward_on");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)param_1,OnPlantDetailOpened);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<UniverseWorldInfo,void(UniverseWorldInfo::*)(std::string_const&)>
                (aDStack_38,aCStack_50);
      EffectAnim_UIAnim::PlayOnceThen(pEVar1,asStack_58,aDStack_38);
      std::string::~string(asStack_58);
      nop();
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseWorldInfo::DetailClosingHard(std::string const&) */

void UniverseWorldInfo::DetailClosingHard(string *param_1)

{
  EffectAnim_UIAnim *this;
  char cVar1;
  Delegate1<std::string_const&> *this_00;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  param_1[0xf0] = (string)0x0;
  local_8 = ___stack_chk_guard;
  param_1[0xf4] = (string)0x0;
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(param_1 + 0x2e0));
  if (cVar1 != '\0') {
    this_00 = aDStack_38;
    std::string::string(asStack_58,"hard_off");
    this = (EffectAnim_UIAnim *)(param_1 + 0x3a0);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)param_1,DetailOpeningEasy);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<UniverseWorldInfo,void(UniverseWorldInfo::*)(std::string_const&)>(this_00,aCStack_50);
    EffectAnim_UIAnim::PlayOnceThen((EffectAnim_UIAnim *)(param_1 + 0x2e0),asStack_58);
    std::string::~string(asStack_58);
    nop();
    cVar1 = EffectAnim_UIAnim::IsValid(this);
    while( true ) {
      if (cVar1 != '\0') {
        EA::Thread::MutexParameters::MutexParameters((MutexParameters *)this,false,(char *)this_00);
      }
      this = this + 0x30;
      if (this == (EffectAnim_UIAnim *)(param_1 + 0x490)) break;
      cVar1 = EffectAnim_UIAnim::IsValid(this);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseWorldInfo::DetailOpeningEasy(std::string const&) */

void UniverseWorldInfo::DetailOpeningEasy(string *param_1)

{
  char cVar1;
  code *pcVar2;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(param_1 + 0x2e0));
  if (cVar1 != '\0') {
    if (param_1[0xf2] == (string)0x0) {
      std::string::string(asStack_58,"easy_on");
      pcVar2 = OnLevelDetailOpened;
    }
    else {
      std::string::string(asStack_58,"easy_on");
      pcVar2 = DetailLoopingEasy;
    }
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)param_1,pcVar2);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<UniverseWorldInfo,void(UniverseWorldInfo::*)(std::string_const&)>
              (aDStack_38,aCStack_50);
    EffectAnim_UIAnim::PlayOnceThen((EffectAnim_UIAnim *)(param_1 + 0x2e0),asStack_58,aDStack_38);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseWorldInfo::OnWorldNameAppeared(std::string const&) */

void UniverseWorldInfo::OnWorldNameAppeared(string *param_1)

{
  char cVar1;
  char *in_x2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(param_1 + 0x2e0));
  if (cVar1 != '\0') {
    EA::Thread::MutexParameters::MutexParameters((MutexParameters *)(param_1 + 0x2e0),true,in_x2);
    if (param_1[0xf2] == (string)0x0) {
      std::string::string(asStack_10,"");
      DetailOpeningEasy(param_1);
      std::string::~string(asStack_10);
      nop();
    }
    else {
      std::string::string(asStack_10,"");
      DetailOpeningHard(param_1);
      std::string::~string(asStack_10);
      nop();
    }
  }
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(param_1 + 0x280));
  if (cVar1 != '\0') {
    GetCurrentWorldNameIdleAnim();
    EffectAnim_UIAnim::PlayLoop((EffectAnim_UIAnim *)(param_1 + 0x280),asStack_10);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseWorldInfo::DetailLoopingEasy(std::string const&) */

void UniverseWorldInfo::DetailLoopingEasy(string *param_1)

{
  EffectAnim_UIAnim *this;
  char cVar1;
  Delegate1<std::string_const&> *this_00;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  this_00 = (Delegate1<std::string_const&> *)0x1;
  param_1[0xf0] = (string)0x1;
  local_8 = ___stack_chk_guard;
  param_1[0xf4] = (string)0x0;
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(param_1 + 0x2e0));
  if (cVar1 != '\0') {
    this_00 = aDStack_38;
    std::string::string(asStack_58,"easy_loop");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)param_1,DetailClosingEasy);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<UniverseWorldInfo,void(UniverseWorldInfo::*)(std::string_const&)>(this_00,aCStack_50);
    EffectAnim_UIAnim::PlayOnceThen((EffectAnim_UIAnim *)(param_1 + 0x2e0),asStack_58);
    std::string::~string(asStack_58);
    nop();
  }
  if (param_1[0xf3] == (string)0x0) {
    this = (EffectAnim_UIAnim *)(param_1 + 0x2b0);
    param_1[0xf3] = (string)0x1;
    cVar1 = EffectAnim_UIAnim::IsValid(this);
    if (cVar1 != '\0') {
      EA::Thread::MutexParameters::MutexParameters((MutexParameters *)this,true,(char *)this_00);
      std::string::string(asStack_58,"getreward_on");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)param_1,OnPlantDetailOpened);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<UniverseWorldInfo,void(UniverseWorldInfo::*)(std::string_const&)>
                (aDStack_38,aCStack_50);
      EffectAnim_UIAnim::PlayOnceThen(this,asStack_58,aDStack_38);
      std::string::~string(asStack_58);
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
/* UniverseWorldInfo::DetailClosingEasy(std::string const&) */

void UniverseWorldInfo::DetailClosingEasy(string *param_1)

{
  char cVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  param_1[0xf4] = (string)0x0;
  local_8 = ___stack_chk_guard;
  param_1[0xf0] = (string)0x0;
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(param_1 + 0x2e0));
  if (cVar1 != '\0') {
    std::string::string(asStack_58,"easy_off");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)param_1,DetailOpeningHard);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<UniverseWorldInfo,void(UniverseWorldInfo::*)(std::string_const&)>
              (aDStack_38,aCStack_50);
    EffectAnim_UIAnim::PlayOnceThen((EffectAnim_UIAnim *)(param_1 + 0x2e0),asStack_58,aDStack_38);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseWorldInfo::CloseWorldInfo() */

void UniverseWorldInfo::CloseWorldInfo(void)

{
  bool bVar1;
  char cVar2;
  ReceivedDataCallback *in_x0;
  long *plVar3;
  code *in_x2;
  undefined4 uVar4;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  plVar3 = *(long **)(in_x0 + 0x230);
  in_x0[0xf1] = (ReceivedDataCallback)0x0;
  local_8 = ___stack_chk_guard;
  if (plVar3 != (long *)0x0) {
    in_x2 = *(code **)(*plVar3 + 0x158);
    (*in_x2)(plVar3,0);
  }
  bVar1 = std::operator==((string *)(in_x0 + 0x138),"modern");
  if (bVar1) {
    cVar2 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(in_x0 + 0x250));
    if (cVar2 != '\0') {
      EA::Thread::MutexParameters::MutexParameters
                ((MutexParameters *)(in_x0 + 0x250),false,(char *)in_x2);
    }
    in_x0[0xf9] = (ReceivedDataCallback)0x1;
    *(undefined4 *)(in_x0 + 0x110) = 0x3f800000;
    uVar4 = PVZ_T();
    *(undefined4 *)(in_x0 + 0x11c) = uVar4;
  }
  (**(code **)(**(long **)(in_x0 + 0x238) + 0x158))(*(long **)(in_x0 + 0x238),0);
  plVar3 = *(long **)(in_x0 + 0x240);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x158))(plVar3,0);
  }
  cVar2 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(in_x0 + 0x280));
  if (cVar2 != '\0') {
    GetCurrentWorldNameDisappearAnim();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              (in_x0,OnWorldNameDisappeared);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<UniverseWorldInfo,void(UniverseWorldInfo::*)(std::string_const&)>
              (aDStack_38,aCStack_50);
    EffectAnim_UIAnim::PlayOnceThen((EffectAnim_UIAnim *)(in_x0 + 0x280),asStack_58,aDStack_38);
    std::string::~string(asStack_58);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UniverseWorldInfo::ButtonDepress(int) */

void __thiscall UniverseWorldInfo::ButtonDepress(UniverseWorldInfo *this,int param_1)

{
  if (param_1 == 0) {
    CloseWorldInfo();
    return;
  }
  if (param_1 != 1) {
    return;
  }
  if (this[0x130] != (UniverseWorldInfo)0x0) {
    this[0xf6] = (UniverseWorldInfo)0x1;
    CloseWorldInfo();
    return;
  }
  if (*(int *)(this + 0x10c) <= *(int *)(this + 0x108)) {
    UnlockByStar(this);
    return;
  }
  UnlockByGem(this);
  return;
}


/* non-virtual thunk to UniverseWorldInfo::ButtonDepress(int) */

void __thiscall UniverseWorldInfo::ButtonDepress(UniverseWorldInfo *this,int param_1)

{
  ButtonDepress(this + -0xe0,param_1);
  return;
}


/* UniverseWorldInfo::wrapPurchase() */

void __thiscall UniverseWorldInfo::wrapPurchase(UniverseWorldInfo *this)

{
  if (this[0x130] != (UniverseWorldInfo)0x0) {
    this[0xf6] = (UniverseWorldInfo)0x1;
  }
  CloseWorldInfo();
  return;
}


/* UniverseWorldInfo::OnPurchaseConfirm(Sexy::RtWeakPtr<MagentoProductProps>) */

void UniverseWorldInfo::OnPurchaseConfirm(UniverseWorldInfo *param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  PurchaseBroker *this_00;
  long lVar1;
  
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PurchaseBroker *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_rightmost(this);
  PurchaseBroker::EndCartInstance(this_00);
  WorldMapUtils::UnlockStargate(*(MapEventItem **)(param_1 + 0x498),true);
  param_1[0xf7] = (UniverseWorldInfo)0x1;
  lVar1 = LawnApp::GetPVZ2Dialog(gLawnApp);
  if (lVar1 != 0) {
    param_1[0xf8] = (UniverseWorldInfo)0x1;
    return;
  }
  wrapPurchase(param_1);
  return;
}


/* UniverseWorldInfo::OnPurchaseClosed() */

void __thiscall UniverseWorldInfo::OnPurchaseClosed(UniverseWorldInfo *this)

{
  if (this[0xf8] == (UniverseWorldInfo)0x0) {
    return;
  }
  this[0xf8] = (UniverseWorldInfo)0x0;
  wrapPurchase(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseWorldInfo::OnWorldNameDisappeared(std::string const&) */

void UniverseWorldInfo::OnWorldNameDisappeared(string *param_1)

{
  char cVar1;
  char *in_x2;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(param_1 + 0x280));
  if (cVar1 != '\0') {
    EA::Thread::MutexParameters::MutexParameters((MutexParameters *)(param_1 + 0x280),false,in_x2);
  }
  param_1[0xf0] = (string)0x0;
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(param_1 + 0x2e0));
  if (cVar1 != '\0') {
    std::string::string(asStack_58,"easy_off");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)param_1,OnLevelDetailClosed);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<UniverseWorldInfo,void(UniverseWorldInfo::*)(std::string_const&)>
              (aDStack_38,aCStack_50);
    EffectAnim_UIAnim::PlayOnceThen((EffectAnim_UIAnim *)(param_1 + 0x2e0),asStack_58,aDStack_38);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseWorldInfo::OnLevelDetailClosed(std::string const&) */

void UniverseWorldInfo::OnLevelDetailClosed(string *param_1)

{
  EffectAnim_UIAnim *this;
  char cVar1;
  long *plVar2;
  code *in_x2;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  plVar2 = *(long **)(param_1 + 0x248);
  local_8 = ___stack_chk_guard;
  if (plVar2 != (long *)0x0) {
    in_x2 = *(code **)(*plVar2 + 0x158);
    (*in_x2)(plVar2,0);
  }
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(param_1 + 0x2e0));
  if (cVar1 != '\0') {
    EA::Thread::MutexParameters::MutexParameters
              ((MutexParameters *)(param_1 + 0x2e0),false,(char *)in_x2);
  }
  this = (EffectAnim_UIAnim *)(param_1 + 0x2b0);
  cVar1 = EffectAnim_UIAnim::IsValid(this);
  if (cVar1 != '\0') {
    EA::Thread::MutexParameters::MutexParameters((MutexParameters *)this,true,(char *)in_x2);
    std::string::string(asStack_58,"getreward_off");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)param_1,OnPlantDetailClosed);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<UniverseWorldInfo,void(UniverseWorldInfo::*)(std::string_const&)>
              (aDStack_38,aCStack_50);
    EffectAnim_UIAnim::PlayOnceThen(this,asStack_58,aDStack_38);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseWorldInfo::OnPlantDetailClosed(std::string const&) */

void UniverseWorldInfo::OnPlantDetailClosed(string *param_1)

{
  char cVar1;
  long *plVar2;
  char *in_x2;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(param_1 + 0x2b0));
  if (cVar1 != '\0') {
    EA::Thread::MutexParameters::MutexParameters((MutexParameters *)(param_1 + 0x2b0),false,in_x2);
  }
  plVar2 = *(long **)(param_1 + 0x248);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,0);
  }
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(param_1 + 0x250));
  if (cVar1 != '\0') {
    std::string::string(asStack_58,"backPlane_off");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)param_1,OnDialogBgClosed);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<UniverseWorldInfo,void(UniverseWorldInfo::*)(std::string_const&)>
              (aDStack_38,aCStack_50);
    EffectAnim_UIAnim::PlayOnceThen((EffectAnim_UIAnim *)(param_1 + 0x250),asStack_58,aDStack_38);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseWorldInfo::PlayTransitionEffect() */

void __thiscall UniverseWorldInfo::PlayTransitionEffect(UniverseWorldInfo *this)

{
  ResourceInfo *pRVar1;
  RtClass *pRVar2;
  PopAnimRig *pPVar3;
  string *psVar4;
  RtWeakPtr aRStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar4 = *(string **)(gLawnApp + 0x848);
  std::string::string(asStack_50,"POPANIM_EFFECTS_TIME_TUNNEL");
  Sexy::ResourceManager::GetResourceForStringIdT<Sexy::PopAnim>(psVar4,SUB81(asStack_50,0));
  std::string::~string(asStack_50);
  nop();
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_60);
  pRVar2 = (RtClass *)PopAnimRig::StaticGetClass();
  pPVar3 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable((PopAnim *)pRVar1,pRVar2);
  *(PopAnimRig **)(this + 0x490) = pPVar3;
  std::string::string(asStack_58,"animation");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,TransToWorld);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<UniverseWorldInfo,void(UniverseWorldInfo::*)(std::string_const&)>(aDStack_38,asStack_50)
  ;
  PopAnimRig::PlayAndStop(pPVar3,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseWorldInfo::RecocerUniverseMap() */

void __thiscall UniverseWorldInfo::RecocerUniverseMap(UniverseWorldInfo *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xf7] == (UniverseWorldInfo)0x0) {
    std::string::string(asStack_10,"");
    TransToWorld((string *)this);
    std::string::~string(asStack_10);
    nop();
  }
  else {
    PlayTransitionEffect(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UniverseWorldInfo::FadeOutWorldImage() */

void __thiscall UniverseWorldInfo::FadeOutWorldImage(UniverseWorldInfo *this)

{
  float fVar1;
  float fVar2;
  
  if (this[0xf9] == (UniverseWorldInfo)0x0) {
    return;
  }
  fVar1 = *(float *)(this + 0x11c);
  fVar2 = (float)PVZ_T();
  if (fVar1 + 0.3 <= fVar2) {
    this[0xf9] = (UniverseWorldInfo)0x0;
    *(undefined4 *)(this + 0x110) = 0;
    RecocerUniverseMap(this);
    return;
  }
  fVar2 = *(float *)(this + 0x11c);
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x110) = (fVar2 - fVar1) * 3.3333333 + 1.0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseWorldInfo::Draw(Sexy::Graphics*) */

void __thiscall UniverseWorldInfo::Draw(UniverseWorldInfo *this,Graphics *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ResourceInfo *pRVar10;
  undefined8 uVar11;
  LotteryResultProgressBar *pLVar12;
  Image *pIVar13;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  ulong uVar14;
  UniverseWorldInfo *this_01;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  iVar3 = FUN_044e61ac(500);
  iVar6 = *(int *)(this + 0x50);
  iVar4 = FUN_044e61ac(0x186);
  iVar7 = *(int *)(this + 0x54);
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x250));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x250),param_1);
  }
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x280));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x280),param_1);
  }
  iVar5 = FUN_044e61ac(0x159);
  iVar5 = iVar5 + (iVar6 - iVar3) / 2;
  iVar6 = FUN_044e61ac(0x41);
  iVar6 = iVar6 + (iVar7 - iVar4) / 2;
  if (this[0xf0] != (UniverseWorldInfo)0x0) {
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x200));
    if (bVar2) {
      pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x200));
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar10,iVar5,iVar6);
    }
  }
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x2e0));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x2e0),param_1);
  }
  if (this[0xf0] != (UniverseWorldInfo)0x0) {
    iVar3 = FUN_044e61ac(0xf);
    iVar3 = iVar3 + iVar5;
    iVar7 = FUN_044e61ac(0xb4);
    iVar7 = iVar7 + iVar6;
    pLVar12 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e910);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    iVar4 = FUN_044e61ac(2);
    if (this[0xf4] == (UniverseWorldInfo)0x0) {
      uVar14 = 0;
      pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e5a8);
      Sexy::Graphics::DrawImage(param_1,pIVar13,iVar3,iVar7);
      iVar5 = FUN_044e61ac(10);
      pLVar12 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e5a8);
      iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
      iVar9 = FUN_044e61ac(5);
      iVar3 = iVar3 + iVar5 + iVar8;
      do {
        this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e910;
        if ((ulong)(long)*(int *)(this + 0x100) <= uVar14) {
          this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e830;
        }
        pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
        uVar14 = uVar14 + 1;
        Sexy::Graphics::DrawImage(param_1,pIVar13,iVar3,iVar7 - iVar9);
        iVar3 = iVar3 + iVar6 + iVar4;
      } while (uVar14 != 5);
    }
    else {
      this_01 = this + 0x3a0;
      uVar14 = 0;
      pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e5f8);
      Sexy::Graphics::DrawImage(param_1,pIVar13,iVar3,iVar7);
      iVar5 = FUN_044e61ac(10);
      pLVar12 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e5f8);
      iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
      iVar3 = iVar3 + iVar5 + iVar8;
      iVar5 = FUN_044e61ac(5);
      do {
        if (uVar14 < (ulong)(long)*(int *)(this + 0x104)) {
          cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)this_01);
          if (cVar1 != '\0') {
            EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)this_01,param_1);
          }
        }
        else {
          pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e830);
          Sexy::Graphics::DrawImage(param_1,pIVar13,iVar3,iVar7 - iVar5);
        }
        uVar14 = uVar14 + 1;
        iVar3 = iVar3 + iVar6 + iVar4;
        this_01 = this_01 + 0x30;
      } while (uVar14 != 5);
    }
    if (this[0x130] != (UniverseWorldInfo)0x0) {
      cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x340));
      if (cVar1 != '\0') {
        EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x340),param_1);
      }
    }
  }
  if (this[0xf1] != (UniverseWorldInfo)0x0) {
    pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x208));
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar10,*(int *)(this + 0x140),*(int *)(this + 0x144),
               *(int *)(this + 0x148),*(int *)(this + 0x14c));
    pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x228));
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar10,*(int *)(this + 0x160),*(int *)(this + 0x164),
               *(int *)(this + 0x168),*(int *)(this + 0x16c));
    Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x170));
    pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x218));
    Draw9SliceImage(param_1,aIStack_18,pRVar10);
    pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x220));
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar10,*(int *)(this + 0x180),*(int *)(this + 0x184),
               *(int *)(this + 0x188),*(int *)(this + 0x18c));
    uVar11 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_CafeteriaBlack_26_Outline);
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,this + 0x1f0,this + 400,uVar11,aIStack_18,2,1);
    pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x210));
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar10,*(int *)(this + 0x150),*(int *)(this + 0x154),
               *(int *)(this + 0x158),*(int *)(this + 0x15c));
    if (this[0x130] != (UniverseWorldInfo)0x0) {
      cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x310));
      if (cVar1 != '\0') {
        EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x310),param_1);
      }
    }
  }
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x2b0));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x2b0),param_1);
  }
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseWorldInfo::Update() */

void UniverseWorldInfo::Update(void)

{
  char cVar1;
  UniverseWorldInfo *in_x0;
  long lVar2;
  wchar16 *pwVar3;
  LineBreakCategory *pLVar4;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  UniverseWorldInfo *this;
  float fVar5;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SolveMarks(in_x0);
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(in_x0 + 0x250));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(in_x0 + 0x250));
  }
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(in_x0 + 0x280));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(in_x0 + 0x280));
  }
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(in_x0 + 0x2e0));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(in_x0 + 0x2e0));
  }
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(in_x0 + 0x2b0));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(in_x0 + 0x2b0));
  }
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(in_x0 + 0x310));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(in_x0 + 0x310));
  }
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(in_x0 + 0x340));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(in_x0 + 0x340));
  }
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(in_x0 + 0x370));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(in_x0 + 0x370));
  }
  this = in_x0 + 0x3a0;
  do {
    cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)this);
    if (cVar1 != '\0') {
      EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)this);
    }
    this = this + 0x30;
  } while (this != in_x0 + 0x490);
  UpdateTransitionEffect(in_x0);
  if (in_x0[0xf5] != (UniverseWorldInfo)0x0) {
    CalcWorldPosAndScale();
  }
  if (in_x0[0xf9] != (UniverseWorldInfo)0x0) {
    FadeOutWorldImage(in_x0);
  }
  lVar2 = Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  if (lVar2 != 0) {
    pwVar3 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    pLVar4 = aLStack_18;
    std::string::string(asStack_10,"AutoTestUnlockLevel");
    cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar3,(wchar16 *)asStack_10,pLVar4,in_x3,in_x4);
    std::string::~string(asStack_10);
    nop();
    if (cVar1 != '\0') {
      fVar5 = (float)PVZ_T();
      if (fVar5 - *(float *)(in_x0 + 0x118) <= 3.0) {
        DAT_06b0e800 = '\0';
      }
      else if (DAT_06b0e800 == '\0') {
        DAT_06b0e800 = '\x01';
        MessageRouter::Post((_func_void *)gMessageRouter);
      }
    }
  }
  UIFutureGiftShop::Update((UIFutureGiftShop *)in_x0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseWorldInfo::DoPurchaseSuccess(Sexy::RtWeakPtr<MagentoProductProps>) */

void __thiscall
UniverseWorldInfo::DoPurchaseSuccess(UniverseWorldInfo *this,RtMixedPtrBase *param_2)

{
  undefined *puVar1;
  char cVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  string asStack_10 [8];
  long local_8;
  
  puVar1 = gMessageRouter;
  uVar6 = *(undefined8 *)(this + 0x498);
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10,this + 0x138);
  MessageRouter::
  Post<MapEventItem_const*,std::string_const&,int,MapEventItem_const*,std::string,bool>
            ((MessageRouter *)puVar1,Message::GateUnLock,uVar6,asStack_10,1);
  std::string::~string(asStack_10);
  puVar1 = gMessageRouter;
  FUN_05475d88(asStack_10,this + 0x138);
  MessageRouter::Post<int,std::string_const&,int,int,std::string,int>
            ((MessageRouter *)puVar1,Message::WorldMapUnLock,0x3a,asStack_10,0);
  std::string::~string(asStack_10);
  cVar2 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar2 != '\0') {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    if (pPVar3 != (PlayerInfo *)0x0) {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      PlayerInfo::SetWorldMapEventStatus(pPVar3,lVar4 + 0x80,lVar5 + 0x80,3,1);
    }
    this[0x130] = (UniverseWorldInfo)0x1;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)param_2);
    OnPurchaseConfirm(this,asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)asStack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x4a0),(RtWeakPtr *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseWorldInfo::OnUnlockedByGemCallBack(bool const&) */

void __thiscall UniverseWorldInfo::OnUnlockedByGemCallBack(UniverseWorldInfo *this,bool *param_1)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*param_1 == false) {
    LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x4a0),(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  }
  else {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_10,(RtWeakPtrBase *)(this + 0x4a0));
    DoPurchaseSuccess(this,(RtWeakPtr<Sexy::SoundResource> *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseWorldInfo::StarUnlockConfirm() */

void __thiscall UniverseWorldInfo::StarUnlockConfirm(UniverseWorldInfo *this)

{
  undefined *puVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  PurchaseBroker *this_01;
  undefined8 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this[0xf7] = (UniverseWorldInfo)0x1;
  this[0x130] = (UniverseWorldInfo)0x1;
  WorldMapUtils::UnlockStargate(*(MapEventItem **)(this + 0x498),false);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PurchaseBroker *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_rightmost(this_00);
  PurchaseBroker::EndCartInstance(this_01);
  wrapPurchase(this);
  puVar1 = gMessageRouter;
  FUN_05475d88(asStack_10,this + 0x138);
  MessageRouter::Post<int,std::string_const&,int,int,std::string,int>
            ((MessageRouter *)puVar1,Message::WorldMapUnLock,0,asStack_10,0);
  std::string::~string(asStack_10);
  puVar1 = gMessageRouter;
  uVar2 = *(undefined8 *)(this + 0x498);
  FUN_05475d88(asStack_10,this + 0x138);
  MessageRouter::
  Post<MapEventItem_const*,std::string_const&,int,MapEventItem_const*,std::string,int>
            ((MessageRouter *)puVar1,Message::GateUnLock,uVar2,asStack_10,0);
  std::string::~string(asStack_10);
  MessageRouter::Post<int,int,TutorialType,TutorialEventNew>
            ((MessageRouter *)gMessageRouter,Message::Toturi,0,0x1b);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseWorldInfo::InitView() */

void __thiscall UniverseWorldInfo::InitView(UniverseWorldInfo *this)

{
  string *this_00;
  EffectAnim_UIAnim *pEVar1;
  UniverseWorldInfo *pUVar2;
  ButtonListener *pBVar3;
  RtWeakPtr<PowerPropertySheet> *this_01;
  wstring *pwVar4;
  undefined *this_02;
  LawnApp *pLVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  UniverseWorldInfo UVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  WorldMapList *this_03;
  undefined8 uVar29;
  PVZ2UIScrollingWidget *this_04;
  FilesystemSaveGameContext *this_05;
  ProfileMgr *pPVar30;
  PlayerInfo *pPVar31;
  NameMapperBase *this_06;
  undefined8 uVar32;
  PlayerInfo *pPVar33;
  StarConvertConfig *pSVar34;
  PlantScrollPanel *this_07;
  LotteryResultProgressBar *pLVar35;
  SalesProgressBar *pSVar36;
  UIWidget *this_08;
  undefined4 *puVar37;
  PVZ2UIButton *pPVar38;
  WorldDataManager *this_09;
  Image *pIVar39;
  UIWidgetImage *this_10;
  string *extraout_x1;
  string *psVar40;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  string *extraout_x1_03;
  string *extraout_x1_04;
  long lVar41;
  char *pcVar42;
  FastCurve *pFVar43;
  long *plVar44;
  UniverseWorldInfo *this_11;
  RtWeakPtr<Sexy::ResourceInfo> *this_12;
  code *pcVar45;
  float fVar46;
  undefined1 auVar47 [16];
  RtWeakPtr<Sexy::ResourceInfo> *local_140;
  RtWeakPtr<Sexy::ResourceInfo> *local_138;
  RtWeakPtr<Sexy::ResourceInfo> *local_130;
  string asStack_118 [8];
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  Insets aIStack_e0 [16];
  int local_d0;
  int local_cc;
  string asStack_c0 [24];
  Delegate0 aDStack_a8 [48];
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_40;
  undefined8 local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (string *)(this + 0x138);
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  iVar10 = FUN_044e61ac(500);
  iVar11 = FUN_044e61ac(0x186);
  iVar10 = (*(int *)(this + 0x50) - iVar10) / 2;
  iVar11 = (*(int *)(this + 0x54) - iVar11) / 2;
  this_03 = (WorldMapList *)LawnApp::GetWorldMapList(gLawnApp);
  auVar47 = WorldMapList::GetMapListNodeByName(this_03,this_00);
  *(long *)(this + 0xe8) = auVar47._0_8_;
  Sexy::StringToUpper((Sexy *)this_00,auVar47._8_8_);
  uVar29 = FUN_0547429c(asStack_c0);
  Sexy::StrFormat("IMAGE_UI_UNIVERSE_WORLDS_%s",(string *)&local_78,uVar29);
  GetImageByNameWithUIFallback((string *)&local_78);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1f8),(RtWeakPtr *)&local_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  std::string::~string((string *)&local_78);
  std::string::~string(asStack_c0);
  Sexy::StringToUpper((Sexy *)this_00,extraout_x1);
  uVar29 = FUN_0547429c(asStack_c0);
  Sexy::StrFormat("IMAGE_UI_UNIVERSEWORLDINFO_WORLD_PREVIEW_%s",(string *)&local_78,uVar29);
  GetImageByNameWithUIFallback((string *)&local_78);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x200),(RtWeakPtr *)&local_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  std::string::~string((string *)&local_78);
  std::string::~string(asStack_c0);
  iVar12 = FUN_044e61ac(0x28);
  iVar13 = FUN_044e61ac(0x87);
  iVar14 = FUN_044e61ac(0x118);
  iVar15 = FUN_044e61ac(0xa0);
  Sexy::Insets::Insets(aIStack_e0,iVar12 + iVar10,iVar13 + iVar11,iVar14,iVar15);
  this_04 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_04,(ScrollWidgetListener *)(this + 0xd8));
  lVar41 = *(long *)this_04;
  *(PVZ2UIScrollingWidget **)(this + 0x248) = this_04;
  (**(code **)(lVar41 + 0x1a0))(this_04,aIStack_e0);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x248),2);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x248));
  (**(code **)(**(long **)(this + 0x248) + 0x158))(*(long **)(this + 0x248),0);
  Set8BytesTo0(asStack_118);
  this_05 = (FilesystemSaveGameContext *)WorldMapUtils::FindZombossNodeInWorld(this_00);
  if (this_05 != (FilesystemSaveGameContext *)0x0) {
    uVar29 = Sexy::FilesystemSaveGameContext::GetBuffer(this_05);
    thunk_FUN_05475e00(asStack_118,uVar29);
  }
  bVar6 = std::operator!=("",asStack_118);
  if (bVar6) {
    pPVar30 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar31 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar30);
    cVar8 = ProfileUtils::HasCompletedLevel(asStack_118,false,pPVar31);
    if (cVar8 != '\0') {
      this[0xfb] = (UniverseWorldInfo)0x1;
    }
  }
  pPVar30 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar31 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar30);
  bVar6 = true;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_c0);
  this[0xfc] = (UniverseWorldInfo)0x1;
  LevelEditorCardPlantInterface::LevelEditorCardPlantInterface
            ((LevelEditorCardPlantInterface *)&local_d0);
  while (bVar7 = ObjectTypeDirectoryIterator::operator_cast_to_bool
                           ((ObjectTypeDirectoryIterator *)&local_d0), bVar7) {
    ObjectTypeDirectoryIterator<PlantType>::operator*
              ((ObjectTypeDirectoryIterator<PlantType> *)&local_d0);
    cVar8 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)&local_78);
    if ((cVar8 == '\0') &&
       (lVar41 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_78),
       *(char *)(lVar41 + 0x30) != '\0')) {
      lVar41 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
      FUN_05475d88((RtWeakPtr<Sexy::ResourceInfo> *)&local_40,lVar41 + 8);
      this_06 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
      cVar8 = NameMapperBase::ContainsName(this_06,(string *)&local_40);
      if (cVar8 != '\0') {
        lVar41 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
        cVar8 = std::operator==((string *)(lVar41 + 0x38),this_00);
        if (cVar8 != '\0') {
          if (((bVar6) && (pPVar31 != (PlayerInfo *)0x0)) &&
             (cVar8 = PlayerInfo::GetIsPlantUnlocked(pPVar31,(string *)&local_40), cVar8 == '\0')) {
            this[0xfc] = (UniverseWorldInfo)0x0;
            bVar6 = false;
          }
          std::vector<std::string,std::allocator<std::string>>::push_back
                    ((vector<std::string,std::allocator<std::string>> *)asStack_c0,
                     (string *)&local_40);
        }
      }
      std::string::~string((string *)&local_40);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
    ObjectTypeDirectoryIterator<PlantType>::operator++
              ((ObjectTypeDirectoryIterator<PlantType> *)&local_d0);
  }
  uVar29 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)asStack_c0);
  uVar32 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)asStack_c0);
  std::
  sort<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,bool(*)(std::string_const&,std::string_const&)>
            (uVar29,uVar32,sortByRare);
  if (((gLawnApp == (LawnApp *)0x0) || (lVar41 = LawnApp::GetWorldMap(gLawnApp), lVar41 == 0)) ||
     (lVar41 = FUN_044e60d0(*(undefined8 *)(lVar41 + 0x2b0)), lVar41 == 0)) {
LAB_044eb048:
    if (this[0x130] != (UniverseWorldInfo)0x0) goto LAB_044eafc0;
  }
  else {
    *(long *)(this + 0x128) = lVar41;
    pPVar30 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar33 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar30);
    iVar12 = ProfileUtils::UnlockedWorldCount(pPVar33);
    lVar41 = UniverseMap::GetButtonForWorld(*(UniverseMap **)(this + 0x128),this_00);
    UVar9 = (UniverseWorldInfo)FUN_044e6610(*(undefined4 *)(lVar41 + 0x1a8));
    this[0x130] = UVar9;
    if (UVar9 == (UniverseWorldInfo)0x0) {
      pSVar34 = (StarConvertConfig *)LawnApp::GetStarConvertConfig(gLawnApp);
      std::string::string((string *)&local_40,"WorldUnlock");
      uVar28 = StarConvertConfig::GetStarRequire
                         (pSVar34,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40,iVar12 + 1);
      *(undefined4 *)(this + 0x10c) = uVar28;
      std::string::~string((string *)&local_40);
      nop();
      goto LAB_044eb048;
    }
LAB_044eafc0:
    bVar6 = std::operator!=("egypt",this_00);
    if (bVar6) {
      this[0xf2] = (UniverseWorldInfo)0x1;
      *(undefined4 *)(this + 0x100) = *(undefined4 *)(*(long *)(this + 0xe8) + 0x34);
      if (pPVar31 != (PlayerInfo *)0x0) {
        *(undefined4 *)(this + 0x104) = *(undefined4 *)(*(long *)(this + 0xe8) + 0x38);
      }
      goto LAB_044eb060;
    }
  }
  this[0xf2] = (UniverseWorldInfo)0x0;
  *(undefined4 *)(this + 0x100) = *(undefined4 *)(*(long *)(this + 0xe8) + 0x34);
LAB_044eb060:
  pEVar1 = (EffectAnim_UIAnim *)(this + 0x250);
  this_07 = ::operator_new(0xf0);
  PlantScrollPanel::PlantScrollPanel(this_07,(TRect *)aIStack_e0,(vector *)asStack_c0);
  (**(code **)(**(long **)(this + 0x248) + 0x60))(*(long **)(this + 0x248),this_07);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_110,(float)*(int *)(this + 0x50) * 0.5,
             (float)*(int *)(this + 0x54) * 0.5);
  std::string::string((string *)&local_40,"POPANIM_EFFECTS_UNIVERSE_DIALOG_BG");
  pcVar42 = (char *)0x1;
  EffectAnim_UIAnim::InitUIAnim
            (0x3f800000,local_110,local_10c,pEVar1,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  cVar8 = EffectAnim_UIAnim::IsValid(pEVar1);
  if (cVar8 != '\0') {
    EA::Thread::MutexParameters::MutexParameters((MutexParameters *)pEVar1,false,pcVar42);
  }
  pEVar1 = (EffectAnim_UIAnim *)(this + 0x2e0);
  iVar12 = FUN_044e61ac(0x159);
  iVar13 = FUN_044e61ac(0x41);
  pLVar35 = (LotteryResultProgressBar *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x200));
  iVar14 = LotteryResultProgressBar::GetCurrentLevel(pLVar35);
  iVar15 = FUN_044e61ac(0x19);
  iVar16 = FUN_044e61ac(5);
  iVar17 = FUN_044e61ac(0x14);
  iVar18 = FUN_044e61ac(0x2a);
  Sexy::Insets::Insets
            ((Insets *)&local_40,((iVar14 + iVar12 + iVar10) - iVar15) - iVar16,
             iVar17 + iVar13 + iVar11,iVar15,iVar18);
  *(undefined8 *)(this + 0x1b0) = local_40;
  *(undefined8 *)(this + 0x1b8) = local_38;
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_108,(float)(iVar12 + iVar10),(float)(iVar13 + iVar11));
  std::string::string((string *)&local_40,"POPANIM_EFFECTS_UNIVERSE_LEVEL_DETAIL_BG");
  pcVar42 = (char *)0x0;
  EffectAnim_UIAnim::InitUIAnim
            (0x3f800000,local_108,local_104,pEVar1,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  cVar8 = EffectAnim_UIAnim::IsValid(pEVar1);
  if (cVar8 != '\0') {
    EA::Thread::MutexParameters::MutexParameters((MutexParameters *)pEVar1,false,pcVar42);
  }
  pEVar1 = (EffectAnim_UIAnim *)(this + 0x280);
  iVar12 = FUN_044e61ac(0x96);
  iVar13 = FUN_044e61ac(0x28);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_100,(float)(iVar12 + iVar10),(float)(iVar13 + iVar11));
  std::string::string((string *)&local_40,"POPANIM_EFFECTS_UNIVERSE_WORLD_NAME");
  pcVar42 = (char *)0x1;
  EffectAnim_UIAnim::InitUIAnim
            (0x3f800000,local_100,local_fc,pEVar1,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  cVar8 = EffectAnim_UIAnim::IsValid(pEVar1);
  if (cVar8 != '\0') {
    EA::Thread::MutexParameters::MutexParameters((MutexParameters *)pEVar1,false,pcVar42);
  }
  pEVar1 = (EffectAnim_UIAnim *)(this + 0x2b0);
  iVar12 = FUN_044e61ac(0x1e);
  iVar13 = FUN_044e61ac(0x78);
  iVar14 = FUN_044e61ac(300);
  iVar15 = FUN_044e61ac(0xbe);
  Sexy::Insets::Insets((Insets *)&local_d0,iVar12 + iVar10,iVar13 + iVar11,iVar14,iVar15);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_f8,(float)local_d0,(float)local_cc);
  std::string::string((string *)&local_40,"POPANIM_EFFECTS_UNIVERSE_SCROLL_BG");
  pcVar42 = (char *)0x0;
  EffectAnim_UIAnim::InitUIAnim
            (0x3f800000,local_f8,local_f4,pEVar1,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  cVar8 = EffectAnim_UIAnim::IsValid(pEVar1);
  if (cVar8 != '\0') {
    EA::Thread::MutexParameters::MutexParameters((MutexParameters *)pEVar1,false,pcVar42);
  }
  iVar12 = FUN_044e61ac(200);
  iVar13 = FUN_044e61ac(0x1e);
  iVar14 = FUN_044e61ac(0x19);
  iVar15 = FUN_044e61ac(0x2a);
  Sexy::Insets::Insets((Insets *)&local_40,local_d0 + iVar12,local_cc - iVar13,iVar14,iVar15);
  *(undefined8 *)(this + 0x1a0) = local_40;
  *(undefined8 *)(this + 0x1a8) = local_38;
  iVar14 = FUN_044e61ac(500);
  iVar15 = FUN_044e61ac(0x159);
  iVar12 = *(int *)(this + 0x50);
  iVar16 = FUN_044e61ac(0xf);
  pLVar35 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e5f8);
  iVar17 = LotteryResultProgressBar::GetCurrentLevel(pLVar35);
  iVar18 = FUN_044e61ac(10);
  iVar19 = FUN_044e61ac(0x186);
  iVar20 = FUN_044e61ac(0x41);
  iVar13 = *(int *)(this + 0x54);
  iVar21 = FUN_044e61ac(0xb4);
  iVar22 = FUN_044e61ac(5);
  pLVar35 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e910);
  iVar23 = LotteryResultProgressBar::GetCurrentLevel(pLVar35);
  iVar24 = FUN_044e61ac(2);
  this_11 = this + 0x3a0;
  fVar46 = (float)(iVar15 + (iVar12 - iVar14) / 2 + iVar16 + iVar17 + iVar18);
  do {
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_78,fVar46,
               (float)((iVar20 + (iVar13 - iVar19) / 2 + iVar21) - iVar22));
    std::string::string((string *)&local_40,"POPANIM_EFFECTS_UNIVERSE_HARD_DIFFICULTY");
    EffectAnim_UIAnim::InitUIAnim
              (0x3f800000,local_78,local_74,this_11,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40,0);
    std::string::~string((string *)&local_40);
    nop();
    pFVar43 = (FastCurve *)&local_e8;
    std::string::string((string *)&local_40,"idle");
    EffectAnim_UIAnim::PlayLoop
              ((EffectAnim_UIAnim *)this_11,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    std::string::~string((string *)&local_40);
    nop();
    pUVar2 = this_11 + 0x30;
    EA::Thread::MutexParameters::MutexParameters((MutexParameters *)this_11,false,(char *)pFVar43);
    this_11 = pUVar2;
    fVar46 = fVar46 + (float)(iVar23 + iVar24);
  } while (pUVar2 != this + 0x490);
  uVar25 = FUN_044e61ac(0xf);
  pLVar35 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e760);
  uVar26 = LotteryResultProgressBar::GetCurrentLevel(pLVar35);
  pSVar36 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e760);
  uVar27 = SalesProgressBar::GetCurrentLevel(pSVar36);
  std::string::string((string *)&local_40,"UIWorldMapBackButton");
  this_08 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  uVar28 = uVar25;
  if (this_08 != (UIWidget *)0x0) {
    puVar37 = (undefined4 *)UIWidget::GetRect(this_08);
    uVar28 = *puVar37;
    lVar41 = UIWidget::GetRect(this_08);
    uVar25 = *(undefined4 *)(lVar41 + 4);
  }
  pBVar3 = (ButtonListener *)(this + 0xe0);
  this_01 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x228);
  FUN_05478178((string *)&local_78,&DAT_056f11a8,(FastCurve *)&local_e8);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar38 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar38,0,pBVar3,(wstring *)&local_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x238) = pPVar38;
  FUN_05476c50((string *)&local_78);
  nop();
  pPVar38 = *(PVZ2UIButton **)(this + 0x238);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_78,&DAT_06b0e760,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b0e4b0,3);
  PVZ2UIButton::SetDialogStates(pPVar38,(PVZ2UIImage *)&local_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0x238) + 0x198))
            (*(long **)(this + 0x238),uVar28,uVar25,uVar26,uVar27);
  (**(code **)(**(long **)(this + 0x238) + 0x158))(*(long **)(this + 0x238),0);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x238));
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b0e8b0);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_01,(RtWeakPtr *)&local_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  iVar12 = FUN_044e61ac(0x14a);
  iVar12 = iVar12 + iVar11;
  pLVar35 = (LotteryResultProgressBar *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  iVar11 = LotteryResultProgressBar::GetCurrentLevel(pLVar35);
  pLVar35 = (LotteryResultProgressBar *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  iVar13 = LotteryResultProgressBar::GetCurrentLevel(pLVar35);
  iVar14 = FUN_044e61ac(10);
  iVar13 = (int)((double)iVar13 * 0.8 - (double)iVar14);
  if (this[0x130] == (UniverseWorldInfo)0x0) {
    iVar14 = FUN_044e61ac(0x28);
    if (pPVar31 != (PlayerInfo *)0x0) {
      uVar28 = PlayerInfo::GetNumStars((int)pPVar31);
      *(undefined4 *)(this + 0x108) = uVar28;
    }
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b0e7d8);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x208),(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b0e788);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x210),(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b0e5d0);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x218),(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b0e4d8);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x220),(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    if (*(int *)(this + 0x108) < *(int *)(this + 0x10c)) {
      this[0x131] = (UniverseWorldInfo)0x1;
      fVar46 = ((float)iVar13 * (float)*(int *)(this + 0x108)) / (float)*(int *)(this + 0x10c);
      TodStringTranslate(L"[WORLDINFO_UNLOCK_BY_GEM]");
      TodReplaceNumberString((wstring *)&local_40,L"{GEMS}",0x3a);
      FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      Sexy::Color::Color((Color *)&local_40,1);
      pPVar38 = ::operator_new(0x300);
      PVZ2UIButton::PVZ2UIButton(pPVar38,1,pBVar3,(wstring *)&local_78,(Color *)&local_40);
      *(PVZ2UIButton **)(this + 0x230) = pPVar38;
      FUN_05476c50((string *)&local_78);
    }
    else {
      this[0x131] = (UniverseWorldInfo)0x0;
      fVar46 = (float)iVar13;
      FUN_05478178((string *)&local_78,L"[WORLDINFO_UNLOCK_BY_STAR]",(FastCurve *)&local_e8);
      Sexy::Color::Color((Color *)&local_40,1);
      pPVar38 = ::operator_new(0x300);
      PVZ2UIButton::PVZ2UIButton(pPVar38,1,pBVar3,(wstring *)&local_78,(Color *)&local_40);
      *(PVZ2UIButton **)(this + 0x230) = pPVar38;
      FUN_05476c50((string *)&local_78);
      nop();
    }
    iVar13 = (int)fVar46;
    pwVar4 = (wstring *)(this + 0x1f0);
    TodStringTranslate(L"[WORLDINFO_UNLOCK_PROGRESS_DES_PERCENT]");
    TodReplaceNumberString((wstring *)&local_78,L"{STAR}",*(int *)(this + 0x108));
    FUN_054766c8(pwVar4,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    FUN_05476c50((string *)&local_78);
    TodReplaceNumberString(pwVar4,L"{STARREQ}",*(int *)(this + 0x10c));
    FUN_054766c8(pwVar4,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    this_09 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    uVar29 = WorldDataManager::FindEvent(this_09,(string *)(*(long *)(this + 0xe8) + 8));
    *(undefined8 *)(this + 0x498) = uVar29;
  }
  else {
    iVar14 = FUN_044e61ac(0x14);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b0e6a8);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x208),(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b0e500);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x210),(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b0e720);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x218),(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b0e620);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x220),(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    if (pPVar31 == (PlayerInfo *)0x0) {
      iVar13 = 0;
    }
    else {
      iVar15 = PlayerInfo::GetStarsCompletedInWorld((string *)pPVar31,SUB81(this_00,0));
      iVar16 = PlayerInfo::GetStarsAvailableInWorld(pPVar31,this_00);
      if (iVar15 < iVar16) {
        fVar46 = ((float)iVar15 * (float)iVar13) / (float)iVar16;
      }
      else {
        fVar46 = (float)iVar13;
        this[0xfa] = (UniverseWorldInfo)0x1;
      }
      iVar13 = (int)fVar46;
      pwVar4 = (wstring *)(this + 0x1f0);
      TodStringTranslate(L"[WORLDINFO_UNLOCK_PROGRESS_DES_PERCENT]");
      TodReplaceNumberString((wstring *)&local_78,L"{STAR}",iVar15);
      FUN_054766c8(pwVar4,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      FUN_05476c50((string *)&local_78);
      TodReplaceNumberString(pwVar4,L"{STARREQ}",iVar16);
      FUN_054766c8(pwVar4,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    }
    this[0x131] = (UniverseWorldInfo)0x0;
    FUN_05478178((string *)&local_78,L"[WORLDINFO_GOTO]",(FastCurve *)&local_e8);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar38 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar38,1,pBVar3,(wstring *)&local_78,(Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x230) = pPVar38;
    FUN_05476c50((string *)&local_78);
    nop();
  }
  local_130 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x210);
  local_138 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x218);
  local_140 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x208);
  this_12 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x220);
  pLVar35 = (LotteryResultProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(local_140);
  iVar15 = LotteryResultProgressBar::GetCurrentLevel(pLVar35);
  pSVar36 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(local_140);
  iVar16 = SalesProgressBar::GetCurrentLevel(pSVar36);
  Sexy::Insets::Insets((Insets *)&local_40,iVar14 + iVar10,iVar12,iVar15,iVar16);
  *(undefined8 *)(this + 0x148) = local_38;
  iVar10 = *(int *)(this + 0x148);
  *(undefined8 *)(this + 0x140) = local_40;
  iVar16 = (int)local_40;
  pLVar35 = (LotteryResultProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(local_130);
  iVar14 = LotteryResultProgressBar::GetCurrentLevel(pLVar35);
  pSVar36 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(local_130);
  iVar15 = SalesProgressBar::GetCurrentLevel(pSVar36);
  Sexy::Insets::Insets((Insets *)&local_40,iVar10 + iVar16,iVar12,iVar14,iVar15);
  *(undefined8 *)(this + 0x158) = local_38;
  *(undefined8 *)(this + 0x150) = local_40;
  iVar10 = *(int *)(this + 0x158);
  iVar17 = (int)local_40;
  iVar14 = FUN_044e61ac(0xf);
  iVar15 = FUN_044e61ac(4);
  pSVar36 = (SalesProgressBar *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  iVar16 = SalesProgressBar::GetCurrentLevel(pSVar36);
  Sexy::Insets::Insets
            ((Insets *)&local_40,(iVar10 + iVar17) - iVar14,iVar15 + iVar12,
             (int)((double)iVar11 * 0.8),iVar16);
  iVar10 = *(int *)(this + 0x150);
  iVar14 = *(int *)(this + 0x158);
  *(undefined8 *)(this + 0x160) = local_40;
  *(undefined8 *)(this + 0x168) = local_38;
  iVar15 = FUN_044e61ac(5);
  iVar16 = FUN_044e61ac(4);
  pSVar36 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(local_138);
  iVar17 = SalesProgressBar::GetCurrentLevel(pSVar36);
  Sexy::Insets::Insets((Insets *)&local_40,(iVar10 + iVar14) - iVar15,iVar16 + iVar12,iVar13,iVar17)
  ;
  iVar10 = *(int *)(this + 0x150);
  iVar13 = *(int *)(this + 0x158);
  *(undefined8 *)(this + 0x170) = local_40;
  *(undefined8 *)(this + 0x178) = local_38;
  iVar14 = FUN_044e61ac(0xf);
  iVar15 = FUN_044e61ac(4);
  Sexy::Insets::Insets
            ((Insets *)&local_40,(iVar10 + iVar13) - iVar14,iVar15 + iVar12,
             (int)((double)iVar11 * 0.8),*(int *)(this + 0x17c));
  iVar10 = *(int *)(this + 0x170);
  iVar11 = *(int *)(this + 0x178);
  *(undefined8 *)(this + 400) = local_40;
  *(undefined8 *)(this + 0x198) = local_38;
  pLVar35 = (LotteryResultProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_12);
  iVar14 = LotteryResultProgressBar::GetCurrentLevel(pLVar35);
  iVar12 = *(int *)(this + 0x17c);
  iVar13 = *(int *)(this + 0x174);
  pSVar36 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_12);
  iVar15 = SalesProgressBar::GetCurrentLevel(pSVar36);
  pLVar35 = (LotteryResultProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_12);
  iVar16 = LotteryResultProgressBar::GetCurrentLevel(pLVar35);
  pSVar36 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_12);
  iVar17 = SalesProgressBar::GetCurrentLevel(pSVar36);
  Sexy::Insets::Insets
            ((Insets *)&local_40,(iVar10 + iVar11) - iVar14 / 2,(iVar13 + iVar12 / 2) - iVar15 / 2,
             iVar16,iVar17);
  iVar10 = *(int *)(this + 0x160);
  iVar11 = *(int *)(this + 0x168);
  *(undefined8 *)(this + 0x180) = local_40;
  *(undefined8 *)(this + 0x188) = local_38;
  iVar14 = FUN_044e61ac(0x19);
  iVar15 = FUN_044e61ac(5);
  iVar12 = *(int *)(this + 0x16c);
  iVar13 = *(int *)(this + 0x164);
  iVar16 = FUN_044e61ac(0x2a);
  Sexy::Insets::Insets
            ((Insets *)&local_40,((iVar10 + iVar11) - iVar14 / 2) + iVar15,
             ((iVar13 + iVar12 / 2) - iVar16 / 2) - iVar15,iVar14,iVar16);
  *(undefined8 *)(this + 0x1c0) = local_40;
  *(undefined8 *)(this + 0x1c8) = local_38;
  if (this[0x130] == (UniverseWorldInfo)0x0) {
    psVar40 = (string *)0x0;
  }
  else {
    pEVar1 = (EffectAnim_UIAnim *)(this + 0x310);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_f0,
               (float)*(int *)(this + 0x1c0) + (float)*(int *)(this + 0x1c8) * 0.5,
               (float)*(int *)(this + 0x1c4) + (float)*(int *)(this + 0x1cc) * 0.5);
    std::string::string((string *)&local_40,"POPANIM_EFFECTS_UNIVERSE_WORLD_CUP");
    EffectAnim_UIAnim::InitUIAnim
              (0x3f408312,local_f0,local_ec,pEVar1,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40,1);
    std::string::~string((string *)&local_40);
    nop();
    cVar8 = EffectAnim_UIAnim::IsValid(pEVar1);
    if (cVar8 != '\0') {
      FUN_05475d88((RtWeakPtr<Sexy::ResourceInfo> *)&local_40,this_00);
      cVar8 = PlayerInfo::IsStarCupUnlocked(pPVar31,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      std::string::~string((string *)&local_40);
      if (cVar8 == '\0') {
        pcVar42 = "starcup_empty";
      }
      else {
        pcVar42 = "starcup_on";
      }
      std::string::string((string *)&local_40,pcVar42);
      EffectAnim_UIAnim::PlayLoop(pEVar1,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      std::string::~string((string *)&local_40);
      nop();
    }
    pEVar1 = (EffectAnim_UIAnim *)(this + 0x340);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_e8,
               (float)*(int *)(this + 0x1b0) + (float)*(int *)(this + 0x1b8) * 0.5,
               (float)*(int *)(this + 0x1b4) + (float)*(int *)(this + 0x1bc) * 0.5);
    std::string::string((string *)&local_40,"POPANIM_EFFECTS_UNIVERSE_WORLD_CUP");
    EffectAnim_UIAnim::InitUIAnim
              (0x3f408312,local_e8,local_e4,pEVar1,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40,1);
    std::string::~string((string *)&local_40);
    nop();
    cVar8 = EffectAnim_UIAnim::IsValid(pEVar1);
    if (cVar8 != '\0') {
      FUN_05475d88((RtWeakPtr<Sexy::ResourceInfo> *)&local_40,this_00);
      cVar8 = PlayerInfo::IsBossCupUnlocked(pPVar31,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      std::string::~string((string *)&local_40);
      if (cVar8 == '\0') {
        pcVar42 = "zombiecup_empty";
      }
      else {
        pcVar42 = "zombiecup_on";
      }
      std::string::string((string *)&local_40,pcVar42);
      EffectAnim_UIAnim::PlayLoop(pEVar1,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      std::string::~string((string *)&local_40);
      nop();
    }
    pEVar1 = (EffectAnim_UIAnim *)(this + 0x370);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_78,
               (float)*(int *)(this + 0x1a0) + (float)*(int *)(this + 0x1a8) * 0.5,
               (float)*(int *)(this + 0x1a4) + (float)*(int *)(this + 0x1ac) * 0.5);
    std::string::string((string *)&local_40,"POPANIM_EFFECTS_UNIVERSE_WORLD_CUP");
    EffectAnim_UIAnim::InitUIAnim
              (0x3f408312,local_78,local_74,pEVar1,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40,1);
    std::string::~string((string *)&local_40);
    nop();
    cVar8 = EffectAnim_UIAnim::IsValid(pEVar1);
    psVar40 = extraout_x1_03;
    if (cVar8 != '\0') {
      FUN_05475d88((RtWeakPtr<Sexy::ResourceInfo> *)&local_40,this_00);
      cVar8 = PlayerInfo::IsPlantCupUnlocked(pPVar31,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      std::string::~string((string *)&local_40);
      if (cVar8 == '\0') {
        pcVar42 = "plantcup_empty";
      }
      else {
        pcVar42 = "plantcup_on";
      }
      std::string::string((string *)&local_40,pcVar42);
      EffectAnim_UIAnim::PlayLoop(pEVar1,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      std::string::~string((string *)&local_40);
      nop();
      psVar40 = extraout_x1_04;
    }
  }
  plVar44 = *(long **)(this + 0x230);
  if (plVar44 != (long *)0x0) {
    pcVar45 = *(code **)(*plVar44 + 800);
    uVar29 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_CafeteriaBlack_22_ThickOutline);
    (*pcVar45)(plVar44,uVar29);
    plVar44 = *(long **)(this + 0x230);
    pcVar45 = *(code **)(*plVar44 + 0x198);
    iVar11 = FUN_044e61ac(0x96);
    iVar10 = *(int *)(this + 0x50);
    uVar28 = FUN_044e61ac(500);
    pSVar36 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e558);
    iVar12 = SalesProgressBar::GetCurrentLevel(pSVar36);
    (*pcVar45)(plVar44,(iVar10 - iVar11) / 2,uVar28,iVar11,(iVar12 << 1) / 3);
    pPVar38 = *(PVZ2UIButton **)(this + 0x230);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_78,&DAT_06b0e558,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b0e648,3);
    PVZ2UIButton::SetDialogStates(pPVar38,(PVZ2UIImage *)&local_78,(PVZ2UIImage *)&local_40);
    (**(code **)(**(long **)(this + 0x230) + 0x158))(*(long **)(this + 0x230),0);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x230));
    psVar40 = extraout_x1_00;
  }
  if (this[0x131] != (UniverseWorldInfo)0x0) {
    pIVar39 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e7b0);
    this_10 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage(this_10,pIVar39);
    *(UIWidgetImage **)(this + 0x240) = this_10;
    lVar41 = *(long *)(this + 0x230);
    if (lVar41 != 0) {
      pcVar45 = *(code **)(*(long *)this_10 + 0x198);
      iVar12 = FUN_044e61ac(5);
      iVar10 = *(int *)(lVar41 + 0x48);
      iVar13 = FUN_044e61ac(0xf);
      iVar11 = *(int *)(lVar41 + 0x4c);
      pLVar35 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e7b0);
      uVar28 = LotteryResultProgressBar::GetCurrentLevel(pLVar35);
      pSVar36 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e7b0);
      uVar25 = SalesProgressBar::GetCurrentLevel(pSVar36);
      (*pcVar45)(this_10,iVar12 + iVar10,iVar13 + iVar11,uVar28,uVar25);
      this_10 = *(UIWidgetImage **)(this + 0x240);
    }
    (**(code **)(*(long *)this_10 + 0x158))(this_10,0);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x240));
    psVar40 = extraout_x1_02;
  }
  Sexy::StringToUpper((Sexy *)this_00,psVar40);
  Sexy::UTF8StringToWString((Sexy *)&local_f0,extraout_x1_01);
  uVar29 = FUN_054766ec((FastCurve *)&local_e8);
  Sexy::StrFormat(L"[WORLD_NAME_%ls]",(string *)&local_78,uVar29);
  TodStringTranslate((wstring *)&local_78);
  FUN_054766c8(this + 0x1e8,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  FUN_05476c50((string *)&local_78);
  FUN_05476c50((FastCurve *)&local_e8);
  std::string::~string((string *)&local_f0);
  this[0xf5] = (UniverseWorldInfo)0x1;
  Sexy::Point::Point((Point *)&local_40,*(int *)(gLawnApp + 0xd4) / 2,*(int *)(gLawnApp + 0xd8) / 2)
  ;
  pLVar5 = gLawnApp;
  *(undefined8 *)(this + 0x1d0) = local_40;
  *(undefined8 *)(this + 0x1d8) = local_40;
  iVar10 = FUN_044e61ac(0x118);
  *(int *)(this + 0x1e0) = *(int *)(pLVar5 + 0xd4) / 2 - iVar10;
  iVar10 = FUN_044e61ac(0x1e);
  *(int *)(this + 0x1e4) = *(int *)(pLVar5 + 0xd8) / 2 - iVar10;
  uVar28 = PVZ_T();
  *(undefined4 *)(this + 0x118) = uVar28;
  HideWorlds(this);
  this_02 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnPurchaseClosed);
  Sexy::Delegate0::Delegate0<UniverseWorldInfo,void(UniverseWorldInfo::*)()>
            (aDStack_a8,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  MessageRouter::Subscribe((MessageRouter *)this_02,Message::PurchaseDialogClosed,aDStack_a8);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_c0);
  std::string::~string(asStack_118);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseWorldInfo::UniverseWorldInfo(std::string const&) */

void __thiscall UniverseWorldInfo::UniverseWorldInfo(UniverseWorldInfo *this,string *param_1)

{
  UniverseWorldInfo *pUVar1;
  LawnApp *pLVar2;
  UniverseWorldInfo *pUVar3;
  undefined4 uVar4;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_06855ef0;
  *(undefined ***)(this + 0xd8) = &PTR__UniverseWorldInfo_06856228;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_06856270;
  FUN_05475d88(this + 0x138,param_1);
  Sexy::Insets::Insets((Insets *)(this + 0x140));
  Sexy::Insets::Insets((Insets *)(this + 0x150));
  Sexy::Insets::Insets((Insets *)(this + 0x160));
  Sexy::Insets::Insets((Insets *)(this + 0x170));
  Sexy::Insets::Insets((Insets *)(this + 0x180));
  Sexy::Insets::Insets((Insets *)(this + 400));
  Sexy::Insets::Insets((Insets *)(this + 0x1a0));
  Sexy::Insets::Insets((Insets *)(this + 0x1b0));
  Sexy::Insets::Insets((Insets *)(this + 0x1c0));
  Sexy::Point::Point((Point *)(this + 0x1d0));
  Sexy::Point::Point((Point *)(this + 0x1d8));
  Sexy::Point::Point((Point *)(this + 0x1e0));
  FUN_05476574(this + 0x1e8);
  FUN_05476574(this + 0x1f0);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1f8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x200));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x208));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x210));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x218));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x220));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x228));
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x250));
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x280));
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x2b0));
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x2e0));
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x310));
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x340));
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x370));
  pUVar3 = this + 0x3a0;
  do {
    pUVar1 = pUVar3 + 0x30;
    EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)pUVar3);
    pUVar3 = pUVar1;
  } while (pUVar1 != this + 0x490);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x4a0));
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_10,"UI_UniverseWorldInfo");
  LawnApp::LoadGroup(pLVar2,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_10,"Effect_UniverseWorldInfo");
  LawnApp::LoadGroup(pLVar2,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_10,"UI_Universe");
  LawnApp::LoadGroup(pLVar2,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_10,"UI_HeadShot_Plant");
  LawnApp::LoadGroup(pLVar2,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_10,"TimeTunnel");
  LawnApp::LoadGroup(pLVar2,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  *(undefined8 *)(this + 0x248) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1f8),(RtWeakPtr *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x200),(RtWeakPtr *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x114) = 0x3f800000;
  *(undefined4 *)(this + 0x110) = 0x3f800000;
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  Sexy::Point::Point((Point *)&local_10,0,0);
  *(undefined8 *)(this + 0x1d0) = local_10;
  uVar4 = PVZ_EOT();
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined4 *)(this + 0x118) = uVar4;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x4a0),(RtWeakPtr *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  *(undefined8 *)(this + 0x498) = 0;
  this[0xf2] = (UniverseWorldInfo)0x0;
  this[0xf0] = (UniverseWorldInfo)0x0;
  this[0xf1] = (UniverseWorldInfo)0x0;
  this[0xf4] = (UniverseWorldInfo)0x0;
  this[0xf5] = (UniverseWorldInfo)0x0;
  this[0xf3] = (UniverseWorldInfo)0x0;
  this[0xf8] = (UniverseWorldInfo)0x0;
  this[0x130] = (UniverseWorldInfo)0x0;
  this[0xf6] = (UniverseWorldInfo)0x0;
  this[0xf7] = (UniverseWorldInfo)0x0;
  this[0x131] = (UniverseWorldInfo)0x0;
  this[0xf9] = (UniverseWorldInfo)0x0;
  this[0xfa] = (UniverseWorldInfo)0x0;
  this[0xfb] = (UniverseWorldInfo)0x0;
  this[0xfc] = (UniverseWorldInfo)0x0;
  EffectAnim_UIAnim::SafeRelease((EffectAnim_UIAnim *)(this + 0x250));
  EffectAnim_UIAnim::SafeRelease((EffectAnim_UIAnim *)(this + 0x280));
  EffectAnim_UIAnim::SafeRelease((EffectAnim_UIAnim *)(this + 0x2e0));
  EffectAnim_UIAnim::SafeRelease((EffectAnim_UIAnim *)(this + 0x2b0));
  EffectAnim_UIAnim::SafeRelease((EffectAnim_UIAnim *)(this + 0x310));
  EffectAnim_UIAnim::SafeRelease((EffectAnim_UIAnim *)(this + 0x340));
  EffectAnim_UIAnim::SafeRelease((EffectAnim_UIAnim *)(this + 0x370));
  pUVar3 = this + 0x3a0;
  do {
    pUVar1 = pUVar3 + 0x30;
    EffectAnim_UIAnim::SafeRelease((EffectAnim_UIAnim *)pUVar3);
    pUVar3 = pUVar1;
  } while (pUVar1 != this + 0x490);
  *(undefined8 *)(this + 0x490) = 0;
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

