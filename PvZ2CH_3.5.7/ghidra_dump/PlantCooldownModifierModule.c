// Class: PlantCooldownModifierModule


/* PlantCooldownModifierModule::StaticGetClass() */

long * PlantCooldownModifierModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantCooldownModifierModule",uVar2,StaticNew);
  return sClass;
}


/* PlantCooldownModifierModule::PlantCooldownModifierModule() */

void __thiscall
PlantCooldownModifierModule::PlantCooldownModifierModule(PlantCooldownModifierModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06686270;
  return;
}


/* PlantCooldownModifierModule::StaticNew() */

PlantCooldownModifierModule * PlantCooldownModifierModule::StaticNew(void)

{
  PlantCooldownModifierModule *this;
  
  this = ::operator_new(0x18);
  PlantCooldownModifierModule(this);
  return this;
}


/* PlantCooldownModifierModule::~PlantCooldownModifierModule() */

void __thiscall
PlantCooldownModifierModule::~PlantCooldownModifierModule(PlantCooldownModifierModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06686270;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* PlantCooldownModifierModule::~PlantCooldownModifierModule() */

void __thiscall
PlantCooldownModifierModule::~PlantCooldownModifierModule(PlantCooldownModifierModule *this)

{
  ~PlantCooldownModifierModule(this);
  AK::FreeHook(this);
  return;
}


/* PlantCooldownModifierModule::GetCooldownMultiplier(Sexy::RtWeakPtr<PlantType const>) */

undefined4 __thiscall
PlantCooldownModifierModule::GetCooldownMultiplier
          (PlantCooldownModifierModule *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  bool bVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  long lVar3;
  undefined4 uVar4;
  
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  bVar1 = std::operator!=((string *)(lVar3 + 0x38),"");
  uVar4 = 0x3f800000;
  if (!bVar1) {
    uVar4 = *(undefined4 *)(pRVar2 + 0x48);
  }
  return uVar4;
}

