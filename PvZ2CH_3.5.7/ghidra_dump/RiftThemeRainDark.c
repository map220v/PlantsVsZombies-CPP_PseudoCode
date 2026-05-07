// Class: RiftThemeRainDark


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeRainDark::StaticClassInit() */

void RiftThemeRainDark::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeRainDark");
    (*pcVar2)(plVar1,asStack_10,FUN_036fbd88,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeRainDark::StaticGetClass() */

long * RiftThemeRainDark::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeRainDark",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeRainDark::GetClass() const */

long * RiftThemeRainDark::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeRainDark",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeRainDark::enterDarkness(float) */

void RiftThemeRainDark::enterDarkness(float param_1)

{
  long lVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Effect_ScreenFade::Create();
  FUN_036f7560(lVar1 + 0x1c,650000);
  Sexy::Insets::Insets(aIStack_18,0xff,0xff,0xfa,0xff);
  Effect_ScreenFade::AddFade
            ((Effect_ScreenFade *)0x3e570a3d,0x3e99999a,0x3f800000,lVar1,0,aIStack_18,2);
  Sexy::Insets::Insets(aIStack_18,0xff,0xff,0xfa,0);
  Effect_ScreenFade::AddFade((Effect_ScreenFade *)0x3d23d70a,0,0x3f800000,lVar1,2,aIStack_18,2);
  Sexy::Insets::Insets(aIStack_18,0xff,0xff,0xfa,0xff);
  Effect_ScreenFade::AddFade
            ((Effect_ScreenFade *)0x3e570a3d,0x3e800000,0x3f800000,lVar1,0,aIStack_18,2);
  Sexy::Insets::Insets(aIStack_18,0xff,0xff,0xfa,0);
  Effect_ScreenFade::AddFade((Effect_ScreenFade *)0x3d23d70a,0,0x3f800000,lVar1,2,aIStack_18,2);
  Sexy::Insets::Insets(aIStack_18,0xff,0xff,0xfa,0xff);
  Effect_ScreenFade::AddFade
            ((Effect_ScreenFade *)0x3e570a3d,0x3e4ccccd,0x3f800000,lVar1,0,aIStack_18,2);
  Sexy::Insets::Insets(aIStack_18,0xff,0xff,0xfa,0);
  Effect_ScreenFade::AddFade((Effect_ScreenFade *)0x3d23d70a,0,0x3f800000,lVar1,2,aIStack_18,2);
  Sexy::Insets::Insets(aIStack_18,0xff,0xff,0xfa,0xff);
  Effect_ScreenFade::AddFade
            ((Effect_ScreenFade *)0x3e570a3d,0x3e19999a,0x3f800000,lVar1,0,aIStack_18,2);
  Sexy::Insets::Insets(aIStack_18,0xff,0xff,0xfa,0);
  Effect_ScreenFade::AddFade((Effect_ScreenFade *)0x3f000000,0,0x3f800000,lVar1,2,aIStack_18,2);
  Sexy::Insets::Insets(aIStack_18,0,0,0,0xff);
  Effect_ScreenFade::AddFade((Effect_ScreenFade *)0x3f800000,0,0x3f800000,lVar1,1,aIStack_18,2);
  Sexy::Insets::Insets(aIStack_18,0,0,0,0xff);
  Effect_ScreenFade::AddFade((Effect_ScreenFade *)param_1,0,0x3f800000,lVar1,2,aIStack_18,2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeRainDark::~RiftThemeRainDark() */

void __thiscall RiftThemeRainDark::~RiftThemeRainDark(RiftThemeRainDark *this)

{
  *(undefined ***)this = &PTR_GetClass_066878e0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  RiftTheme::~RiftTheme((RiftTheme *)this);
  return;
}


/* RiftThemeRainDark::~RiftThemeRainDark() */

void __thiscall RiftThemeRainDark::~RiftThemeRainDark(RiftThemeRainDark *this)

{
  ~RiftThemeRainDark(this);
  AK::FreeHook(this);
  return;
}


/* RiftThemeRainDark::RiftThemeRainDark() */

void __thiscall RiftThemeRainDark::RiftThemeRainDark(RiftThemeRainDark *this)

{
  RiftTheme::RiftTheme((RiftTheme *)this);
  *(undefined ***)this = &PTR_GetClass_066878e0;
  RainDropper::RainDropper((RainDropper *)(this + 0x24));
  return;
}


/* RiftThemeRainDark::StaticNew() */

RiftThemeRainDark * RiftThemeRainDark::StaticNew(void)

{
  RiftThemeRainDark *this;
  
  this = ::operator_new(0x40);
  RiftThemeRainDark(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeRainDark::Update() */

void __thiscall RiftThemeRainDark::Update(RiftThemeRainDark *this)

{
  long extraout_x0;
  float fVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RainDropper::Update((RainDropper *)(this + 0x24));
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x20) < fVar1) {
    RainDropper::Start((RainDropper *)(this + 0x24),1.5,100);
    fVar1 = (float)PVZ_T();
    *(float *)(this + 0x20) = fVar1 + 1.5;
  }
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x1c) < fVar1) {
    EntityComponent_GroundEffect::GetEffect();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    enterDarkness(*(float *)(extraout_x0 + 0x24));
    fVar1 = (float)PVZ_T();
    *(float *)(this + 0x1c) = fVar1 + *(float *)(extraout_x0 + 0x20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeRainDark::onGamePlayStarted() */

void __thiscall RiftThemeRainDark::onGamePlayStarted(RiftThemeRainDark *this)

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
/* RiftThemeRainDark::Activate() */

void __thiscall RiftThemeRainDark::Activate(RiftThemeRainDark *this)

{
  LevelModuleManager *pLVar1;
  undefined4 uVar2;
  float fVar3;
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
    Sexy::Delegate0::Delegate0<RiftThemeRainDark,void(RiftThemeRainDark::*)()>
              (aDStack_38,aCStack_50);
    LevelModuleManager::RegisterOnGameplayStarted(pLVar1,aDStack_38);
  }
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x1c) = uVar2;
  fVar3 = (float)PVZ_T();
  *(float *)(this + 0x20) = fVar3 + 1.5;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

