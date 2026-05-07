// Class: BoardRegionDeepWater


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardRegionDeepWater::StaticClassInit() */

void BoardRegionDeepWater::StaticClassInit(void)

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
    std::string::string(asStack_10,"BoardRegionDeepWater");
    (*pcVar2)(plVar1,asStack_10,FUN_03f1903c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardRegionDeepWater::StaticGetClass() */

long * BoardRegionDeepWater::StaticGetClass(void)

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
  uVar2 = BoardRegion::StaticGetClass();
  (*pcVar3)(plVar1,"BoardRegionDeepWater",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoardRegionDeepWater::GetClass() const */

long * BoardRegionDeepWater::GetClass(void)

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
  uVar2 = BoardRegion::StaticGetClass();
  (*pcVar3)(plVar1,"BoardRegionDeepWater",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoardRegionDeepWater::~BoardRegionDeepWater() */

void __thiscall BoardRegionDeepWater::~BoardRegionDeepWater(BoardRegionDeepWater *this)

{
  *(undefined ***)this = &PTR_GetClass_06796e60;
  BoardRegion::~BoardRegion((BoardRegion *)this);
  return;
}


/* BoardRegionDeepWater::~BoardRegionDeepWater() */

void __thiscall BoardRegionDeepWater::~BoardRegionDeepWater(BoardRegionDeepWater *this)

{
  ~BoardRegionDeepWater(this);
  AK::FreeHook(this);
  return;
}


/* BoardRegionDeepWater::BoardRegionDeepWater() */

void __thiscall BoardRegionDeepWater::BoardRegionDeepWater(BoardRegionDeepWater *this)

{
  BoardRegion::BoardRegion((BoardRegion *)this);
  *(undefined ***)this = &PTR_GetClass_06796e60;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  SporeshroomSubsystem::RecordSporeshroomLevel((SporeshroomSubsystem *)this,1);
  return;
}


/* BoardRegionDeepWater::StaticNew() */

BoardRegionDeepWater * BoardRegionDeepWater::StaticNew(void)

{
  BoardRegionDeepWater *this;
  
  this = ::operator_new(0x30);
  BoardRegionDeepWater(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardRegionDeepWater::DoEntityEnteredEffects(Sexy::SexyVector3 const&, BoardEntity*) */

void BoardRegionDeepWater::DoEntityEnteredEffects(SexyVector3 *param_1,BoardEntity *param_2)

{
  int iVar1;
  undefined4 uVar2;
  Effect_PopAnim *this;
  ResourceInfo *pRVar3;
  RtClass *pRVar4;
  void *pvVar5;
  AudioMgr *this_00;
  char *pcVar6;
  float local_50;
  float local_4c;
  string asStack_48 [8];
  RtWeakPtr aRStack_40 [8];
  Vec3 aVStack_38 [16];
  Vec3 aVStack_28 [16];
  float local_18 [2];
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_50,*(float *)param_2,*(float *)(param_2 + 4));
  BoardRegion::GetRegion();
  local_18[0] = *(float *)(param_1 + 0x24) + local_18[0];
  local_10 = (local_10 - *(float *)(param_1 + 0x24)) - *(float *)(param_1 + 0x28);
  Sexy::TRect<float>::Clamp((TRect<float> *)local_18,(SexyVector2 *)&local_50,0.0,0.0);
  EATextSquish::Vec3::Vec3(aVStack_38,-95.0,-90.0,0.0);
  EATextSquish::Vec3::Vec3(aVStack_28,local_50,local_4c,0.0);
  EATextSquish::Vec3::operator+=(aVStack_28,aVStack_38);
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_48,"POPANIM_EFFECTS_WATER_SPLASH");
  GetPAMByName(asStack_48);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_40);
  pRVar4 = (RtClass *)EffectAnimRig_WaterSplash::StaticGetClass();
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar3,pRVar4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  std::string::~string(asStack_48);
  nop();
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aVStack_28,-1);
  iVar1 = BoardTransforms::BoardSpaceToGridYUnbounded(local_4c);
  uVar2 = Board::MakeGroundRenderOrder(iVar1,0);
  FUN_03f18ab8(this + 0x1c,uVar2);
  iVar1 = Sexy::Rand(2);
  if (iVar1 == 0) {
    pcVar6 = "water_splash_01";
  }
  else {
    pcVar6 = "water_splash_02";
  }
  std::string::string((string *)aRStack_40,pcVar6);
  nop();
  Effect_PopAnim::PlaySingleAnimation(this,aRStack_40,0);
  pvVar5 = (void *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::RegisterForAudio(pvVar5);
  this_00 = (AudioMgr *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendPositionalAudioValue(this_00,this,(SexyVector3 *)param_2);
  pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar6,"Play_Zombie_Splash");
  pvVar5 = (void *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::UnregisterForAudio(pvVar5);
  std::string::~string((string *)aRStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

