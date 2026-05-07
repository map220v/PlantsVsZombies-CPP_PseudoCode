// Class: RiftThemeEnergyFly


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeEnergyFly::StaticClassInit() */

void RiftThemeEnergyFly::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeEnergyFly");
    (*pcVar2)(plVar1,asStack_10,FUN_036ff3b4,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeEnergyFly::StaticGetClass() */

long * RiftThemeEnergyFly::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeEnergyFly",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeEnergyFly::GetClass() const */

long * RiftThemeEnergyFly::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeEnergyFly",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeEnergyFly::~RiftThemeEnergyFly() */

void __thiscall RiftThemeEnergyFly::~RiftThemeEnergyFly(RiftThemeEnergyFly *this)

{
  *(undefined ***)this = &PTR_GetClass_06688800;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  RiftTheme::~RiftTheme((RiftTheme *)this);
  return;
}


/* RiftThemeEnergyFly::~RiftThemeEnergyFly() */

void __thiscall RiftThemeEnergyFly::~RiftThemeEnergyFly(RiftThemeEnergyFly *this)

{
  ~RiftThemeEnergyFly(this);
  AK::FreeHook(this);
  return;
}


/* RiftThemeEnergyFly::RiftThemeEnergyFly() */

void __thiscall RiftThemeEnergyFly::RiftThemeEnergyFly(RiftThemeEnergyFly *this)

{
  RiftTheme::RiftTheme((RiftTheme *)this);
  *(undefined ***)this = &PTR_GetClass_06688800;
  return;
}


/* RiftThemeEnergyFly::StaticNew() */

RiftThemeEnergyFly * RiftThemeEnergyFly::StaticNew(void)

{
  RiftThemeEnergyFly *this;
  
  this = ::operator_new(0x20);
  RiftThemeEnergyFly(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeEnergyFly::handlePlantPlanted(Plant*) */

void RiftThemeEnergyFly::handlePlantPlanted(Plant *param_1)

{
  RtObject *this;
  RiftThemeEnergyFlyProperties *pRVar1;
  UISpacetimeEnergy *this_00;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pRVar1 = Sexy::RtObject::Cast<RiftThemeEnergyFlyProperties>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::string((string *)aRStack_10,"UISpacetimeEnergy");
  UIWidget::GetWidgetBySheetName((string *)aRStack_10);
  nop();
  std::string::~string((string *)aRStack_10);
  nop();
  if (this_00 == (UISpacetimeEnergy *)0x0) {
    fVar2 = 300.0;
  }
  else {
    fVar2 = (float)UISpacetimeEnergy::GetMaxValue(this_00);
  }
  PVZ1ModeUtils::TakeTimeEnergy(fVar2 * *(float *)(pRVar1 + 0x38));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeEnergyFly::onPlantPlanted(Plant*) */

void RiftThemeEnergyFly::onPlantPlanted(Plant *param_1)

{
  char cVar1;
  
  if (((*(long *)(gLawnApp + 0x9f0) == 0) ||
      (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) == '\0')) &&
     (cVar1 = PVZ1ModeUtils::IsPlayingPVZ1Level(), cVar1 != '\0')) {
    handlePlantPlanted(param_1);
    return;
  }
  return;
}


/* RiftThemeEnergyFly::Activate() */

void __thiscall RiftThemeEnergyFly::Activate(RiftThemeEnergyFly *this)

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
            ((ReceivedDataCallback *)this,onPlantPlanted);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<RiftThemeEnergyFly,void(RiftThemeEnergyFly::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantPlanted,&local_40);
  return;
}

