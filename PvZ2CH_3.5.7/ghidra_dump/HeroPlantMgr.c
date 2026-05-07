// Class: HeroPlantMgr


/* HeroPlantMgr::~HeroPlantMgr() */

void __thiscall HeroPlantMgr::~HeroPlantMgr(HeroPlantMgr *this)

{
  *(undefined ***)this = &PTR__HeroPlantMgr_0682bdd0;
  Sexy::LazySingleton<HeroPlantMgr>::~LazySingleton((LazySingleton<HeroPlantMgr> *)this);
  return;
}


/* HeroPlantMgr::~HeroPlantMgr() */

void __thiscall HeroPlantMgr::~HeroPlantMgr(HeroPlantMgr *this)

{
  ~HeroPlantMgr(this);
  AK::FreeHook(this);
  return;
}


/* HeroPlantMgr::HeroPlantMgr() */

void __thiscall HeroPlantMgr::HeroPlantMgr(HeroPlantMgr *this)

{
  Sexy::LazySingleton<HeroPlantMgr>::LazySingleton((LazySingleton<HeroPlantMgr> *)this);
  *(undefined4 *)(this + 8) = 0;
  this[0x15] = (HeroPlantMgr)0x1;
  this[0x14] = (HeroPlantMgr)0x1;
  *(undefined ***)this = &PTR__HeroPlantMgr_0682bdd0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}


/* HeroPlantMgr::ResetLog() */

void __thiscall HeroPlantMgr::ResetLog(HeroPlantMgr *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  this[0x15] = (HeroPlantMgr)0x1;
  this[0x14] = (HeroPlantMgr)0x1;
  *(undefined4 *)(this + 0xc) = uVar1;
  return;
}


/* HeroPlantMgr::IsHeroPlantActivated() */

bool HeroPlantMgr::IsHeroPlantActivated(void)

{
  bool bVar1;
  LevelModuleManager *this;
  HeroPlantModule *pHVar2;
  
  bVar1 = false;
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    this = (LevelModuleManager *)FUN_042b799c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    if (this == (LevelModuleManager *)0x0) {
      return false;
    }
    pHVar2 = LevelModuleManager::GetModuleByClass<HeroPlantModule>(this);
    bVar1 = pHVar2 != (HeroPlantModule *)0x0;
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantMgr::CheckEnableHeroPlantModule() */

void HeroPlantMgr::CheckEnableHeroPlantModule(void)

{
  char cVar1;
  wchar16 *pwVar2;
  UnchartedBoostMgr *pUVar3;
  LineBreakCategory *pLVar4;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  float fVar5;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  pLVar4 = aLStack_18;
  local_8 = ___stack_chk_guard;
  pwVar2 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_10,"FreePlanting");
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar2,(wchar16 *)asStack_10,pLVar4,in_x3,in_x4);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 == '\0') {
    pUVar3 = (UnchartedBoostMgr *)Sexy::LazySingleton<UnchartedBoostMgr>::GetInstancePtr();
    fVar5 = (float)UnchartedBoostMgr::GetBoostValue(pUVar3,0,0x11,0);
    cVar1 = 0.0 < fVar5;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantMgr::AddHeroPlantModuleIfNeeded() */

void HeroPlantMgr::AddHeroPlantModuleIfNeeded(void)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  LevelModuleManager *pLVar4;
  RtId aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  RtId aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = CheckEnableHeroPlantModule();
  if (cVar1 != '\0') {
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    Sexy::RtName::RtName(aRStack_18,L"HeroPlantModuleProps");
    PVZDB::GetIdByAlias(aRStack_38,uVar3,0x14,aRStack_18);
    Sexy::RtName::~RtName(aRStack_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_30);
    if (bVar2) {
      pLVar4 = (LevelModuleManager *)
               FUN_042b799c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_30);
      LevelModuleManager::AddModuleFromProperties(pLVar4,aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    }
    cVar1 = LocalProfileSaveData::GetHeroPlantArmorflameIntroStatus();
    if (cVar1 == '\0') {
      uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
      Sexy::RtName::RtName(aRStack_18,L"HeroPlantIntroModuleProps");
      PVZDB::GetIdByAlias(aRStack_28,uVar3,0x14,aRStack_18);
      Sexy::RtName::~RtName(aRStack_18);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_20);
      if (bVar2) {
        pLVar4 = (LevelModuleManager *)
                 FUN_042b799c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_20);
        LevelModuleManager::AddModuleFromProperties(pLVar4,aRStack_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      Sexy::RtId::~RtId(aRStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_38);
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

