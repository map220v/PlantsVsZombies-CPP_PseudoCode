// Class: ChristmasLotteryReward


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasLotteryReward::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
ChristmasLotteryReward::DrawAll(ChristmasLotteryReward *this,ModalFlags *param_1,Graphics *param_2)

{
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_2);
  Sexy::Graphics::ClearClipRect(param_2);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChristmasLotteryReward::Update() */

void __thiscall ChristmasLotteryReward::Update(ChristmasLotteryReward *this)

{
  if (*(StandaloneEffect **)(this + 0xe0) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0xe0));
  }
  if (*(StandaloneEffect **)(this + 0xe8) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0xe8));
  }
  if (*(StandaloneEffect **)(this + 0xf0) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0xf0));
  }
  if (*(StandaloneEffect **)(this + 0xf8) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0xf8));
  }
  if (*(StandaloneEffect **)(this + 0x100) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x100));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasLotteryReward::setupScreen() */

void __thiscall ChristmasLotteryReward::setupScreen(ChristmasLotteryReward *this)

{
  int iVar1;
  int iVar2;
  Effect_PopAnim *pEVar3;
  ResourceInfo *pRVar4;
  TimeChallengeEndLevelUI *this_00;
  StandaloneEffect *this_01;
  RtWeakPtr aRStack_58 [8];
  undefined8 local_50;
  undefined8 uStack_48;
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,*(undefined4 *)(gLawnApp + 0x71c),*(undefined4 *)(gLawnApp + 0x720),
             *(undefined4 *)(gLawnApp + 0x724),*(undefined4 *)(gLawnApp + 0x728));
  iVar1 = FUN_04be6298(0x230);
  iVar2 = FUN_04be6298(0x140);
  Sexy::Insets::Insets
            ((Insets *)&local_50,(*(int *)(this + 0x50) - iVar1) / 2,
             (*(int *)(this + 0x54) - iVar2) / 2,iVar1,iVar2);
  *(undefined8 *)(this + 0x108) = local_50;
  *(undefined8 *)(this + 0x110) = uStack_48;
  pEVar3 = GameObject::CreateOutsideTable<Effect_PopAnim>();
  *(Effect_PopAnim **)(this + 0xe0) = pEVar3;
  std::string::string((string *)&local_50,"POPANIM_EFFECTS_CHRISTMAS_DIALOG_BG");
  GetPAMByName((string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_58);
  Effect_PopAnim::CreatePopAnimRig
            (*(Effect_PopAnim **)(this + 0xe0),(PopAnim *)pRVar4,(RtClass *)0x0);
  this_01 = *(StandaloneEffect **)(this + 0xe0);
  iVar1 = FUN_04be6298(0);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_50,(float)(iVar1 + *(int *)(this + 0x50) / 2),
             (float)(iVar1 + *(int *)(this + 0x54) / 2));
  StandaloneEffect::SetScreenSpaceOrigin(this_01,(SexyVector2 *)&local_50,900000);
  Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0xe0),true);
  pEVar3 = *(Effect_PopAnim **)(this + 0xe0);
  std::string::string((string *)&local_50,"idle");
  Effect_PopAnim::PlaySingleAnimation(pEVar3,(Insets *)&local_50,0);
  std::string::~string((string *)&local_50);
  nop();
  this_00 = (TimeChallengeEndLevelUI *)UIWidget::GetAtlasImage(*(UIWidget **)(this + 0xe0));
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAnimCommand);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<ChristmasLotteryReward,void(ChristmasLotteryReward::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,(Insets *)&local_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChristmasLotteryReward::ButtonPress(int) */

void ChristmasLotteryReward::ButtonPress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  return;
}


/* non-virtual thunk to ChristmasLotteryReward::ButtonPress(int) */

void __thiscall ChristmasLotteryReward::ButtonPress(ChristmasLotteryReward *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* ChristmasLotteryReward::ButtonDepress(int) */

void __thiscall ChristmasLotteryReward::ButtonDepress(ChristmasLotteryReward *this,int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Release");
  if (param_1 != 1000) {
    return;
  }
  LawnApp::KillChristmasLotteryReward(gLawnApp);
  return;
}


/* non-virtual thunk to ChristmasLotteryReward::ButtonDepress(int) */

void __thiscall ChristmasLotteryReward::ButtonDepress(ChristmasLotteryReward *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasLotteryReward::ChristmasLotteryReward(std::string, bool, int) */

void __thiscall
ChristmasLotteryReward::ChristmasLotteryReward
          (ChristmasLotteryReward *this,undefined8 param_2,ChristmasLotteryReward param_3,
          undefined4 param_4)

{
  LawnApp *pLVar1;
  string *psVar2;
  long lVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0697c960;
  *(undefined **)(this + 0xd8) = &DAT_0697cc90;
  Sexy::Insets::Insets((Insets *)(this + 0x108));
  Set8BytesTo0(this + 0x118);
  thunk_FUN_05475e00(this + 0x118,param_2);
  this[0x120] = param_3;
  *(undefined4 *)(this + 0x124) = param_4;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Christmas");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Christmas_Effect");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
  pLVar1 = gLawnApp;
  if (this[0x120] != (ChristmasLotteryReward)0x0) {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    LawnApp::LoadGroup(pLVar1,(string *)(lVar3 + 0x10));
  }
  setupScreen(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasLotteryReward::~ChristmasLotteryReward() */

void __thiscall ChristmasLotteryReward::~ChristmasLotteryReward(ChristmasLotteryReward *this)

{
  LawnApp *pLVar1;
  long *plVar2;
  string *psVar3;
  long lVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0697c960;
  *(undefined **)(this + 0xd8) = &DAT_0697cc90;
  if (*(long **)(this + 0xe0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xe0) + 0x18))();
    *(undefined8 *)(this + 0xe0) = 0;
  }
  if (*(long **)(this + 0xe8) == (long *)0x0) {
    plVar2 = *(long **)(this + 0xf0);
  }
  else {
    (**(code **)(**(long **)(this + 0xe8) + 0x18))();
    *(undefined8 *)(this + 0xe8) = 0;
    plVar2 = *(long **)(this + 0xf0);
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
    *(undefined8 *)(this + 0xf0) = 0;
  }
  if (*(long **)(this + 0xf8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xf8) + 0x18))();
    *(undefined8 *)(this + 0xf8) = 0;
  }
  if (*(long **)(this + 0x100) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x100) + 0x18))();
    *(undefined8 *)(this + 0x100) = 0;
  }
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
  pLVar1 = gLawnApp;
  if (this[0x120] != (ChristmasLotteryReward)0x0) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    LawnApp::DeleteGroup(pLVar1,(string *)(lVar4 + 0x10));
  }
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Christmas_Effect");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Christmas");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  std::string::~string((string *)(this + 0x118));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChristmasLotteryReward::~ChristmasLotteryReward() */

void __thiscall ChristmasLotteryReward::~ChristmasLotteryReward(ChristmasLotteryReward *this)

{
  ~ChristmasLotteryReward(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasLotteryReward::Draw(Sexy::Graphics*) */

void __thiscall ChristmasLotteryReward::Draw(ChristmasLotteryReward *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  string *psVar4;
  undefined8 uVar5;
  GraphicsAutoState aGStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  undefined1 auStack_50 [8];
  wstring awStack_48 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  Plant aPStack_38 [8];
  wstring awStack_30 [8];
  Insets aIStack_28 [16];
  wstring awStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_60,param_1);
  Sexy::Graphics::ClearClipRect(param_1);
  if (*(StandaloneEffect **)(this + 0xe8) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0xe8),param_1);
  }
  if (*(StandaloneEffect **)(this + 0xe0) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0xe0),param_1);
  }
  if (*(StandaloneEffect **)(this + 0xf0) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0xf0),param_1);
  }
  if (*(StandaloneEffect **)(this + 0xf8) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0xf8),param_1);
  }
  if (*(StandaloneEffect **)(this + 0x100) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x100),param_1);
  }
  iVar1 = *(int *)(this + 0x114);
  iVar2 = *(int *)(this + 0x10c);
  iVar3 = FUN_04be6298(0x3c);
  Sexy::Insets::Insets
            (aIStack_28,*(int *)(this + 0x108),(iVar2 + iVar1) - iVar3,*(int *)(this + 0x110),iVar3)
  ;
  psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
  FUN_05476574(auStack_50);
  if (this[0x120] == (ChristmasLotteryReward)0x0) {
    TodStringTranslate(L"[PIECE_COUNT]");
    Sexy::StrFormat(L"%d",awStack_18,(ulong)*(uint *)(this + 0x124));
    TodReplaceString(awStack_30,L"{PIECES}",awStack_18);
    FUN_05476c50(awStack_18);
    FUN_05476c50(awStack_30);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_58);
    Plant::GetFormattedNameString(aPStack_38,aRStack_40);
    TodStringTranslate(awStack_48);
    std::operator+((wstring *)aPStack_38,awStack_30);
    FUN_054766c8(auStack_50,awStack_18);
    FUN_05476c50(awStack_18);
    FUN_05476c50(awStack_30);
    FUN_05476c50(aPStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    FUN_05476c50(awStack_48);
  }
  else {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)awStack_30,(RtWeakPtrBase *)aRStack_58);
    Plant::GetFormattedNameString((Plant *)awStack_18,(RtWeakPtr<Sexy::SoundResource> *)awStack_30);
    FUN_054766c8(auStack_50,(Plant *)awStack_18);
    FUN_05476c50((Plant *)awStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)awStack_30);
  }
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32);
  Sexy::Insets::Insets((Insets *)awStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
  WriteWordInRect(param_1,auStack_50,aIStack_28,uVar5,(Insets *)awStack_18,2,1);
  FUN_05476c50(auStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasLotteryReward::onAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ChristmasLotteryReward::onAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  Effect_PopAnim *pEVar9;
  ResourceInfo *pRVar10;
  string *psVar11;
  PVZ2UIButton *this;
  SalesProgressBar *pSVar12;
  char *pcVar13;
  RtClass *pRVar14;
  long *extraout_x0;
  Effect_StaticImage *pEVar15;
  long lVar16;
  code *pcVar17;
  StandaloneEffect *pSVar18;
  Effect_BouncingArrow *pEVar19;
  string asStack_88 [8];
  RtWeakPtr aRStack_80 [8];
  RtWeakPtr aRStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = std::operator==(param_4,"done");
  if ((bVar2) && (bVar2 = std::operator==(param_3,"idle"), bVar2)) {
    pEVar9 = GameObject::CreateOutsideTable<Effect_PopAnim>();
    *(Effect_PopAnim **)(param_1 + 0xe8) = pEVar9;
    std::string::string(asStack_40,"POPANIM_EFFECTS_CHRISTMAS_REWARD_BG");
    GetPAMByName(asStack_40);
    std::string::~string(asStack_40);
    nop();
    pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_78);
    Effect_PopAnim::CreatePopAnimRig
              (*(Effect_PopAnim **)(param_1 + 0xe8),(PopAnim *)pRVar10,(RtClass *)0x0);
    pSVar18 = *(StandaloneEffect **)(param_1 + 0xe8);
    iVar4 = FUN_04be6298(0);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)asStack_40,(float)(iVar4 + *(int *)(param_1 + 0x50) / 2),
               (float)(iVar4 + *(int *)(param_1 + 0x54) / 2));
    StandaloneEffect::SetScreenSpaceOrigin(pSVar18,(SexyVector2 *)asStack_40,900000);
    Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(param_1 + 0xe8),true);
    pEVar9 = *(Effect_PopAnim **)(param_1 + 0xe8);
    std::string::string(asStack_40,"effects_behind");
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(pEVar9,asStack_40,0);
    std::string::~string(asStack_40);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    pEVar9 = GameObject::CreateOutsideTable<Effect_PopAnim>();
    *(Effect_PopAnim **)(param_1 + 0xf0) = pEVar9;
    std::string::string(asStack_40,"POPANIM_EFFECTS_CHRISTMAS_REWARD_FRONT");
    GetPAMByName(asStack_40);
    std::string::~string(asStack_40);
    nop();
    pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_80);
    Effect_PopAnim::CreatePopAnimRig
              (*(Effect_PopAnim **)(param_1 + 0xf0),(PopAnim *)pRVar10,(RtClass *)0x0);
    pSVar18 = *(StandaloneEffect **)(param_1 + 0xf0);
    iVar4 = FUN_04be6298(0);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)asStack_40,(float)(iVar4 + *(int *)(param_1 + 0x50) / 2),
               (float)(iVar4 + *(int *)(param_1 + 0x54) / 2));
    StandaloneEffect::SetScreenSpaceOrigin(pSVar18,(SexyVector2 *)asStack_40,900000);
    Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(param_1 + 0xf0),true);
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)asStack_40);
    std::string::string((string *)aRStack_78,"effect_on");
    AnimationSequence::AddSingleAnimation(asStack_40,aRStack_78,0);
    std::string::~string((string *)aRStack_78);
    nop();
    std::string::string((string *)aRStack_78,"effect_fullscreen_star");
    AnimationSequence::AddSingleAnimation(asStack_40,aRStack_78,0);
    std::string::~string((string *)aRStack_78);
    nop();
    Effect_PopAnim::PlayAnimationSequence
              (*(Effect_PopAnim **)(param_1 + 0xf0),(AnimationSequence *)asStack_40);
    AnimationSequence::~AnimationSequence((AnimationSequence *)asStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    if (param_1[0x120] == (string)0x0) {
      FUN_031f5e7c(asStack_88,"plant_piece_",param_1 + 0x118);
      psVar11 = (string *)
                Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
      ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar11);
      cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_80);
      if (cVar3 != '\0') {
        pEVar15 = GameObject::CreateOutsideTable<Effect_StaticImage>();
        *(Effect_StaticImage **)(param_1 + 0x100) = pEVar15;
        lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
        lVar16 = StringHelper::ToImage((string *)(lVar16 + 0x60),false);
        if (lVar16 == 0) {
          pEVar19 = *(Effect_BouncingArrow **)(param_1 + 0x100);
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)asStack_40);
          Effect_BouncingArrow::SetArrowImage(pEVar19,asStack_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
        }
        else {
          pEVar19 = *(Effect_BouncingArrow **)(param_1 + 0x100);
          Sexy::BaseResource::GetRtId();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)asStack_40,(RtWeakPtrBase *)aRStack_78);
          Effect_BouncingArrow::SetArrowImage(pEVar19,asStack_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
          Sexy::RtId::~RtId((RtId *)aRStack_78);
        }
        StandaloneEffect::SetIsScreenSpaceEffect(*(StandaloneEffect **)(param_1 + 0x100),true);
        Effect_BouncingArrow::SetTransX(*(Effect_BouncingArrow **)(param_1 + 0x100),true);
        (**(code **)(**(long **)(param_1 + 0x100) + 0x80))(0x3fcccccd,*(long **)(param_1 + 0x100));
        pSVar18 = *(StandaloneEffect **)(param_1 + 0x100);
        iVar4 = FUN_04be6298(0);
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)asStack_40,(float)(iVar4 + *(int *)(param_1 + 0x50) / 2),
                   (float)(iVar4 + *(int *)(param_1 + 0x54) / 2));
        StandaloneEffect::SetScreenSpaceOrigin(pSVar18,(SexyVector2 *)asStack_40,900000);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
      std::string::~string(asStack_88);
    }
    else {
      pEVar9 = GameObject::CreateOutsideTable<Effect_PopAnim>();
      *(Effect_PopAnim **)(param_1 + 0xf8) = pEVar9;
      psVar11 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar11);
      lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78)
      ;
      pcVar13 = (char *)FUN_0547429c(lVar16 + 0x18);
      pRVar14 = (RtClass *)Sexy::RtClass::StaticGetClassNamed(pcVar13);
      pEVar9 = *(Effect_PopAnim **)(param_1 + 0xf8);
      lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78)
      ;
      GetPAMByName((string *)(lVar16 + 0x20));
      pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_40);
      Effect_PopAnim::CreatePopAnimRig(pEVar9,(PopAnim *)pRVar10,pRVar14);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
      Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(param_1 + 0xf8),true);
      (**(code **)(**(long **)(param_1 + 0xf8) + 0x80))(0x3fc00000,*(long **)(param_1 + 0xf8));
      pSVar18 = *(StandaloneEffect **)(param_1 + 0xf8);
      iVar4 = FUN_04be6298(0x15e);
      iVar8 = FUN_04be6298(0);
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)asStack_40,(float)(iVar4 + *(int *)(param_1 + 0x50) / 2),
                 (float)(iVar8 + *(int *)(param_1 + 0x54) / 2));
      StandaloneEffect::SetScreenSpaceOrigin(pSVar18,(SexyVector2 *)asStack_40,900000);
      UIWidget::GetAtlasImage(*(UIWidget **)(param_1 + 0xf8));
      nop();
      (**(code **)(*extraout_x0 + 0x1a0))();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    }
    FUN_05478178(aRStack_78,L"[ALMANAC_CLOSE]",aRStack_80);
    Sexy::Color::Color((Color *)asStack_40,1);
    this = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (this,1000,(ButtonListener *)(param_1 + 0xd8),(wstring *)aRStack_78,
               (Color *)asStack_40);
    FUN_05476c50(aRStack_78);
    nop();
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_78,&DAT_06b8bcc8,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b8bc20,3);
    PVZ2UIButton::SetDialogStates(this,(PVZ2UIImage *)aRStack_78,(PVZ2UIImage *)asStack_40);
    iVar5 = FUN_04be6298(0xa0);
    iVar4 = *(int *)(param_1 + 0x50);
    iVar8 = *(int *)(param_1 + 0x10c);
    iVar1 = *(int *)(param_1 + 0x114);
    pcVar17 = *(code **)(*(long *)this + 0x198);
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8bcc8);
    iVar6 = SalesProgressBar::GetCurrentLevel(pSVar12);
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8bcc8);
    uVar7 = SalesProgressBar::GetCurrentLevel(pSVar12);
    (*pcVar17)(this,(iVar4 - iVar5) / 2,(iVar8 + iVar1) - iVar6 / 2,iVar5,uVar7);
    (**(code **)(*(long *)param_1 + 0x60))(param_1,this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

