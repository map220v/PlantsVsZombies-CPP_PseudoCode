// Class: LevelMutatorSunDropperModule


/* LevelMutatorSunDropperModule::StaticGetClass() */

long * LevelMutatorSunDropperModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelMutatorSunDropperModule",uVar2,StaticNew);
  return sClass;
}


/* LevelMutatorSunDropperModule::LevelMutatorSunDropperModule() */

void __thiscall
LevelMutatorSunDropperModule::LevelMutatorSunDropperModule(LevelMutatorSunDropperModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06680230;
  return;
}


/* LevelMutatorSunDropperModule::StaticNew() */

LevelMutatorSunDropperModule * LevelMutatorSunDropperModule::StaticNew(void)

{
  LevelMutatorSunDropperModule *this;
  
  this = ::operator_new(0x18);
  LevelMutatorSunDropperModule(this);
  return this;
}


/* LevelMutatorSunDropperModule::~LevelMutatorSunDropperModule() */

void __thiscall
LevelMutatorSunDropperModule::~LevelMutatorSunDropperModule(LevelMutatorSunDropperModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06680230;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* LevelMutatorSunDropperModule::~LevelMutatorSunDropperModule() */

void __thiscall
LevelMutatorSunDropperModule::~LevelMutatorSunDropperModule(LevelMutatorSunDropperModule *this)

{
  ~LevelMutatorSunDropperModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelMutatorSunDropperModule::GetLevelModuleOverride() */

void __thiscall
LevelMutatorSunDropperModule::GetLevelModuleOverride(LevelMutatorSunDropperModule *this)

{
  CompiledMap *this_00;
  char cVar1;
  bool bVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  RtObject *this_01;
  SunDropperProperties *pSVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  this_00 = (CompiledMap *)(pRVar3 + 0x40);
  cVar1 = Sexy::CompiledMap::Initialized(this_00);
  if (cVar1 == '\0') {
    pSVar4 = (SunDropperProperties *)0x0;
  }
  else {
    pSVar4 = (SunDropperProperties *)0x0;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)this_00);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_18);
    if (bVar2) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)this_00);
      this_01 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      pSVar4 = Sexy::RtObject::Cast<SunDropperProperties>(this_01);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pSVar4);
}

