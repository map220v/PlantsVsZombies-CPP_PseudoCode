// Class: RiftThemeBalloon


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeBalloon::StaticClassInit() */

void RiftThemeBalloon::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeBalloon");
    (*pcVar2)(plVar1,asStack_10,FUN_036fe7fc,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeBalloon::StaticGetClass() */

long * RiftThemeBalloon::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeBalloon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeBalloon::GetClass() const */

long * RiftThemeBalloon::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeBalloon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeBalloon::onGamePlayStarted() */

void __thiscall RiftThemeBalloon::onGamePlayStarted(RiftThemeBalloon *this)

{
  long extraout_x0;
  float fVar1;
  undefined4 uVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  fVar1 = (float)PVZ_T();
  uVar2 = *(undefined4 *)(extraout_x0 + 0x24);
  *(float *)(this + 0x1c) = fVar1 + 3.0;
  FUN_036f7584(uVar2,this + 0x48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeBalloon::RiftThemeBalloon() */

void __thiscall RiftThemeBalloon::RiftThemeBalloon(RiftThemeBalloon *this)

{
  RiftTheme::RiftTheme((RiftTheme *)this);
  *(undefined ***)this = &PTR_GetClass_06688470;
  BalloonDropper::BalloonDropper((BalloonDropper *)(this + 0x20));
  return;
}


/* RiftThemeBalloon::StaticNew() */

RiftThemeBalloon * RiftThemeBalloon::StaticNew(void)

{
  RiftThemeBalloon *this;
  
  this = ::operator_new(0x50);
  RiftThemeBalloon(this);
  return this;
}


/* RiftThemeBalloon::~RiftThemeBalloon() */

void __thiscall RiftThemeBalloon::~RiftThemeBalloon(RiftThemeBalloon *this)

{
  *(undefined ***)this = &PTR_GetClass_06688470;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  BalloonDropper::~BalloonDropper((BalloonDropper *)(this + 0x20));
  RiftTheme::~RiftTheme((RiftTheme *)this);
  return;
}


/* RiftThemeBalloon::~RiftThemeBalloon() */

void __thiscall RiftThemeBalloon::~RiftThemeBalloon(RiftThemeBalloon *this)

{
  ~RiftThemeBalloon(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeBalloon::Activate() */

void __thiscall RiftThemeBalloon::Activate(RiftThemeBalloon *this)

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
    Sexy::Delegate0::Delegate0<RiftThemeBalloon,void(RiftThemeBalloon::*)()>(aDStack_38,aCStack_50);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeBalloon::Update() */

void __thiscall RiftThemeBalloon::Update(RiftThemeBalloon *this)

{
  float fVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x1c) < fVar1) {
    BalloonDropper::Update();
    EntityComponent_GroundEffect::GetEffect();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    fVar1 = (float)PVZ_T();
    *(float *)(this + 0x1c) = fVar1 + 3.0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

