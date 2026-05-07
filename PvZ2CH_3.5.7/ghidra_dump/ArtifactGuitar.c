// Class: ArtifactGuitar


/* ArtifactGuitar::onPlantCreate(Plant*) */

void ArtifactGuitar::onPlantCreate(Plant *param_1)

{
  return;
}


/* ArtifactGuitar::onAddMusicalSuccessedCount(int) */

void __thiscall ArtifactGuitar::onAddMusicalSuccessedCount(ArtifactGuitar *this,int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + *(int *)(this + 0x48);
  if (0x13 < iVar1) {
    iVar1 = 0x14;
  }
  *(int *)(this + 0x48) = iVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGuitar::StaticClassInit() */

void ArtifactGuitar::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactGuitar");
    (*pcVar2)(plVar1,asStack_10,FUN_037365a0,0xa8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactGuitar::StaticGetClass() */

long * ArtifactGuitar::StaticGetClass(void)

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
  uVar2 = Artifact::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactGuitar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactGuitar::GetClass() const */

long * ArtifactGuitar::GetClass(void)

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
  uVar2 = Artifact::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactGuitar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGuitar::disableUI(bool) */

void __thiscall ArtifactGuitar::disableUI(ArtifactGuitar *this,bool param_1)

{
  char cVar1;
  UIWidget *pUVar2;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIPlantfood");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetClickable(pUVar2,param_1);
  }
  std::string::string(asStack_10,"UIShovel");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetClickable(pUVar2,param_1);
  }
  cVar1 = RiftUtils::IsRiftTimedLevel();
  if (cVar1 == '\0') {
    __s = "UINextWaveButton";
  }
  else {
    __s = "UINextWaveInstantButton";
  }
  std::string::string(asStack_10,__s);
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if ((pUVar2 != (UIWidget *)0x0) && (cVar1 = NewPVPUtils::IsPlayingNewPVP(), cVar1 == '\0')) {
    UIWidget::SetClickable(pUVar2,param_1);
  }
  std::string::string(asStack_10,"UIPauseButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetClickable(pUVar2,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactGuitar::onDestroy() */

void ArtifactGuitar::onDestroy(void)

{
  WorldMapCamera *this;
  
  this = (WorldMapCamera *)Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  WorldMapCamera::SetUseClipViewport(this,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGuitar::addForegroundToRenderQueue(RenderQueue*) */

void __thiscall
ArtifactGuitar::addForegroundToRenderQueue(ArtifactGuitar *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,renderForeground);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<ArtifactGuitar,void(ArtifactGuitar::*)(Sexy::Graphics*)>(aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,800000,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGuitar::fireGuitarSoundProjectile() */

void __thiscall ArtifactGuitar::fireGuitarSoundProjectile(ArtifactGuitar *this)

{
  RtObject *pRVar1;
  ArtifactGuitarProperties *pAVar2;
  ProjectileGuitarSound *this_00;
  undefined8 uVar3;
  undefined4 uVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  pRVar1 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pAVar2 = Sexy::RtObject::Cast<ArtifactGuitarProperties>(pRVar1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  uVar3 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)(pAVar2 + 0x158));
  pRVar1 = (RtObject *)Board::AddProjectile((Board *)0x43480000,0x43aa0000,0,uVar3,aRStack_10,0,0);
  this_00 = Sexy::RtObject::Cast<ProjectileGuitarSound>(pRVar1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  FUN_03726e2c(this_00 + 0x188);
  uVar4 = *(undefined4 *)(this + 0x4c);
  if (*(int *)(this + 0x48) - 5U < 10) {
    uVar4 = *(undefined4 *)(this + 0x50);
  }
  else if (0xe < *(int *)(this + 0x48)) {
    uVar4 = *(undefined4 *)(this + 0x54);
  }
  FUN_03723b18(uVar4,this_00 + 0xd8);
  ProjectileGuitarSound::SetSuccessCount(this_00,*(int *)(this + 0x48));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactGuitar::~ArtifactGuitar() */

void __thiscall ArtifactGuitar::~ArtifactGuitar(ArtifactGuitar *this)

{
  *(undefined ***)this = &PTR_GetClass_06692520;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::set<int,std::less<int>,std::allocator<int>>::~set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x78));
  Artifact::~Artifact((Artifact *)this);
  return;
}


/* ArtifactGuitar::~ArtifactGuitar() */

void __thiscall ArtifactGuitar::~ArtifactGuitar(ArtifactGuitar *this)

{
  ~ArtifactGuitar(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGuitar::renderForeground(Sexy::Graphics*) */

void __thiscall ArtifactGuitar::renderForeground(ArtifactGuitar *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 local_58;
  Insets aIStack_48 [16];
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x68) == 1) {
    iVar1 = FUN_03728aac(0x19e);
    iVar2 = FUN_03728aac(0x3e);
    Board::GetGridBoundingRect();
    iVar3 = FUN_03728aac(local_58);
    iVar4 = FUN_03728aac(0x32);
    iVar5 = FUN_03728aac(0xa0);
    Sexy::Insets::Insets(aIStack_48,iVar3 + iVar4,iVar5,iVar1,iVar2);
    Sexy::Insets::Insets(aIStack_18,aIStack_48);
    uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaf868);
    DrawAdaptiveImage(param_1,aIStack_18,uVar6);
    iVar1 = FUN_03728aac(local_58);
    iVar2 = FUN_03728aac(0x50);
    iVar3 = FUN_03728aac(0x78);
    iVar4 = FUN_03728aac(200);
    iVar5 = FUN_03728aac(100);
    Sexy::Insets::Insets(aIStack_38,iVar1 - iVar2,iVar3,iVar4,iVar5);
    Sexy::Insets::Insets(aIStack_18,aIStack_38);
    uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aafb00);
    DrawAdaptiveImage(param_1,aIStack_18,uVar6);
    if (0 < *(int *)(this + 0x48)) {
      iVar1 = 0;
      do {
        iVar2 = FUN_03728aac(0x14);
        iVar3 = FUN_03728aac(local_58);
        iVar4 = FUN_03728aac(0x3b);
        iVar5 = FUN_03728aac(0xa6);
        Sexy::Insets::Insets(aIStack_28,iVar3 + iVar4 + iVar2 * iVar1,iVar5,iVar2,iVar2);
        if (iVar1 < 5) {
          uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aafad8);
        }
        else if (iVar1 - 5U < 10) {
          uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aafc68);
        }
        else {
          uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aafdd0);
        }
        iVar1 = iVar1 + 1;
        Sexy::Insets::Insets(aIStack_18,aIStack_28);
        DrawAdaptiveImage(param_1,aIStack_18,uVar6);
      } while (iVar1 < *(int *)(this + 0x48));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactGuitar::reset() */

void __thiscall ArtifactGuitar::reset(ArtifactGuitar *this)

{
  WorldMapCamera *this_00;
  undefined4 uVar1;
  
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x6c) = uVar1;
  this_00 = (WorldMapCamera *)Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  WorldMapCamera::SetUseClipViewport(this_00,false);
  std::set<int,std::less<int>,std::allocator<int>>::clear
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x78));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGuitar::playAudio() */

void __thiscall ArtifactGuitar::playAudio(ArtifactGuitar *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  RtObject *pRVar5;
  undefined8 *puVar6;
  GuitarGridAudio *pGVar7;
  long *plVar8;
  Board *pBVar9;
  code *pcVar10;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  Point aPStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  iVar3 = 10;
  local_8 = ___stack_chk_guard;
  if ((9 < *(int *)(this + 0x48) - 5U) && (iVar3 = 5, 0xe < *(int *)(this + 0x48))) {
    iVar3 = 0x14;
  }
  if (*(float *)(this + 100) != 0.0) {
    Sexy::Point::Point((Point *)&local_b0,6,1);
    Sexy::Point::Point((Point *)&local_a8,6,3);
    lVar4 = Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
    if (lVar4 != 0) {
      pRVar5 = (RtObject *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
      bVar1 = Sexy::RtObject::IsA<PirateStage>(pRVar5);
      if (bVar1) {
        local_a8 = local_a8 + -2;
        local_b0 = local_b0 + -2;
      }
    }
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
    Board::GetGridItemsAt(*(Board **)(gLawnApp + 0x9f0),local_b0,local_ac,(vector *)avStack_80);
    Board::GetGridItemsAt(*(Board **)(gLawnApp + 0x9f0),local_a8,local_a4,(vector *)avStack_80);
    local_a0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_80);
    local_98 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar1)
    {
      puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0)
      ;
      cVar2 = (**(code **)(*(long *)*puVar6 + 0x200))((long *)*puVar6);
      if (cVar2 != '\0') {
        plVar8 = (long *)*puVar6;
        pcVar10 = *(code **)(*plVar8 + 0x120);
        Sexy::Point::Point(aPStack_90,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
        DamageInfo::DamageInfo((DamageInfo *)0x0,local_88,local_84,aDStack_68,aPStack_90,0);
        (*pcVar10)(plVar8,aDStack_68);
        DamageInfo::~DamageInfo(aDStack_68);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
    }
    cVar2 = Board::IsSky(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_b0);
    if ((cVar2 == '\0') &&
       (cVar2 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_b0), cVar2 == '\0')
       ) {
      pBVar9 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string((string *)aDStack_68,"guitar_grid_audio");
      pRVar5 = (RtObject *)Board::AddGridItem(pBVar9,(string *)aDStack_68,local_b0,local_ac,0);
      pGVar7 = Sexy::RtObject::Cast<GuitarGridAudio>(pRVar5);
      std::string::~string((string *)aDStack_68);
      nop();
      GuitarGridAudio::SetSuccessCount(pGVar7,iVar3);
      FUN_03723d74(*(undefined4 *)(this + 100),pGVar7 + 0x1b4);
    }
    cVar2 = Board::IsSky(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_a8);
    if ((cVar2 == '\0') &&
       (cVar2 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_a8), cVar2 == '\0')
       ) {
      pBVar9 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string((string *)aDStack_68,"guitar_grid_audio");
      pRVar5 = (RtObject *)Board::AddGridItem(pBVar9,(string *)aDStack_68,local_a8,local_a4,0);
      pGVar7 = Sexy::RtObject::Cast<GuitarGridAudio>(pRVar5);
      std::string::~string((string *)aDStack_68);
      nop();
      GuitarGridAudio::SetSuccessCount(pGVar7,iVar3);
      FUN_03723d74(*(undefined4 *)(this + 100),pGVar7 + 0x1b4);
    }
    std::vector<GridItem*,std::allocator<GridItem*>>::~vector
              ((vector<GridItem*,std::allocator<GridItem*>> *)avStack_80);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGuitar::setState(ArtifactGuitar::ArtifactGuitarState) */

void __thiscall ArtifactGuitar::setState(ArtifactGuitar *this,undefined4 param_2)

{
  int iVar1;
  RtObject *this_00;
  ArtifactGuitarProperties *pAVar2;
  BoardArtifactManager *this_01;
  long lVar3;
  Effect_PopAnim *pEVar4;
  undefined8 uVar5;
  float *pfVar6;
  WorldMapCamera *this_02;
  ResourceInfo *pRVar7;
  float fVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  *(undefined4 *)(this + 0x68) = param_2;
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  pAVar2 = Sexy::RtObject::Cast<ArtifactGuitarProperties>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (*(int *)(this + 0x68) == 1) {
    lVar3 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
    fVar8 = (float)FUN_037239dc(*(undefined4 *)(lVar3 + 0x38));
    iVar1 = *(int *)(this + 0x44);
    uVar5 = *(undefined8 *)(pAVar2 + 0x160);
    *(int *)(this + 0x44) = iVar1 + 1;
    pfVar6 = (float *)FUN_037247c0(uVar5,(long)iVar1);
    *(float *)(this + 0x6c) = *pfVar6 + fVar8;
    this_02 = (WorldMapCamera *)Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
    WorldMapCamera::SetUseClipViewport(this_02,true);
    disableUI(this,false);
  }
  else if (*(int *)(this + 0x68) == 3) {
    playAudio(this);
    this_01 = (BoardArtifactManager *)Board::GetArtifactManager(*(Board **)(gLawnApp + 0x9f0));
    lVar3 = BoardArtifactManager::GetAnimateArtifactMower(this_01);
    if (lVar3 != 0) {
      AnimateArtifactMower::GetEffect();
      pEVar4 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      std::string::string((string *)aRStack_18,"over");
      Effect_PopAnim::PlaySingleAnimation(pEVar4,aRStack_18,0);
      std::string::~string((string *)aRStack_18);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    }
    fireGuitarSoundProjectile(this);
    disableUI(this,true);
    if (*(int *)(this + 0x48) == 0x14) {
      pEVar4 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string((string *)aRStack_20,"POPANIM_EFFECTS_ARTIFACT_GUITAR_FULLCOMBO");
      GetPAMByName((string *)aRStack_20);
      pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_18);
      Effect_PopAnim::CreatePopAnimRig(pEVar4,(PopAnim *)pRVar7,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      std::string::~string((string *)aRStack_20);
      nop();
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,350.0,400.0,0.0);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)pEVar4,(SexyVector3 *)aRStack_18,1000000);
      std::string::string((string *)aRStack_18,"animation");
      Effect_PopAnim::PlayLoopingAnimation((Effect_PopAnim *)0x40a00000,pEVar4,aRStack_18,0);
      std::string::~string((string *)aRStack_18);
      nop();
    }
    reset(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactGuitar::DoTrigger() */

void __thiscall ArtifactGuitar::DoTrigger(ArtifactGuitar *this)

{
  char cVar1;
  char *pcVar2;
  
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
     (cVar1 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0)), cVar1 == '\0')) {
    ArtifactGravity::DelayToCooldown((ArtifactGravity *)this);
    setState(this,1);
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_Guitar_Main");
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGuitar::addMusicalNotes() */

void __thiscall ArtifactGuitar::addMusicalNotes(ArtifactGuitar *this)

{
  set<int,std::less<int>,std::allocator<int>> *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  RtObject *this_01;
  ArtifactGuitarProperties *pAVar5;
  long lVar6;
  Effect_MusicalNote *this_02;
  long lVar7;
  ResourceInfo *pRVar8;
  int local_34;
  int local_30;
  int local_2c;
  string asStack_28 [8];
  Point aPStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (set<int,std::less<int>,std::allocator<int>> *)(this + 0x78);
  EntityComponent_GroundEffect::GetEffect();
  this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  pAVar5 = Sexy::RtObject::Cast<ArtifactGuitarProperties>(this_01);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar3 = BoardConstants::NUMBER_OF_ROWS();
  iVar2 = (iVar2 + -2) * (iVar3 + -2);
  local_34 = Sexy::Rand(iVar2);
  while (lVar6 = std::set<int,std::less<int>,std::allocator<int>>::count(this_00,&local_34),
        lVar6 != 0) {
    local_34 = Sexy::Rand(iVar2);
  }
  std::set<int,std::less<int>,std::allocator<int>>::insert(this_00,&local_34);
  iVar1 = local_34;
  iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar2 = local_34;
  iVar3 = 0;
  if (iVar4 + -2 != 0) {
    iVar3 = iVar1 / (iVar4 + -2);
  }
  iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar4 = iVar4 + -2;
  iVar1 = 0;
  if (iVar4 != 0) {
    iVar1 = iVar2 / iVar4;
  }
  iVar2 = iVar2 - iVar1 * iVar4;
  Sexy::Point::Point((Point *)aRStack_18,iVar2,iVar3);
  BoardTransforms::GridToBoardSpace((Point *)aRStack_18);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)local_30 - 35.0,(float)local_2c - 50.0,0.0);
  this_02 = Board::AddEffect<Effect_MusicalNote>(*(Board **)(gLawnApp + 0x9f0));
  Sexy::Point::Point(aPStack_20,iVar2,iVar3);
                    /* WARNING: Load size is inaccurate */
  Effect_MusicalNote::init
            (*(Effect_MusicalNote **)(pAVar5 + 0x178),*(undefined4 *)(pAVar5 + 0x17c),this_02,
             aPStack_20);
  lVar6 = std::set<int,std::less<int>,std::allocator<int>>::size(this_00);
  lVar7 = FUN_03723dd0(*(undefined8 *)(pAVar5 + 0x160),*(undefined8 *)(pAVar5 + 0x168));
  if (lVar6 == lVar7) {
    FUN_03723d68(this_02 + 0x124);
  }
  std::string::string(asStack_28,"POPANIM_EFFECTS_ARTIFACT_GUITAR_MUSICAL_NOTES");
  GetPAMByName(asStack_28);
  pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aPStack_20);
  Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this_02,(PopAnim *)pRVar8,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_20);
  std::string::~string(asStack_28);
  nop();
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)this_02,(SexyVector3 *)aRStack_18,700000);
  iVar2 = Sexy::Rand(2);
  Sexy::StrFormat("idle%d",aPStack_20,(ulong)(iVar2 + 1));
  Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this_02,aPStack_20,0);
  std::string::~string((string *)aPStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGuitar::Update() */

void __thiscall ArtifactGuitar::Update(ArtifactGuitar *this)

{
  int iVar1;
  BoardArtifactManager *this_00;
  Effect_PopAnim *pEVar2;
  RtObject *this_01;
  ArtifactGuitarProperties *pAVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  float *pfVar7;
  float fVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Artifact::Update((Artifact *)this);
  if (*(int *)(this + 0x68) == 1) {
    EntityComponent_GroundEffect::GetEffect();
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    pAVar3 = Sexy::RtObject::Cast<ArtifactGuitarProperties>(this_01);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    uVar4 = FUN_03723dd0(*(undefined8 *)(pAVar3 + 0x160),*(undefined8 *)(pAVar3 + 0x168));
    if ((ulong)(long)(*(int *)(this + 0x44) + -1) < uVar4) {
      lVar5 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
      fVar8 = (float)FUN_037239dc(*(undefined4 *)(lVar5 + 0x38));
      if (*(float *)(this + 0x6c) < fVar8) {
        addMusicalNotes(this);
        lVar5 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
        fVar8 = (float)FUN_037239dc(*(undefined4 *)(lVar5 + 0x38));
        iVar1 = *(int *)(this + 0x44);
        uVar6 = *(undefined8 *)(pAVar3 + 0x160);
        *(int *)(this + 0x44) = iVar1 + 1;
        pfVar7 = (float *)FUN_037247c0(uVar6,(long)iVar1);
        *(float *)(this + 0x6c) = *pfVar7 + fVar8;
      }
    }
  }
  fVar8 = (float)PVZ_T();
  if (*(float *)(this + 0x70) < fVar8) {
    this_00 = (BoardArtifactManager *)Board::GetArtifactManager(*(Board **)(gLawnApp + 0x9f0));
    BoardArtifactManager::GetAnimateArtifactMower(this_00);
    AnimateArtifactMower::GetEffect();
    pEVar2 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    std::string::string(asStack_10,"passive");
    Effect_PopAnim::PlaySingleAnimation(pEVar2,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
    fVar8 = (float)PVZ_T();
    *(float *)(this + 0x70) = fVar8 + *(float *)(this + 0x5c);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGuitar::fireMusicalNotesProjectile() */

void __thiscall ArtifactGuitar::fireMusicalNotesProjectile(ArtifactGuitar *this)

{
  bool bVar1;
  char cVar2;
  RtObject *this_00;
  ArtifactGuitarProperties *pAVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  Zombie *pZVar7;
  Projectile *this_01;
  int iVar8;
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  iVar8 = 0;
  EntityFinder::GetEntitiesOnBoard(avStack_20,2);
  EntityComponent_GroundEffect::GetEffect();
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  pAVar3 = Sexy::RtObject::Cast<ArtifactGuitarProperties>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  FUN_0378296c(uVar4,uVar5);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    pZVar7 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
    cVar2 = RealObject::IsOnOpposingTeam(pZVar7,1);
    if (cVar2 != '\0') {
      iVar8 = iVar8 + 1;
      uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_28,(RtWeakPtrBase *)(pAVar3 + 0x150));
      this_01 = (Projectile *)
                Board::AddProjectile((Board *)0x43480000,0x43820000,0,uVar4,aRStack_28,0,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_28,(RtWeakPtrBase *)aRStack_30);
      Projectile::SetTarget(this_01,(RtWeakPtr *)aRStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
      FUN_03726e2c(this_01 + 0x188);
      Projectile::RotateTowardTarget(this_01);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_28);
      Projectile::SetTarget(this_01,(RtWeakPtr *)aRStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      FUN_03723b18(*(undefined4 *)(this + 0x60),this_01 + 0xd8);
    }
    if (2 < iVar8) break;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactGuitar::Activate() */

void __thiscall ArtifactGuitar::Activate(ArtifactGuitar *this)

{
  char cVar1;
  ArtifactMgr *pAVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  fVar4 = 0.0;
  Artifact::Activate((Artifact *)this);
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,0);
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar4 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,0,0);
  }
  *(float *)(this + 0x4c) = fVar4;
  fVar3 = (float)Artifact::GetBoostValue((Artifact *)this,1);
  fVar6 = 0.0;
  *(float *)(this + 0x4c) = *(float *)(this + 0x4c) + fVar4 * fVar3;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,0);
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar6 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,0,1);
  }
  *(float *)(this + 0x50) = fVar6;
  fVar4 = (float)Artifact::GetBoostValue((Artifact *)this,1);
  fVar3 = 0.0;
  *(float *)(this + 0x50) = *(float *)(this + 0x50) + fVar6 * fVar4;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,0);
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,0,2);
  }
  *(float *)(this + 0x54) = fVar3;
  fVar4 = (float)Artifact::GetBoostValue((Artifact *)this,1);
  *(float *)(this + 0x54) = *(float *)(this + 0x54) + fVar3 * fVar4;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  uVar5 = 0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar5 = ArtifactMgr::CalculateFieldValue(pAVar2,1,0);
  }
  *(undefined4 *)(this + 0x58) = uVar5;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  fVar4 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar4 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,2,0);
  }
  *(float *)(this + 0x5c) = fVar4;
  fVar3 = (float)Artifact::GetBoostValue((Artifact *)this,6);
  fVar6 = 0.0;
  *(float *)(this + 0x5c) = *(float *)(this + 0x5c) - fVar4 * fVar3;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar6 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,2,1);
  }
  *(float *)(this + 0x60) = fVar6;
  fVar4 = (float)Artifact::GetBoostValue((Artifact *)this,1);
  fVar3 = 0.0;
  *(float *)(this + 0x60) = *(float *)(this + 0x60) + fVar6 * fVar4;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,3);
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,3,1);
  }
  *(float *)(this + 100) = fVar3;
  fVar4 = (float)Artifact::GetBoostValue((Artifact *)this,1);
  fVar6 = *(float *)(this + 0x5c);
  *(float *)(this + 100) = *(float *)(this + 100) + fVar3 * fVar4;
  if (fVar6 == 0.0) {
    fVar4 = (float)PVZ_EOT();
  }
  else {
    fVar4 = (float)PVZ_T();
    fVar4 = fVar4 + fVar6;
  }
  *(float *)(this + 0x70) = fVar4;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  fVar4 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar4 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,1,0);
    fVar4 = fVar4 * 0.01;
  }
  *(float *)(this + 0x2c) = fVar4;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  fVar4 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar4 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,1,0);
    fVar4 = fVar4 * 0.01;
  }
  *(float *)(this + 0x30) = fVar4;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGuitar::plantingReason(std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall ArtifactGuitar::plantingReason(ArtifactGuitar *this,vector *param_1)

{
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x68) == 1) {
    local_c = 0x4d;
    std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
              ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_1,
               (PlantingReason *)&local_c);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactGuitar::onGatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
ArtifactGuitar::onGatherPlantingRestrictions
          (ArtifactGuitar *this,Point *param_1,PlantType *param_2,vector *param_3)

{
  plantingReason(this,param_3);
  return;
}


/* ArtifactGuitar::onGatherPlantinglessRestrictions(Sexy::Point const&, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) */

void __thiscall
ArtifactGuitar::onGatherPlantinglessRestrictions
          (ArtifactGuitar *this,Point *param_1,vector *param_2)

{
  plantingReason(this,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGuitar::ArtifactGuitar() */

void __thiscall ArtifactGuitar::ArtifactGuitar(ArtifactGuitar *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  CBMemberTranslatorX aCStack_b0 [24];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate1<RenderQueue*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Artifact::Artifact((Artifact *)this);
  *(undefined ***)this = &PTR_GetClass_06692520;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x78));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantCreate);
  local_c0 = local_88;
  local_d0 = local_98;
  uStack_c8 = uStack_90;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<ArtifactGuitar,void(ArtifactGuitar::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantCreate,&local_d0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAddMusicalSuccessedCount);
  local_f0 = local_80;
  uStack_e8 = uStack_78;
  local_e0 = local_70;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<ArtifactGuitar,void(ArtifactGuitar::*)(int)>>
            ((MessageRouter *)puVar1,Message::AddMusicalSuccessedCount,&local_f0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGatherPlantinglessRestrictions);
  local_100 = local_58;
  local_110 = local_68;
  uStack_108 = uStack_60;
  MessageRouter::
  Subscribe<Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<ArtifactGuitar,void(ArtifactGuitar::*)(Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
            ((MessageRouter *)puVar1,Message::GatherPlantlessPlantingRestrictions,&local_110);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGatherPlantingRestrictions);
  local_130 = local_50;
  uStack_128 = uStack_48;
  local_120 = local_40;
  MessageRouter::
  Subscribe<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<ArtifactGuitar,void(ArtifactGuitar::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
            ((MessageRouter *)puVar1,Message::GatherPlantingRestrictions,&local_130);
  pLVar2 = (LevelModuleManager *)FUN_03723d28(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (pLVar2 != (LevelModuleManager *)0x0) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,addForegroundToRenderQueue);
    Sexy::Delegate1<RenderQueue*>::Delegate1<ArtifactGuitar,void(ArtifactGuitar::*)(RenderQueue*)>
              (aDStack_38,aCStack_b0);
    LevelModuleManager::RegisterAddToRenderQueue(pLVar2,aDStack_38);
  }
  reset(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactGuitar::StaticNew() */

ArtifactGuitar * ArtifactGuitar::StaticNew(void)

{
  ArtifactGuitar *this;
  
  this = ::operator_new(0xa8);
  ArtifactGuitar(this);
  return this;
}


/* ArtifactGuitar::SetEnd() */

void __thiscall ArtifactGuitar::SetEnd(ArtifactGuitar *this)

{
  setState(this,3);
  return;
}

