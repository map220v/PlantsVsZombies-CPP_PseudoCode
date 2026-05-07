// Class: RiftThemeWatering


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeWatering::StaticClassInit() */

void RiftThemeWatering::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeWatering");
    (*pcVar2)(plVar1,asStack_10,FUN_0370291c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeWatering::StaticGetClass() */

long * RiftThemeWatering::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeWatering",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeWatering::GetClass() const */

long * RiftThemeWatering::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeWatering",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeWatering::~RiftThemeWatering() */

void __thiscall RiftThemeWatering::~RiftThemeWatering(RiftThemeWatering *this)

{
  *(undefined ***)this = &PTR_GetClass_06689770;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  RiftTheme::~RiftTheme((RiftTheme *)this);
  return;
}


/* RiftThemeWatering::~RiftThemeWatering() */

void __thiscall RiftThemeWatering::~RiftThemeWatering(RiftThemeWatering *this)

{
  ~RiftThemeWatering(this);
  AK::FreeHook(this);
  return;
}


/* RiftThemeWatering::RiftThemeWatering() */

void __thiscall RiftThemeWatering::RiftThemeWatering(RiftThemeWatering *this)

{
  RiftTheme::RiftTheme((RiftTheme *)this);
  *(undefined ***)this = &PTR_GetClass_06689770;
  return;
}


/* RiftThemeWatering::StaticNew() */

RiftThemeWatering * RiftThemeWatering::StaticNew(void)

{
  RiftThemeWatering *this;
  
  this = ::operator_new(0x20);
  RiftThemeWatering(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeWatering::onPlantCreate(Plant*) */

void __thiscall RiftThemeWatering::onPlantCreate(RiftThemeWatering *this,Plant *param_1)

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
    if (cVar1 == '\0') {
      Plant::SetInPvz1SleepAction(param_1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeWatering::Activate() */

void __thiscall RiftThemeWatering::Activate(RiftThemeWatering *this)

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
            ((ReceivedDataCallback *)this,onPlantCreate);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<RiftThemeWatering,void(RiftThemeWatering::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantCreate,&local_40);
  return;
}

