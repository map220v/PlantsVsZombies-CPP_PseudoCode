// Class: PoolBoardUDWater


/* PoolBoardUDWater::SetSplashHorizontalMinDistances(float, float) */

void __thiscall
PoolBoardUDWater::SetSplashHorizontalMinDistances
          (PoolBoardUDWater *this,float param_1,float param_2)

{
  *(float *)(this + 0x24) = param_1;
  *(float *)(this + 0x28) = param_2;
  return;
}


/* PoolBoardUDWater::~PoolBoardUDWater() */

void __thiscall PoolBoardUDWater::~PoolBoardUDWater(PoolBoardUDWater *this)

{
  *(undefined ***)this = &PTR_GetClass_067973c0;
  BoardRegion::~BoardRegion((BoardRegion *)this);
  return;
}


/* PoolBoardUDWater::~PoolBoardUDWater() */

void __thiscall PoolBoardUDWater::~PoolBoardUDWater(PoolBoardUDWater *this)

{
  ~PoolBoardUDWater(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PoolBoardUDWater::StaticClassInit() */

void PoolBoardUDWater::StaticClassInit(void)

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
    std::string::string(asStack_10,"PoolBoardUDWater");
    (*pcVar2)(plVar1,asStack_10,FUN_03f1df28,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PoolBoardUDWater::StaticGetClass() */

long * PoolBoardUDWater::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PoolBoardUDWater",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PoolBoardUDWater::GetClass() const */

long * PoolBoardUDWater::GetClass(void)

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
  (*pcVar3)(plVar1,"PoolBoardUDWater",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PoolBoardUDWater::PoolBoardUDWater() */

void __thiscall PoolBoardUDWater::PoolBoardUDWater(PoolBoardUDWater *this)

{
  BoardRegion::BoardRegion((BoardRegion *)this);
  *(undefined ***)this = &PTR_GetClass_067973c0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  SporeshroomSubsystem::RecordSporeshroomLevel((SporeshroomSubsystem *)this,0);
  return;
}


/* PoolBoardUDWater::StaticNew() */

PoolBoardUDWater * PoolBoardUDWater::StaticNew(void)

{
  PoolBoardUDWater *this;
  
  this = ::operator_new(0x30);
  PoolBoardUDWater(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PoolBoardUDWater::DoEntityEnteredEffects(Sexy::SexyVector3 const&, BoardEntity*) */

void PoolBoardUDWater::DoEntityEnteredEffects(SexyVector3 *param_1,BoardEntity *param_2)

{
  int iVar1;
  undefined4 uVar2;
  Effect_PopAnim *this;
  ResourceInfo *pRVar3;
  RtClass *pRVar4;
  void *pvVar5;
  AudioMgr *this_00;
  char *pcVar6;
  string asStack_38 [8];
  RtWeakPtr aRStack_30 [8];
  Vec3 aVStack_28 [16];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3(aVStack_28,-95.0,-110.0,0.0);
  EATextSquish::Vec3::Vec3(aVStack_18,*(float *)param_2,*(float *)(param_2 + 4),0.0);
  EATextSquish::Vec3::operator+=(aVStack_18,aVStack_28);
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_38,"POPANIM_EFFECTS_PLANT_DROWNING");
  GetPAMByName(asStack_38);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_30);
  pRVar4 = (RtClass *)PopAnimRig::StaticGetClass();
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar3,pRVar4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  std::string::~string(asStack_38);
  nop();
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aVStack_18,-1);
  iVar1 = BoardTransforms::BoardSpaceToGridYUnbounded(*(float *)(param_2 + 4));
  uVar2 = Board::MakeGroundRenderOrder(iVar1,0);
  FUN_03f1cf5c(this + 0x1c,uVar2);
  std::string::string((string *)aRStack_30,"ANIMATION");
  Effect_PopAnim::PlaySingleAnimation(this,aRStack_30,2);
  std::string::~string((string *)aRStack_30);
  nop();
  pvVar5 = (void *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::RegisterForAudio(pvVar5);
  this_00 = (AudioMgr *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendPositionalAudioValue(this_00,this,(SexyVector3 *)param_2);
  pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar6,"Play_Plant_Water_Splash");
  pvVar5 = (void *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::UnregisterForAudio(pvVar5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

