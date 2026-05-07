// Class: LevelOfTheDay_LargePinataWidget


/* LevelOfTheDay_LargePinataWidget::getSoundBreak(bool, bool) */

undefined * LevelOfTheDay_LargePinataWidget::getSoundBreak(bool param_1,bool param_2)

{
  int iVar1;
  
  if (((DAT_06b748f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06b748f0), iVar1 != 0)) {
    Set8BytesTo0(&DAT_06b74910);
    __cxa_guard_release(&DAT_06b748f0);
    __cxa_atexit(std::string::~string,&DAT_06b74910,&DAT_06a88000);
    return &DAT_06b74910;
  }
  return &DAT_06b74910;
}


/* LevelOfTheDay_LargePinataWidget::getSoundDrop(bool) */

undefined * LevelOfTheDay_LargePinataWidget::getSoundDrop(bool param_1)

{
  int iVar1;
  
  if (((DAT_06b74948 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06b74948), iVar1 != 0)) {
    Set8BytesTo0(&DAT_06b74950);
    __cxa_guard_release(&DAT_06b74948);
    __cxa_atexit(std::string::~string,&DAT_06b74950,&DAT_06a88000);
    return &DAT_06b74950;
  }
  return &DAT_06b74950;
}


/* LevelOfTheDay_LargePinataWidget::setDamageStateIndex(int) */

void __thiscall
LevelOfTheDay_LargePinataWidget::setDamageStateIndex
          (LevelOfTheDay_LargePinataWidget *this,int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  string *psVar4;
  
  iVar2 = open_vcdiff::VCDiffAddressCache::FirstNearMode();
  if (0 < iVar2) {
    iVar3 = 0;
    psVar4 = (string *)&DAT_06b748b8;
    do {
      bVar1 = param_1 == iVar3;
      iVar3 = iVar3 + 1;
      PopAnimRig::SetLayerVisibility(*(PopAnimRig **)(*(long *)(this + 0xd8) + 0x18),psVar4,bVar1);
      psVar4 = psVar4 + 8;
    } while (iVar3 != iVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDay_LargePinataWidget::layoutWidget() */

void __thiscall LevelOfTheDay_LargePinataWidget::layoutWidget(LevelOfTheDay_LargePinataWidget *this)

{
  code *pcVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x1a0);
  Sexy::Insets::Insets
            (aIStack_18,*(int *)(this + 0x48),*(int *)(this + 0x4c),
             *(int *)(*(long *)(this + 0xe8) + 0x50),*(int *)(*(long *)(this + 0xe8) + 0x54));
  (*pcVar1)(this,aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelOfTheDay_LargePinataWidget::Update() */

void __thiscall LevelOfTheDay_LargePinataWidget::Update(LevelOfTheDay_LargePinataWidget *this)

{
  PopAnimRigRectDrawer *this_00;
  float fVar1;
  float fVar2;
  
  this_00 = *(PopAnimRigRectDrawer **)(this + 0xd8);
  fVar1 = (float)PVZ_T();
  fVar2 = (float)PVZ_Dt();
  PopAnimRigRectDrawer::Update(this_00,fVar1,fVar2);
  if (*(StandaloneEffect **)(this + 0x120) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x120));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDay_LargePinataWidget::onNarrationFinished() */

void LevelOfTheDay_LargePinataWidget::onNarrationFinished(void)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  std::string::string(asStack_10,"nar_lod_big_reward_intro");
  PlayerInfo::CompleteNarrationEvent(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDay_LargePinataWidget::getPinataAnimation() */

void LevelOfTheDay_LargePinataWidget::getPinataAnimation(void)

{
  ResourceInfo *pRVar1;
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"POPANIM_UI_LEVELOFTHEDAY_ANIM_PRIZE_MEGA_PINATA");
  GetPAMByName(asStack_18);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDay_LargePinataWidget::onPinataHitStop(std::string const&) */

void LevelOfTheDay_LargePinataWidget::onPinataHitStop(string *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  code *pcVar4;
  string asStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  iVar1 = *(int *)(param_1 + 0xe0);
  local_8 = ___stack_chk_guard;
  iVar2 = Reflection::RFunctionType::StaticGetTypeCategory();
  if (iVar1 == iVar2) {
    PopAnimRig::SetDisabled(*(PopAnimRig **)(*(long *)(param_1 + 0xd8) + 0x18),true);
    LevelOfTheDay_ProgressiveAwardDialog::DoFinalSequence
              (*(LevelOfTheDay_ProgressiveAwardDialog **)(param_1 + 0xe8));
  }
  else {
    plVar3 = *(long **)(*(long *)(param_1 + 0xd8) + 0x18);
    pcVar4 = *(code **)(*plVar3 + 0x78);
    std::string::string(asStack_28,"idle");
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    (*pcVar4)(plVar3,asStack_28,1,0,avStack_20);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
    std::string::~string(asStack_28);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDay_LargePinataWidget::onPinataEnterStop(std::string const&) */

void LevelOfTheDay_LargePinataWidget::onPinataEnterStop(string *param_1)

{
  char cVar1;
  wchar16 *pwVar2;
  PlayerInfo *this;
  CrazyNPCManager *pCVar3;
  string *psVar4;
  LineBreakCategory *pLVar5;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *pvVar6;
  long *plVar7;
  code *pcVar8;
  string asStack_60 [8];
  string asStack_58 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  plVar7 = *(long **)(*(long *)(param_1 + 0xd8) + 0x18);
  local_8 = ___stack_chk_guard;
  pcVar8 = *(code **)(*plVar7 + 0x78);
  std::string::string(asStack_58,"idle");
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
  pLVar5 = (LineBreakCategory *)0x0;
  pvVar6 = avStack_50;
  (*pcVar8)(plVar7,asStack_58,1);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_50);
  std::string::~string(asStack_58);
  nop();
  pwVar2 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  psVar4 = asStack_58;
  std::string::string((string *)avStack_50,"LoDNarratives");
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar2,(wchar16 *)avStack_50,(LineBreakCategory *)psVar4,pLVar5,
                     (LineBreakCategory *)pvVar6);
  std::string::~string((string *)avStack_50);
  nop();
  if (cVar1 != '\0') {
    this = (PlayerInfo *)ProfileUtils::Profile();
    std::string::string((string *)avStack_50,"nar_lod_big_reward_intro");
    cVar1 = PlayerInfo::GetNarrationEventCompleted(this,(string *)avStack_50);
    std::string::~string((string *)avStack_50);
    nop();
    if (cVar1 == '\0') {
      pCVar3 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
      std::string::string(asStack_60,"LOD_BIG_REWARD_INTRO");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)param_1,onNarrationFinished);
      Sexy::Delegate0::
      Delegate0<LevelOfTheDay_LargePinataWidget,void(LevelOfTheDay_LargePinataWidget::*)()>
                (aDStack_38,avStack_50);
      std::string::string(asStack_58,"");
      CrazyNPCManager::StartNarrativeID(pCVar3,asStack_60,aDStack_38,asStack_58);
      std::string::~string(asStack_58);
      nop();
      std::string::~string(asStack_60);
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
/* LevelOfTheDay_LargePinataWidget::LevelOfTheDay_LargePinataWidget(Sexy::Widget*) */

void __thiscall
LevelOfTheDay_LargePinataWidget::LevelOfTheDay_LargePinataWidget
          (LevelOfTheDay_LargePinataWidget *this,Widget *param_1)

{
  PopAnim *pPVar1;
  RtClass *pRVar2;
  PopAnimRig *pPVar3;
  PopAnimRigRectDrawer *this_00;
  LevelOfTheDayMgr *this_01;
  string *psVar4;
  void *pvVar5;
  code *pcVar6;
  string asStack_58 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06925810;
  PinataRewardDrawer::PinataRewardDrawer((PinataRewardDrawer *)(this + 0xf0));
  *(undefined4 *)(this + 0xe0) = 0;
  *(Widget **)(this + 0xe8) = param_1;
  *(undefined8 *)(this + 0x120) = 0;
  this[0x59] = (LevelOfTheDay_LargePinataWidget)0x0;
  layoutWidget(this);
  pPVar1 = (PopAnim *)getPinataAnimation();
  pRVar2 = (RtClass *)PopAnimRig::StaticGetClass();
  pPVar3 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable(pPVar1,pRVar2);
  pcVar6 = *(code **)(*(long *)pPVar3 + 0x78);
  std::string::string(asStack_58,"idle");
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
  (*pcVar6)(pPVar3,asStack_58,1,0,avStack_50);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_50);
  std::string::~string(asStack_58);
  nop();
  this_00 = ::operator_new(0x20);
  PopAnimRigRectDrawer::PopAnimRigRectDrawer(this_00,pPVar3);
  *(PopAnimRigRectDrawer **)(this + 0xd8) = this_00;
  pPVar3 = *(PopAnimRig **)(this_00 + 0x18);
  std::string::string(asStack_58,"enter");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPinataEnterStop);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<LevelOfTheDay_LargePinataWidget,void(LevelOfTheDay_LargePinataWidget::*)(std::string_const&)>
            (aDStack_38,avStack_50);
  PopAnimRig::PlayAndStop(pPVar3,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  setDamageStateIndex(this,-1);
  this_01 = (LevelOfTheDayMgr *)LevelOfTheDayMgr::GetInstance();
  LevelOfTheDayMgr::SpawnEffectFromTop(this_01,*(Widget **)(this + 0xe8),0x1e,0x46);
  psVar4 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  pvVar5 = (void *)getSoundDrop(SUB81(this,0));
  AudioMgr::SendEvent(psVar4,pvVar5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelOfTheDay_LargePinataWidget::~LevelOfTheDay_LargePinataWidget() */

void __thiscall
LevelOfTheDay_LargePinataWidget::~LevelOfTheDay_LargePinataWidget
          (LevelOfTheDay_LargePinataWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06925810;
  if (*(long **)(this + 0xd8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xd8) + 8))();
  }
  if (*(long **)(this + 0x120) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x120) + 0x18))();
    *(undefined8 *)(this + 0x120) = 0;
  }
  PinataRewardDrawer::~PinataRewardDrawer((PinataRewardDrawer *)(this + 0xf0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelOfTheDay_LargePinataWidget::~LevelOfTheDay_LargePinataWidget() */

void __thiscall
LevelOfTheDay_LargePinataWidget::~LevelOfTheDay_LargePinataWidget
          (LevelOfTheDay_LargePinataWidget *this)

{
  ~LevelOfTheDay_LargePinataWidget(this);
  AK::FreeHook(this);
  return;
}

