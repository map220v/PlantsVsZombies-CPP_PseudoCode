// Class: AirMissileGuide


/* AirMissileGuide::OnGameplayStarted() */

void __thiscall AirMissileGuide::OnGameplayStarted(AirMissileGuide *this)

{
  this[0x1c] = (AirMissileGuide)0x1;
  return;
}


/* AirMissileGuide::Draw(Sexy::Graphics*) */

void AirMissileGuide::Draw(Graphics *param_1)

{
  if (*(long **)(param_1 + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x40) + 0x128))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AirMissileGuide::StaticClassInit() */

void AirMissileGuide::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"AirMissileGuide");
    (*pcVar2)(plVar1,asStack_10,FUN_047a1e78,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AirMissileGuide::StaticGetClass() */

long * AirMissileGuide::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"AirMissileGuide",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AirMissileGuide::GenerateVelocity() */

void __thiscall AirMissileGuide::GenerateVelocity(AirMissileGuide *this)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(float *)(this + 0x24) < 650.0) {
    uVar2 = 0x43c80000;
  }
  else {
    uVar2 = 0xc3c80000;
  }
  *(undefined4 *)(this + 0x30) = uVar2;
  iVar1 = Sexy::Rand(10);
  *(undefined4 *)(this + 0x38) = 0;
  *(float *)(this + 0x34) = (float)(iVar1 + -5);
  return;
}


/* AirMissileGuide::AirMissileGuide() */

void __thiscall AirMissileGuide::AirMissileGuide(AirMissileGuide *this)

{
  undefined4 uVar1;
  
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_068ddbb0;
  DVec3::DVec3((DVec3 *)(this + 0x24));
  DVec3::DVec3((DVec3 *)(this + 0x30));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x50));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x58));
  uVar1 = PVZ_EOT();
  this[0x1c] = (AirMissileGuide)0x0;
  this[0x1d] = (AirMissileGuide)0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  *(undefined4 *)(this + 0x20) = uVar1;
  return;
}


/* AirMissileGuide::StaticNew() */

AirMissileGuide * AirMissileGuide::StaticNew(void)

{
  AirMissileGuide *this;
  
  this = ::operator_new(0x60);
  AirMissileGuide(this);
  return this;
}


/* AirMissileGuide::~AirMissileGuide() */

void __thiscall AirMissileGuide::~AirMissileGuide(AirMissileGuide *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_068ddbb0;
  if (*(long **)(this + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x40) + 0x18))();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* AirMissileGuide::~AirMissileGuide() */

void __thiscall AirMissileGuide::~AirMissileGuide(AirMissileGuide *this)

{
  ~AirMissileGuide(this);
  AK::FreeHook(this);
  return;
}


/* AirMissileGuide::GetTimeElapsed() */

float __thiscall AirMissileGuide::GetTimeElapsed(AirMissileGuide *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  return fVar1 - *(float *)(this + 0x20);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AirMissileGuide::SetState(int) */

void __thiscall AirMissileGuide::SetState(AirMissileGuide *this,int param_1)

{
  RtMixedPtrBase *this_00;
  LawnApp *pLVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar5;
  long lVar6;
  long *plVar7;
  undefined4 uVar8;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  Vec3 aVStack_18 [16];
  long local_8;
  
  iVar3 = *(int *)(this + 0x18);
  local_8 = ___stack_chk_guard;
  if (iVar3 != param_1) {
    *(int *)(this + 0x18) = param_1;
    uVar8 = PVZ_T();
    iVar3 = *(int *)(this + 0x18);
    *(undefined4 *)(this + 0x20) = uVar8;
  }
  if (iVar3 == 1) {
    Board::GetBoardBaseOffset();
    pLVar1 = gLawnApp;
    iVar3 = FUN_0479f0e0(0x28a);
    iVar4 = FUN_0479f0e0(0x1a4);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_20,(float)(iVar3 + local_28),(float)(iVar4 + local_24));
    std::string::string((string *)aVStack_18,"");
    LawnApp::ShowGameMaskUI(local_20,local_1c,pLVar1,0xf0,0,(string *)aVStack_18);
    std::string::~string((string *)aVStack_18);
    nop();
    lVar6 = LawnApp::GetGameMaskUI(gLawnApp);
    FUN_0479ed68(lVar6 + 0x110);
    Board::SetGameplayObjectPause(*(Board **)(gLawnApp + 0x9f0),true);
  }
  else if (iVar3 == 2) {
    EATextSquish::Vec3::Vec3(aVStack_18,520.0,510.0,0.0);
    Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x24),(SexyVector3 *)aVStack_18);
    this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string((string *)&local_20,"POPANIM_EFFECTS_TUTORIAL_GLOVE");
    GetPAMByName((string *)&local_20);
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aVStack_18);
    Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar5,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_18);
    std::string::~string((string *)&local_20);
    nop();
    StandaloneEffect::SetBoardSpaceOrigin
              ((StandaloneEffect *)this_01,(SexyVector3 *)(this + 0x24),900000);
    Effect_PopAnim::SetCentered(this_01,true);
    std::string::string((string *)aVStack_18,"idle");
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(this_01,aVStack_18,0);
    std::string::~string((string *)aVStack_18);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x48),(RtWeakPtrBase *)aVStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_18);
    GenerateVelocity(this);
  }
  else if (iVar3 == -1) {
    this_00 = (RtMixedPtrBase *)(this + 0x48);
    LawnApp::KillGameMaskUI(gLawnApp);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar2 != '\0') {
      plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      (**(code **)(*plVar7 + 0x48))();
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
    }
    Board::SetGameplayObjectPause(*(Board **)(gLawnApp + 0x9f0),false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AirMissileGuide::UpdateCountDown() */

void __thiscall AirMissileGuide::UpdateCountDown(AirMissileGuide *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  PrimeTextWidget *pPVar5;
  undefined8 uVar6;
  PrimeText_PotentialText *pPVar7;
  uint uVar8;
  float fVar9;
  wstring awStack_28 [8];
  undefined1 auStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar9 = (float)GetTimeElapsed(this);
  uVar8 = (uint)(4.0 - fVar9);
  if ((int)uVar8 < 0) {
    if (*(long **)(this + 0x40) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x40) + 0x18))();
    }
    *(undefined8 *)(this + 0x40) = 0;
    SetState(this,-1);
  }
  else {
    FUN_05476574(awStack_28);
    if (uVar8 == 0) {
      fVar9 = 1.5;
      TodStringTranslate(L"[BEGIN_SWIPE]");
    }
    else {
      fVar9 = 2.0;
      Sexy::StrFormat(L"%d",aCStack_18,(ulong)uVar8);
    }
    FUN_054766c8(awStack_28,aCStack_18);
    FUN_05476c50(aCStack_18);
    pPVar5 = *(PrimeTextWidget **)(this + 0x40);
    if (pPVar5 == (PrimeTextWidget *)0x0) {
      uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
      iVar1 = FUN_0479f0e0(0x226);
      iVar2 = FUN_0479f0e0(0x168);
      iVar3 = FUN_0479f0e0(200);
      iVar4 = FUN_0479f0e0(100);
      FUN_05477b24(auStack_20,awStack_28);
      Sexy::Color::Color(aCStack_18,2);
      pPVar7 = (PrimeText_PotentialText *)
               Sexy::BuildPotentialText_Paragraph
                         ((float)iVar1,(float)iVar2,(float)iVar3,(float)iVar4,uVar6,auStack_20,1,1,
                          aCStack_18);
      pPVar5 = ::operator_new(0xf8);
      Sexy::PrimeTextWidget::PrimeTextWidget(pPVar5,pPVar7);
      *(PrimeTextWidget **)(this + 0x40) = pPVar5;
      FUN_05476c50(auStack_20);
      pPVar5 = *(PrimeTextWidget **)(this + 0x40);
    }
    Sexy::PrimeTextWidget::SetScale(pPVar5,fVar9,fVar9);
    Sexy::PrimeTextWidget::SetText(*(PrimeTextWidget **)(this + 0x40),awStack_28);
    FUN_05476c50(awStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AirMissileGuide::PlaySwipeEffect() */

void __thiscall AirMissileGuide::PlaySwipeEffect(AirMissileGuide *this)

{
  ResourceInfo *this_00;
  float fVar1;
  FastCurve aFStack_28 [8];
  FastCurve aFStack_20 [8];
  FastCurve aFStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x58));
  if (this_00 != (ResourceInfo *)0x0) {
    fVar1 = (float)(int)((*(float *)(this + 0x34) * 65.0) / *(float *)(this + 0x30));
    if (*(float *)(this + 0x30) <= 0.0) {
      fVar1 = fVar1 + *(float *)(this + 0x28);
    }
    else {
      fVar1 = *(float *)(this + 0x28) - fVar1;
    }
    Sexy::FastCurve::SetOutRange(aFStack_28,50.0,-110.0);
    Sexy::FastCurve::SetOutRange(aFStack_20,585.0,(float)(int)fVar1);
    Sexy::TPoint<float>::operator+=((TPoint<float> *)aFStack_20,(TPoint *)aFStack_28);
    Sexy::FastCurve::SetOutRange(aFStack_18,*(float *)(this + 0x30),*(float *)(this + 0x34));
    AirMissileLauncher::PlaySwipeEffect
              ((AirMissileLauncher *)this_00,(SexyVector2 *)aFStack_18,(SexyVector2 *)aFStack_20);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x50),(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AirMissileGuide::UpdateSwipe() */

void AirMissileGuide::UpdateSwipe(void)

{
  AirMissileGuide *in_x0;
  ResourceInfo *this;
  StandaloneEffect *this_00;
  float fVar1;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(in_x0 + 0x48));
  if (this == (ResourceInfo *)0x0) {
LAB_047a0fbc:
    this_00 = (StandaloneEffect *)
              Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(in_x0 + 0x50));
    if (this_00 == (StandaloneEffect *)0x0) goto LAB_047a1040;
LAB_047a0fcc:
    StandaloneEffect::Update(this_00);
    fVar1 = (float)GetTimeElapsed(in_x0);
    if (fVar1 <= 3.0) goto LAB_047a0fe4;
    (**(code **)(*(long *)this + 0x48))(this);
    (**(code **)(*(long *)this_00 + 0x48))(this_00);
  }
  else {
    StandaloneEffect::Update((StandaloneEffect *)this);
    fVar1 = (float)PVZ_Dt();
    local_18[0] = Sexy::SexyVector3::operator*((SexyVector3 *)(in_x0 + 0x30),fVar1);
    EATextSquish::Vec3::operator+=((Vec3 *)(in_x0 + 0x24),(Vec3 *)local_18);
    StandaloneEffect::SetBoardSpaceOrigin
              ((StandaloneEffect *)this,(SexyVector3 *)(in_x0 + 0x24),900000);
    if (520.0 <= *(float *)(in_x0 + 0x24)) {
      if ((*(float *)(in_x0 + 0x24) <= 650.0) || (*(float *)(in_x0 + 0x30) <= 0.0))
      goto LAB_047a0fbc;
    }
    else if (0.0 <= *(float *)(in_x0 + 0x30)) goto LAB_047a0fbc;
    PlaySwipeEffect(in_x0);
    GenerateVelocity(in_x0);
    this_00 = (StandaloneEffect *)
              Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(in_x0 + 0x50));
    if (this_00 != (StandaloneEffect *)0x0) goto LAB_047a0fcc;
LAB_047a1040:
    fVar1 = (float)GetTimeElapsed(in_x0);
    if (fVar1 <= 3.0) goto LAB_047a0fe4;
    (**(code **)(*(long *)this + 0x48))(this);
  }
  SetState(in_x0,3);
LAB_047a0fe4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AirMissileGuide::OnUpdate() */

void __thiscall AirMissileGuide::OnUpdate(AirMissileGuide *this)

{
  float fVar1;
  
  switch(*(undefined4 *)(this + 0x18)) {
  case 0:
    fVar1 = (float)GetTimeElapsed(this);
    if (2.0 < fVar1) {
      SetState(this,1);
      return;
    }
    break;
  case 1:
    fVar1 = (float)GetTimeElapsed(this);
    if (1.0 < fVar1) {
      SetState(this,2);
      return;
    }
    break;
  case 2:
    UpdateSwipe();
    return;
  case 3:
    UpdateCountDown(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AirMissileGuide::AddToRenderQueue(RenderQueue*) */

void __thiscall AirMissileGuide::AddToRenderQueue(AirMissileGuide *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,Draw);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<AirMissileGuide,void(AirMissileGuide::*)(Sexy::Graphics*)>(aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,700000,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AirMissileGuide::registerForEvents() */

void __thiscall AirMissileGuide::registerForEvents(AirMissileGuide *this)

{
  undefined *puVar1;
  char cVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  LevelModuleManager *pLVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  cVar2 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar3);
  if (cVar2 == '\0') {
    pLVar4 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnGameplayStarted);
    Sexy::Delegate0::Delegate0<AirMissileGuide,void(AirMissileGuide::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnGameplayStarted(pLVar4,aDStack_38);
    pLVar4 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnUpdate);
    Sexy::Delegate0::Delegate0<AirMissileGuide,void(AirMissileGuide::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnUpdate(pLVar4,aDStack_38);
    pLVar4 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,AddToRenderQueue);
    Sexy::Delegate1<RenderQueue*>::Delegate1<AirMissileGuide,void(AirMissileGuide::*)(RenderQueue*)>
              ((Delegate1<RenderQueue*> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterAddToRenderQueue(pLVar4,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnPlaceOnBoard);
    local_70 = local_50;
    uStack_68 = uStack_48;
    local_60 = local_40;
    MessageRouter::
    Subscribe<Zombie*,Sexy::CBMemberTranslatorX<AirMissileGuide,void(AirMissileGuide::*)(Zombie*)>>
              ((MessageRouter *)puVar1,Message::ZombieAddedToBoard,&local_70);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AirMissileGuide::OnPlaceOnBoard(Zombie*) */

void __thiscall AirMissileGuide::OnPlaceOnBoard(AirMissileGuide *this,Zombie *param_1)

{
  bool bVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x1d] == (AirMissileGuide)0x0) && (param_1 != (Zombie *)0x0)) {
    bVar1 = Sexy::RtObject::IsA<AirMissileLauncher>((RtObject *)param_1);
    if (bVar1) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x58),(RtWeakPtrBase *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      this[0x1d] = (AirMissileGuide)0x1;
      SetState(this,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

