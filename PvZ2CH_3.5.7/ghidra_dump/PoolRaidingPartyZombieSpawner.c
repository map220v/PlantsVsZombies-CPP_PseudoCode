// Class: PoolRaidingPartyZombieSpawner


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PoolRaidingPartyZombieSpawner::spawnWaveEffect() */

void PoolRaidingPartyZombieSpawner::spawnWaveEffect(void)

{
  long lVar1;
  Effect_BeachWaterWave *this;
  ResourceInfo *pRVar2;
  int local_50;
  int local_4c;
  float local_48;
  float local_44;
  Insets aIStack_38 [16];
  float local_28 [4];
  RtWeakPtr aRStack_18 [4];
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_38);
  lVar1 = Board::FindRegionWithFlags(*(Board **)(gLawnApp + 0x9f0),2);
  if (lVar1 != 0) {
    this = Board::AddEffect<Effect_BeachWaterWave>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string((string *)local_28,"POPANIM_BACKGROUNDS_WAVE_BIG");
    GetPAMByName((string *)local_28);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
    Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this,(PopAnim *)pRVar2,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    std::string::~string((string *)local_28);
    nop();
    Effect_PopAnim::SetCentered((Effect_PopAnim *)this,true);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_48,300.0,260.0,0.0);
    BoardRegion::GetRegion();
    BoardRegion::GetRegion();
    Sexy::Point::Point((Point *)&local_50,(int)local_28[0],(int)local_14);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)aRStack_18,(float)local_50 + local_48,(float)local_4c + local_44,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_18,-1);
    std::string::string((string *)aRStack_18,"wave_crash");
    Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this,aRStack_18,0);
    std::string::~string((string *)aRStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PoolRaidingPartyZombieSpawner::StaticClassInit() */

void PoolRaidingPartyZombieSpawner::StaticClassInit(void)

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
    std::string::string(asStack_10,"PoolRaidingPartyZombieSpawner");
    (*pcVar2)(plVar1,asStack_10,FUN_03f1dd14,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PoolRaidingPartyZombieSpawner::StaticGetClass() */

long * PoolRaidingPartyZombieSpawner::StaticGetClass(void)

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
  uVar2 = ZombieSpawnerAction::StaticGetClass();
  (*pcVar3)(plVar1,"PoolRaidingPartyZombieSpawner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PoolRaidingPartyZombieSpawner::GetClass() const */

long * PoolRaidingPartyZombieSpawner::GetClass(void)

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
  uVar2 = ZombieSpawnerAction::StaticGetClass();
  (*pcVar3)(plVar1,"PoolRaidingPartyZombieSpawner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PoolRaidingPartyZombieSpawner::PoolRaidingPartyZombieSpawner() */

void __thiscall
PoolRaidingPartyZombieSpawner::PoolRaidingPartyZombieSpawner(PoolRaidingPartyZombieSpawner *this)

{
  ZombieSpawnerAction::ZombieSpawnerAction((ZombieSpawnerAction *)this);
  *(undefined ***)this = &PTR_GetClass_067972f0;
  return;
}


/* PoolRaidingPartyZombieSpawner::StaticNew() */

PoolRaidingPartyZombieSpawner * PoolRaidingPartyZombieSpawner::StaticNew(void)

{
  PoolRaidingPartyZombieSpawner *this;
  
  this = ::operator_new(0x18);
  PoolRaidingPartyZombieSpawner(this);
  return this;
}


/* PoolRaidingPartyZombieSpawner::~PoolRaidingPartyZombieSpawner() */

void __thiscall
PoolRaidingPartyZombieSpawner::~PoolRaidingPartyZombieSpawner(PoolRaidingPartyZombieSpawner *this)

{
  *(undefined ***)this = &PTR_GetClass_067972f0;
  ZombieSpawnerAction::~ZombieSpawnerAction((ZombieSpawnerAction *)this);
  return;
}


/* PoolRaidingPartyZombieSpawner::~PoolRaidingPartyZombieSpawner() */

void __thiscall
PoolRaidingPartyZombieSpawner::~PoolRaidingPartyZombieSpawner(PoolRaidingPartyZombieSpawner *this)

{
  ~PoolRaidingPartyZombieSpawner(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PoolRaidingPartyZombieSpawner::WaveStart(int, WaveType::WaveType, bool, Sexy::MTRand&) */

void PoolRaidingPartyZombieSpawner::WaveStart(void)

{
  long lVar1;
  Effect_BeachWaterWave *this;
  ResourceInfo *pRVar2;
  int iStack_50;
  int iStack_4c;
  float fStack_48;
  float fStack_44;
  Insets aIStack_38 [16];
  float afStack_28 [4];
  RtWeakPtr aRStack_18 [4];
  float fStack_14;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_38);
  lVar1 = Board::FindRegionWithFlags(*(Board **)(gLawnApp + 0x9f0),2);
  if (lVar1 != 0) {
    this = Board::AddEffect<Effect_BeachWaterWave>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string((string *)afStack_28,"POPANIM_BACKGROUNDS_WAVE_BIG");
    GetPAMByName((string *)afStack_28);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
    Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this,(PopAnim *)pRVar2,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    std::string::~string((string *)afStack_28);
    nop();
    Effect_PopAnim::SetCentered((Effect_PopAnim *)this,true);
    EATextSquish::Vec3::Vec3((Vec3 *)&fStack_48,300.0,260.0,0.0);
    BoardRegion::GetRegion();
    BoardRegion::GetRegion();
    Sexy::Point::Point((Point *)&iStack_50,(int)afStack_28[0],(int)fStack_14);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)aRStack_18,(float)iStack_50 + fStack_48,(float)iStack_4c + fStack_44,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_18,-1);
    std::string::string((string *)aRStack_18,"wave_crash");
    Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this,aRStack_18,0);
    std::string::~string((string *)aRStack_18);
    nop();
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

