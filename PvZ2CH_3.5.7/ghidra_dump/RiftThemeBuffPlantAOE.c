// Class: RiftThemeBuffPlantAOE


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeBuffPlantAOE::StaticClassInit() */

void RiftThemeBuffPlantAOE::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeBuffPlantAOE");
    (*pcVar2)(plVar1,asStack_10,FUN_036fd130,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeBuffPlantAOE::StaticGetClass() */

long * RiftThemeBuffPlantAOE::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeBuffPlantAOE",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeBuffPlantAOE::GetClass() const */

long * RiftThemeBuffPlantAOE::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeBuffPlantAOE",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeBuffPlantAOE::~RiftThemeBuffPlantAOE() */

void __thiscall RiftThemeBuffPlantAOE::~RiftThemeBuffPlantAOE(RiftThemeBuffPlantAOE *this)

{
  *(undefined ***)this = &PTR_GetClass_06687da0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  RiftTheme::~RiftTheme((RiftTheme *)this);
  return;
}


/* RiftThemeBuffPlantAOE::~RiftThemeBuffPlantAOE() */

void __thiscall RiftThemeBuffPlantAOE::~RiftThemeBuffPlantAOE(RiftThemeBuffPlantAOE *this)

{
  ~RiftThemeBuffPlantAOE(this);
  AK::FreeHook(this);
  return;
}


/* RiftThemeBuffPlantAOE::RiftThemeBuffPlantAOE() */

void __thiscall RiftThemeBuffPlantAOE::RiftThemeBuffPlantAOE(RiftThemeBuffPlantAOE *this)

{
  RiftTheme::RiftTheme((RiftTheme *)this);
  *(undefined ***)this = &PTR_GetClass_06687da0;
  return;
}


/* RiftThemeBuffPlantAOE::StaticNew() */

RiftThemeBuffPlantAOE * RiftThemeBuffPlantAOE::StaticNew(void)

{
  RiftThemeBuffPlantAOE *this;
  
  this = ::operator_new(0x20);
  RiftThemeBuffPlantAOE(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeBuffPlantAOE::OnCreatePlant(Plant*) */

void __thiscall RiftThemeBuffPlantAOE::OnCreatePlant(RiftThemeBuffPlantAOE *this,Plant *param_1)

{
  char cVar1;
  long extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Plant *)0x0) {
    EntityComponent_GroundEffect::GetEffect();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    cVar1 = PlantRestrictionSet::IsIncluded((Plant *)(extraout_x0 + 0x20));
    if (cVar1 != '\0') {
      Plant::SetExtraLevelDamge(param_1,*(float *)(extraout_x0 + 0x48));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeBuffPlantAOE::CanReduceSunCost(std::string const&) */

void RiftThemeBuffPlantAOE::CanReduceSunCost(string *param_1)

{
  bool bVar1;
  char cVar2;
  string *psVar3;
  long extraout_x0;
  ResourceInfo *pRVar4;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = '\0';
  if (param_1[0x18] != (string)0x0) {
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
    if (bVar1) {
      EntityComponent_GroundEffect::GetEffect();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
      cVar2 = PlantRestrictionSet::IsIncluded
                        ((PlantRestrictionSet *)(extraout_x0 + 0x20),(PlantType *)pRVar4);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
        goto LAB_0370ef28;
      }
    }
    cVar2 = '\0';
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
LAB_0370ef28:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeBuffPlantAOE::GetReducedSunCost(std::string const&, int&) */

void __thiscall
RiftThemeBuffPlantAOE::GetReducedSunCost(RiftThemeBuffPlantAOE *this,string *param_1,int *param_2)

{
  char cVar1;
  long extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = CanReduceSunCost((string *)this);
  if (cVar1 != '\0') {
    EntityComponent_GroundEffect::GetEffect();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    *param_2 = (int)((float)*param_2 * *(float *)(extraout_x0 + 0x4c));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeBuffPlantAOE::Activate() */

void __thiscall RiftThemeBuffPlantAOE::Activate(RiftThemeBuffPlantAOE *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  RiftTheme::Activate((RiftTheme *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnCreatePlant);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<RiftThemeBuffPlantAOE,void(RiftThemeBuffPlantAOE::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantCreate,&local_40);
  return;
}

