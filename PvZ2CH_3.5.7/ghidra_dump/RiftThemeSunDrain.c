// Class: RiftThemeSunDrain


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeSunDrain::StaticClassInit() */

void RiftThemeSunDrain::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeSunDrain");
    (*pcVar2)(plVar1,asStack_10,FUN_036fb790,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeSunDrain::StaticGetClass() */

long * RiftThemeSunDrain::StaticGetClass(void)

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
  uVar2 = RiftTheme::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemeSunDrain",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeSunDrain::GetClass() const */

long * RiftThemeSunDrain::GetClass(void)

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
  uVar2 = RiftTheme::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemeSunDrain",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeSunDrain::drainSun(int) */

void __thiscall RiftThemeSunDrain::drainSun(RiftThemeSunDrain *this,int param_1)

{
  int iVar1;
  Board *this_00;
  
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  iVar1 = Board::GetSunCurrency(this_00);
  if (iVar1 < param_1) {
    return;
  }
  Board::TakeSunMoney(this_00,param_1,false,true);
  return;
}


/* RiftThemeSunDrain::~RiftThemeSunDrain() */

void __thiscall RiftThemeSunDrain::~RiftThemeSunDrain(RiftThemeSunDrain *this)

{
  *(undefined ***)this = &PTR_GetClass_066877b0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  RiftTheme::~RiftTheme((RiftTheme *)this);
  return;
}


/* RiftThemeSunDrain::~RiftThemeSunDrain() */

void __thiscall RiftThemeSunDrain::~RiftThemeSunDrain(RiftThemeSunDrain *this)

{
  ~RiftThemeSunDrain(this);
  AK::FreeHook(this);
  return;
}


/* RiftThemeSunDrain::RiftThemeSunDrain() */

void __thiscall RiftThemeSunDrain::RiftThemeSunDrain(RiftThemeSunDrain *this)

{
  RiftTheme::RiftTheme((RiftTheme *)this);
  *(undefined ***)this = &PTR_GetClass_066877b0;
  return;
}


/* RiftThemeSunDrain::StaticNew() */

RiftThemeSunDrain * RiftThemeSunDrain::StaticNew(void)

{
  RiftThemeSunDrain *this;
  
  this = ::operator_new(0x20);
  RiftThemeSunDrain(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeSunDrain::Update() */

void __thiscall RiftThemeSunDrain::Update(RiftThemeSunDrain *this)

{
  long extraout_x0;
  float fVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x1c) < fVar1) {
    EntityComponent_GroundEffect::GetEffect();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    drainSun(this,*(int *)(extraout_x0 + 0x28));
    fVar1 = (float)PVZ_T();
    *(float *)(this + 0x1c) = fVar1 + *(float *)(extraout_x0 + 0x24);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeSunDrain::onGamePlayStarted() */

void __thiscall RiftThemeSunDrain::onGamePlayStarted(RiftThemeSunDrain *this)

{
  bool bVar1;
  long extraout_x0;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  fVar2 = (float)PVZ_T();
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(this + 0x1c) = fVar2 + *(float *)(extraout_x0 + 0x20);
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeSunDrain::Activate() */

void __thiscall RiftThemeSunDrain::Activate(RiftThemeSunDrain *this)

{
  LevelModuleManager *pLVar1;
  undefined4 uVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RiftTheme::Activate((RiftTheme *)this);
  pLVar1 = (LevelModuleManager *)FUN_036f7590(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (pLVar1 != (LevelModuleManager *)0x0) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onGamePlayStarted);
    Sexy::Delegate0::Delegate0<RiftThemeSunDrain,void(RiftThemeSunDrain::*)()>
              (aDStack_38,aCStack_50);
    LevelModuleManager::RegisterOnGameplayStarted(pLVar1,aDStack_38);
  }
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x1c) = uVar2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

