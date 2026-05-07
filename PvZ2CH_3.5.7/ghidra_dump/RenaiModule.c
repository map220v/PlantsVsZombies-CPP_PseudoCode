// Class: RenaiModule


/* RenaiModule::onFadedFinishedCallback(StandaloneEffect*) */

void RenaiModule::onFadedFinishedCallback(StandaloneEffect *param_1)

{
  Board::SetSoftPause(*(Board **)(gLawnApp + 0x9f0),false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaiModule::StaticClassInit() */

void RenaiModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"RenaiModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03d090d0,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RenaiModule::StaticGetClass() */

long * RenaiModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RenaiModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RenaiModule::SetupStatues() */

void __thiscall RenaiModule::SetupStatues(RenaiModule *this)

{
  ulong uVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  ulong uVar3;
  int *piVar4;
  long extraout_x0;
  undefined8 uVar5;
  ulong uVar6;
  
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar6 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(pRVar2 + 0x40);
    uVar3 = FUN_03d06170(uVar5,*(undefined8 *)(pRVar2 + 0x48));
    uVar1 = uVar6 + 1;
    if (uVar3 <= uVar6) break;
    piVar4 = (int *)FUN_03d061a0(uVar5,uVar6);
    Board::AddGridItem(*(Board **)(gLawnApp + 0x9f0),(string *)(piVar4 + 4),*piVar4,piVar4[1],1);
    nop();
    uVar6 = uVar1;
    if (extraout_x0 != 0) {
      FUN_03d0615c(extraout_x0 + 0x1c4,piVar4[2]);
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaiModule::SetupNightStatues() */

void __thiscall RenaiModule::SetupNightStatues(RenaiModule *this)

{
  int iVar1;
  int iVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  long extraout_x0;
  ulong uVar7;
  undefined8 uVar8;
  Board *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar7 = 0;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar8 = *(undefined8 *)(pRVar3 + 0x58);
  lVar4 = FUN_03d06170(uVar8,*(undefined8 *)(pRVar3 + 0x60));
  if (lVar4 != 0) {
    do {
      piVar5 = (int *)FUN_03d061a0(uVar8,uVar7);
      iVar1 = piVar5[1];
      iVar2 = *piVar5;
      this_00 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_10,"");
      lVar4 = Board::GetPlantAt(this_00,iVar2,iVar1,asStack_10);
      std::string::~string(asStack_10);
      nop();
      if (lVar4 == 0) {
        Board::AddGridItem(*(Board **)(gLawnApp + 0x9f0),(string *)(piVar5 + 4),*piVar5,piVar5[1],1)
        ;
        nop();
        if (extraout_x0 != 0) {
          FUN_03d0615c(extraout_x0 + 0x1c4,piVar5[2]);
        }
      }
      uVar7 = uVar7 + 1;
      uVar8 = *(undefined8 *)(pRVar3 + 0x58);
      uVar6 = FUN_03d06170(uVar8,*(undefined8 *)(pRVar3 + 0x60));
    } while (uVar7 < uVar6);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaiModule::gameplayStarted() */

void __thiscall RenaiModule::gameplayStarted(RenaiModule *this)

{
  bool bVar1;
  RtWeakPtrBase *pRVar2;
  GridItemRenaiTile *pGVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x38));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x38));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pRVar2 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar2);
    pGVar3 = (GridItemRenaiTile *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    GridItemRenaiTile::setState(pGVar3,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
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
/* RenaiModule::getDiffTileValue() */

void __thiscall RenaiModule::getDiffTileValue(RenaiModule *this)

{
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  GridItemRenaiTile *this_00;
  int iVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar4 = 0;
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x38));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x38));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar3);
    this_00 = (GridItemRenaiTile *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    cVar2 = GridItemRenaiTile::IsOccupied(this_00);
    if (cVar2 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      cVar2 = GridItemRenaiTile::IsLeftTile();
      if (cVar2 == '\0') {
        iVar4 = iVar4 + -1;
      }
      else {
        iVar4 = iVar4 + 1;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaiModule::MoveRollers(bool, int) */

void __thiscall RenaiModule::MoveRollers(RenaiModule *this,bool param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  GridItemRenaiRoller *pGVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar6 = 2;
  if (!param_1) {
    uVar6 = 3;
  }
  local_8 = ___stack_chk_guard;
  if (param_2 == 1) {
    uVar7 = 0;
  }
  else if (param_2 == 2) {
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
    if (2 < param_2) {
      uVar7 = 2;
    }
  }
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x20));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x20));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar3);
    pGVar4 = (GridItemRenaiRoller *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    cVar2 = GridItemRenaiRoller::canChangeState(pGVar4,uVar6);
    if (cVar2 != '\0') {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      FUN_03d06154(lVar5 + 0x1f8,uVar7);
      pGVar4 = (GridItemRenaiRoller *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      GridItemRenaiRoller::setState(pGVar4,uVar6);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
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
/* RenaiModule::CheatStopRollers() */

void __thiscall RenaiModule::CheatStopRollers(RenaiModule *this)

{
  bool bVar1;
  RtWeakPtrBase *pRVar2;
  GridItemRenaiRoller *this_00;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x20));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x20));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pRVar2 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar2);
    this_00 = (GridItemRenaiRoller *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    GridItemRenaiRoller::stopMoving(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RenaiModule::onTileStateChanged(bool) */

void RenaiModule::onTileStateChanged(bool param_1)

{
  int iVar1;
  RenaiModule *this;
  
  this = (RenaiModule *)(ulong)param_1;
  iVar1 = getDiffTileValue(this);
  if (0 < iVar1) {
    MoveRollers(this,true,iVar1);
    return;
  }
  if (iVar1 == 0) {
    CheatStopRollers(this);
    return;
  }
  MoveRollers(this,false,-iVar1);
  return;
}


/* RenaiModule::RenaiModule() */

void __thiscall RenaiModule::RenaiModule(RenaiModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06763360;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  return;
}


/* RenaiModule::StaticNew() */

RenaiModule * RenaiModule::StaticNew(void)

{
  RenaiModule *this;
  
  this = ::operator_new(0x50);
  RenaiModule(this);
  return this;
}


/* RenaiModule::SetupNightEffects() */

void RenaiModule::SetupNightEffects(void)

{
  RenaiStage *this;
  
  this = (RenaiStage *)FUN_03d07cd8(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (RenaiStage *)0x0) {
    RenaiStage::ActivateAnims(this);
    return;
  }
  return;
}


/* RenaiModule::TrySwitchToNight() */

void RenaiModule::TrySwitchToNight(void)

{
  AccessoryContent *this;
  
  this = (AccessoryContent *)FUN_03d07cd8(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (AccessoryContent *)0x0) {
    AccessoryContent::SetLevel(this,2);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaiModule::DayIntoNight() */

void RenaiModule::DayIntoNight(void)

{
  ResourceInfo *this;
  AnimationController *pAVar1;
  float fVar2;
  float fVar3;
  RtMixedPtr aRStack_20 [8];
  RtId aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::SetSoftPause(*(Board **)(gLawnApp + 0x9f0),true);
  this = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_
                   ((RtWeakPtr *)(*(long *)(gLawnApp + 0x9f0) + 0x898));
  fVar2 = (float)FUN_03d0614c(*(undefined4 *)(this + 0x10));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
  fVar3 = fVar2 + 1.0 + 1.0;
  std::string::string(asStack_10,"onShowNightWarning");
  pAVar1 = (AnimationController *)TimeEvent::Create(aRStack_18,asStack_10);
  AnimationMgr::Add((AnimationMgr *)this,pAVar1,fVar2);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtId::~RtId(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
  std::string::string(asStack_10,"onShowNightWarningSet");
  pAVar1 = (AnimationController *)TimeEvent::Create(aRStack_18,asStack_10);
  AnimationMgr::Add((AnimationMgr *)this,pAVar1,fVar2 + 1.0);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtId::~RtId(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
  std::string::string(asStack_10,"onShowNightWarningReady");
  pAVar1 = (AnimationController *)TimeEvent::Create(aRStack_18,asStack_10);
  AnimationMgr::Add((AnimationMgr *)this,pAVar1,fVar3);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtId::~RtId(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
  std::string::string(asStack_10,"onEnterFade");
  pAVar1 = (AnimationController *)TimeEvent::Create(aRStack_18,asStack_10);
  AnimationMgr::Add((AnimationMgr *)this,pAVar1,fVar3 + 2.0);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtId::~RtId(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RenaiModule::SetState(EnvironmentState) */

void __thiscall RenaiModule::SetState(RenaiModule *this,int param_2)

{
  if (*(int *)(this + 0x18) != param_2) {
    *(int *)(this + 0x18) = param_2;
    if (param_2 == 1) {
      DayIntoNight();
      return;
    }
    if (param_2 == 2) {
      TrySwitchToNight();
      return;
    }
  }
  return;
}


/* RenaiModule::onSwitchToNight() */

void __thiscall RenaiModule::onSwitchToNight(RenaiModule *this)

{
  SetState(this,2);
  SetupNightStatues(this);
  SetupNightEffects();
  return;
}


/* RenaiModule::onZombieSpawned(Zombie*) */

void RenaiModule::onZombieSpawned(Zombie *param_1)

{
  int iVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  
  iVar1 = FUN_03d06150(*(undefined4 *)(param_1 + 0x18));
  if (iVar1 == 0) {
    pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)param_1);
    iVar1 = Board::GetCurrentWave(*(Board **)(gLawnApp + 0x9f0));
    if ((*(int *)(pRVar2 + 0x70) <= iVar1) && (0 < *(int *)(pRVar2 + 0x70))) {
      SetState((RenaiModule *)param_1,1);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaiModule::onEnterFade() */

void RenaiModule::onEnterFade(void)

{
  ResourceInfo *this;
  StandaloneEffect *pSVar1;
  AnimationController *pAVar2;
  float fVar3;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  Insets aIStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_
                   ((RtWeakPtr *)(*(long *)(gLawnApp + 0x9f0) + 0x898));
  fVar3 = (float)FUN_03d0614c(*(undefined4 *)(this + 0x10));
  pSVar1 = (StandaloneEffect *)Effect_ScreenFade::Create();
  FUN_03d065f0(pSVar1 + 0x1c);
  Sexy::Insets::Insets(aIStack_60,0,0,0,0x80);
  Effect_ScreenFade::AddFade((Effect_ScreenFade *)0x3e99999a,0,0x3f800000,pSVar1,1,aIStack_60,2);
  Sexy::Insets::Insets(aIStack_60,0,0,0,0x80);
  Effect_ScreenFade::AddFade((Effect_ScreenFade *)0x3e19999a,0,0x3f800000,pSVar1,2,aIStack_60,2);
  Sexy::Insets::Insets(aIStack_60,0,0,0,0xff);
  Effect_ScreenFade::AddFade
            ((Effect_ScreenFade *)0x3e99999a,0x3f000000,0x3f400000,pSVar1,1,aIStack_60,2);
  Sexy::Insets::Insets(aIStack_60,0,0,0,0xbf);
  Effect_ScreenFade::AddFade((Effect_ScreenFade *)0x3e19999a,0,0x3f800000,pSVar1,2,aIStack_60,2);
  Sexy::Insets::Insets(aIStack_60,0,0,0,0xff);
  Effect_ScreenFade::AddFade
            ((Effect_ScreenFade *)0x3e99999a,0x3f400000,0x3f800000,pSVar1,1,aIStack_60,2);
  Sexy::Insets::Insets(aIStack_60,0,0,0,0xff);
  Effect_ScreenFade::AddFade((Effect_ScreenFade *)0x3fc00000,0,0x3f800000,pSVar1,2,aIStack_60,2);
  Sexy::Insets::Insets(aIStack_60,0,0,0,0xff);
  Effect_ScreenFade::AddFade((Effect_ScreenFade *)0x3f800000,0,0x3f800000,pSVar1,0,aIStack_60,2);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string((string *)aIStack_60,"onFadedFinishedCallback");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,aRStack_68,
             aIStack_60);
  StandaloneEffect::SetCompletionCallback(pSVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aIStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string((string *)aIStack_60,"onSwitchToNight");
  pAVar2 = (AnimationController *)TimeEvent::Create(aRStack_68,aIStack_60);
  AnimationMgr::Add((AnimationMgr *)this,pAVar2,fVar3 + 1.95);
  std::string::~string((string *)aIStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaiModule::ExecuteRenaiEvents() */

void __thiscall RenaiModule::ExecuteRenaiEvents(RenaiModule *this)

{
  undefined *this_00;
  int iVar1;
  UIWidget *this_01;
  long lVar2;
  UIWidget *this_02;
  ResilienceTutorialIntroProperties *pRVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIProgressBar");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_01 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_01,false);
  }
  std::string::string(asStack_10,"UIRenaiProgressBar");
  lVar2 = UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (lVar2 != 0) {
    std::string::string(asStack_10,"UIRenaiProgressBar");
    UIWidget::GetWidgetBySheetName(asStack_10);
    nop();
    std::string::~string(asStack_10);
    nop();
    if (this_02 != (UIWidget *)0x0) {
      UIWidget::SetVisible(this_02,true);
    }
  }
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  MessageRouter::Post<int,int>
            ((MessageRouter *)gMessageRouter,Message::SetMoonWaveNum,*(int *)(pRVar3 + 0x70));
  this_00 = gMessageRouter;
  iVar1 = Board::GetNumWaves(*(Board **)(gLawnApp + 0x9f0));
  MessageRouter::Post<int,int>((MessageRouter *)this_00,Message::SetTotalWaveCount,iVar1 + -1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RenaiModule::~RenaiModule() */

void __thiscall RenaiModule::~RenaiModule(RenaiModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06763360;
  std::vector<Sexy::RtWeakPtr<GridItemRenaiTile>,std::allocator<Sexy::RtWeakPtr<GridItemRenaiTile>>>
  ::~vector((vector<Sexy::RtWeakPtr<GridItemRenaiTile>,std::allocator<Sexy::RtWeakPtr<GridItemRenaiTile>>>
             *)(this + 0x38));
  std::
  vector<Sexy::RtWeakPtr<GridItemRenaiRoller>,std::allocator<Sexy::RtWeakPtr<GridItemRenaiRoller>>>
  ::~vector((vector<Sexy::RtWeakPtr<GridItemRenaiRoller>,std::allocator<Sexy::RtWeakPtr<GridItemRenaiRoller>>>
             *)(this + 0x20));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* RenaiModule::~RenaiModule() */

void __thiscall RenaiModule::~RenaiModule(RenaiModule *this)

{
  ~RenaiModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaiModule::onShowNightWarning() */

void RenaiModule::onShowNightWarning(void)

{
  char *pcVar1;
  Board *pBVar2;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  FUN_05478178(auStack_10,L"[WARNING_RENAI_NIGHT_1]",auStack_18);
  Board::DisplayAdviceAgain(pBVar2,auStack_10,0x18,0);
  FUN_05476c50(auStack_10);
  nop();
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Game_Wave_Ready_x1");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaiModule::onShowNightWarningSet() */

void RenaiModule::onShowNightWarningSet(void)

{
  char *pcVar1;
  Board *pBVar2;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  FUN_05478178(auStack_10,L"[WARNING_RENAI_NIGHT_2]",auStack_18);
  Board::DisplayAdviceAgain(pBVar2,auStack_10,0x18,0);
  FUN_05476c50(auStack_10);
  nop();
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Game_Wave_Set");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaiModule::onShowNightWarningReady() */

void RenaiModule::onShowNightWarningReady(void)

{
  char *pcVar1;
  Board *pBVar2;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  FUN_05478178(auStack_10,L"[WARNING_RENAI_NIGHT_3]",auStack_18);
  Board::DisplayAdviceAgain(pBVar2,auStack_10,0x18,0);
  FUN_05476c50(auStack_10);
  nop();
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Game_Wave_Plant");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaiModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall RenaiModule::AddResourceRequirements(RenaiModule *this,set *param_1)

{
  ResilienceTutorialIntroProperties *pRVar1;
  ulong uVar2;
  string *psVar3;
  GridItemType *pGVar4;
  ulong uVar5;
  undefined8 uVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(pRVar1 + 0x40);
    uVar2 = FUN_03d06170(uVar6,*(undefined8 *)(pRVar1 + 0x48));
    if (uVar2 <= uVar5) break;
    FUN_03d061a0(uVar6,uVar5);
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
    ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar3);
    pGVar4 = (GridItemType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    GridItemType::AddResourceRequirements(pGVar4,param_1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    uVar5 = uVar5 + 1;
  }
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(pRVar1 + 0x58);
    uVar2 = FUN_03d06170(uVar6,*(undefined8 *)(pRVar1 + 0x60));
    if (uVar2 <= uVar5) break;
    FUN_03d061a0(uVar6,uVar5);
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
    ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar3);
    pGVar4 = (GridItemType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    GridItemType::AddResourceRequirements(pGVar4,param_1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    uVar5 = uVar5 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaiModule::onRollerDestroyed(GridItemRenaiRoller*) */

void __thiscall RenaiModule::onRollerDestroyed(RenaiModule *this,GridItemRenaiRoller *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x20);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_28 = FUN_03d08020(uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_10);
  if (bVar1) {
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_18,(__normal_iterator *)&local_28);
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_20);
    std::
    vector<Sexy::RtWeakPtr<GridItemRenaiRoller>,std::allocator<Sexy::RtWeakPtr<GridItemRenaiRoller>>>
    ::erase((vector<Sexy::RtWeakPtr<GridItemRenaiRoller>,std::allocator<Sexy::RtWeakPtr<GridItemRenaiRoller>>>
             *)this_00,local_18,local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaiModule::onLoadComplete() */

void __thiscall RenaiModule::onLoadComplete(RenaiModule *this)

{
  bool bVar1;
  undefined8 *puVar2;
  GridItemRenaiRoller *pGVar3;
  GridItemRenaiTile *pGVar4;
  RtObject *this_00;
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SetupStatues(this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesOnBoard(avStack_20,4);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    if (!bVar1) break;
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    this_00 = (RtObject *)*puVar2;
    pGVar3 = Sexy::RtObject::Cast<GridItemRenaiRoller>(this_00);
    if (pGVar3 != (GridItemRenaiRoller *)0x0) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_30);
      std::
      vector<Sexy::RtWeakPtr<GridItemRenaiRoller>,std::allocator<Sexy::RtWeakPtr<GridItemRenaiRoller>>>
      ::push_back((vector<Sexy::RtWeakPtr<GridItemRenaiRoller>,std::allocator<Sexy::RtWeakPtr<GridItemRenaiRoller>>>
                   *)(this + 0x20),(RtWeakPtr *)aRStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    }
    pGVar4 = Sexy::RtObject::Cast<GridItemRenaiTile>(this_00);
    if (pGVar4 != (GridItemRenaiTile *)0x0) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_30);
      std::
      vector<Sexy::RtWeakPtr<GridItemRenaiTile>,std::allocator<Sexy::RtWeakPtr<GridItemRenaiTile>>>
      ::push_back((vector<Sexy::RtWeakPtr<GridItemRenaiTile>,std::allocator<Sexy::RtWeakPtr<GridItemRenaiTile>>>
                   *)(this + 0x38),(RtWeakPtr *)aRStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  SetState(this);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaiModule::registerForEvents() */

void __thiscall RenaiModule::registerForEvents(RenaiModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  CBMemberTranslatorX aCStack_98 [24];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<RenaiModule,void(RenaiModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayStarted);
  Sexy::Delegate0::Delegate0<RenaiModule,void(RenaiModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieSpawned);
  local_c0 = local_80;
  uStack_b8 = uStack_78;
  local_b0 = local_70;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<RenaiModule,void(RenaiModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieAddedToBoard,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTileStateChanged);
  local_d0 = local_58;
  local_e0 = local_68;
  uStack_d8 = uStack_60;
  MessageRouter::Subscribe<bool,Sexy::CBMemberTranslatorX<RenaiModule,void(RenaiModule::*)(bool)>>
            ((MessageRouter *)puVar1,Message::NotifyRenaiTileState,&local_e0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRollerDestroyed);
  local_100 = local_50;
  uStack_f8 = uStack_48;
  local_f0 = local_40;
  MessageRouter::
  Subscribe<GridItemRenaiRoller*,Sexy::CBMemberTranslatorX<RenaiModule,void(RenaiModule::*)(GridItemRenaiRoller*)>>
            ((MessageRouter *)puVar1,Message::NotifyRollerDestroy,&local_100);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,ExecuteRenaiEvents);
  Sexy::Delegate0::Delegate0<RenaiModule,void(RenaiModule::*)()>(aDStack_38,aCStack_98);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ExecuteRenaiEvents,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

