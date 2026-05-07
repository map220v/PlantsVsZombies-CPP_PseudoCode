// Class: RiftThemeBuffPlantFastCD


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeBuffPlantFastCD::StaticClassInit() */

void RiftThemeBuffPlantFastCD::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeBuffPlantFastCD");
    (*pcVar2)(plVar1,asStack_10,FUN_036fd478,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeBuffPlantFastCD::StaticGetClass() */

long * RiftThemeBuffPlantFastCD::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeBuffPlantFastCD",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeBuffPlantFastCD::GetClass() const */

long * RiftThemeBuffPlantFastCD::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeBuffPlantFastCD",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeBuffPlantFastCD::~RiftThemeBuffPlantFastCD() */

void __thiscall RiftThemeBuffPlantFastCD::~RiftThemeBuffPlantFastCD(RiftThemeBuffPlantFastCD *this)

{
  *(undefined ***)this = &PTR_GetClass_06687ed0;
  RiftTheme::~RiftTheme((RiftTheme *)this);
  return;
}


/* RiftThemeBuffPlantFastCD::~RiftThemeBuffPlantFastCD() */

void __thiscall RiftThemeBuffPlantFastCD::~RiftThemeBuffPlantFastCD(RiftThemeBuffPlantFastCD *this)

{
  ~RiftThemeBuffPlantFastCD(this);
  AK::FreeHook(this);
  return;
}


/* RiftThemeBuffPlantFastCD::RiftThemeBuffPlantFastCD() */

void __thiscall RiftThemeBuffPlantFastCD::RiftThemeBuffPlantFastCD(RiftThemeBuffPlantFastCD *this)

{
  RiftTheme::RiftTheme((RiftTheme *)this);
  *(undefined ***)this = &PTR_GetClass_06687ed0;
  return;
}


/* RiftThemeBuffPlantFastCD::StaticNew() */

RiftThemeBuffPlantFastCD * RiftThemeBuffPlantFastCD::StaticNew(void)

{
  RiftThemeBuffPlantFastCD *this;
  
  this = ::operator_new(0x20);
  RiftThemeBuffPlantFastCD(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeBuffPlantFastCD::CanReduceCD(Sexy::RtWeakPtr<PlantType const>) */

void __thiscall
RiftThemeBuffPlantFastCD::CanReduceCD(RiftThemeBuffPlantFastCD *this,RtWeakPtr *param_2)

{
  bool bVar1;
  undefined1 uVar2;
  long extraout_x0;
  ResourceInfo *pRVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x18] != (RiftThemeBuffPlantFastCD)0x0) {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
    if (bVar1) {
      EntityComponent_GroundEffect::GetEffect();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
      uVar2 = PlantRestrictionSet::IsIncluded
                        ((PlantRestrictionSet *)(extraout_x0 + 0x20),(PlantType *)pRVar3);
      goto LAB_03708418;
    }
  }
  uVar2 = 0;
LAB_03708418:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeBuffPlantFastCD::GetReducedCD(Sexy::RtWeakPtr<PlantType const>, float&) */

void __thiscall
RiftThemeBuffPlantFastCD::GetReducedCD
          (RiftThemeBuffPlantFastCD *this,RtWeakPtrBase *param_2,undefined4 *param_3)

{
  char cVar1;
  long extraout_x0;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  cVar1 = CanReduceCD(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (cVar1 != '\0') {
    EntityComponent_GroundEffect::GetEffect();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    *param_3 = *(undefined4 *)(extraout_x0 + 0x48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeBuffPlantFastCD::Activate() */

void __thiscall RiftThemeBuffPlantFastCD::Activate(RiftThemeBuffPlantFastCD *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long lStack_8;
  
  this[0x18] = (RiftThemeBuffPlantFastCD)0x1;
  lStack_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)FUN_036f7590(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (pLVar1 != (LevelModuleManager *)0x0) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0x88);
    Sexy::Delegate0::Delegate0<RiftTheme,void(RiftTheme::*)()>(aDStack_38,aCStack_50);
    LevelModuleManager::RegisterOnGameplayUpdate(pLVar1,aDStack_38);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

