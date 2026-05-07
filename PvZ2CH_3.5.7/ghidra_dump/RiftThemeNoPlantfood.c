// Class: RiftThemeNoPlantfood


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeNoPlantfood::StaticClassInit() */

void RiftThemeNoPlantfood::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeNoPlantfood");
    (*pcVar2)(plVar1,asStack_10,FUN_036f98f8,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeNoPlantfood::StaticGetClass() */

long * RiftThemeNoPlantfood::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeNoPlantfood",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeNoPlantfood::GetClass() const */

long * RiftThemeNoPlantfood::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeNoPlantfood",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeNoPlantfood::~RiftThemeNoPlantfood() */

void __thiscall RiftThemeNoPlantfood::~RiftThemeNoPlantfood(RiftThemeNoPlantfood *this)

{
  *(undefined ***)this = &PTR_GetClass_06686e30;
  RiftTheme::~RiftTheme((RiftTheme *)this);
  return;
}


/* RiftThemeNoPlantfood::~RiftThemeNoPlantfood() */

void __thiscall RiftThemeNoPlantfood::~RiftThemeNoPlantfood(RiftThemeNoPlantfood *this)

{
  ~RiftThemeNoPlantfood(this);
  AK::FreeHook(this);
  return;
}


/* RiftThemeNoPlantfood::RiftThemeNoPlantfood() */

void __thiscall RiftThemeNoPlantfood::RiftThemeNoPlantfood(RiftThemeNoPlantfood *this)

{
  RiftTheme::RiftTheme((RiftTheme *)this);
  *(undefined ***)this = &PTR_GetClass_06686e30;
  return;
}


/* RiftThemeNoPlantfood::StaticNew() */

RiftThemeNoPlantfood * RiftThemeNoPlantfood::StaticNew(void)

{
  RiftThemeNoPlantfood *this;
  
  this = ::operator_new(0x20);
  RiftThemeNoPlantfood(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeNoPlantfood::CanApplyPlantfood(Plant*) */

void __thiscall RiftThemeNoPlantfood::CanApplyPlantfood(RiftThemeNoPlantfood *this,Plant *param_1)

{
  byte bVar1;
  long extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 == (Plant *)0x0) || (this[0x18] == (RiftThemeNoPlantfood)0x0)) {
    bVar1 = 1;
  }
  else {
    EntityComponent_GroundEffect::GetEffect();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    bVar1 = PlantRestrictionSet::IsIncluded((Plant *)(extraout_x0 + 0x20));
    bVar1 = bVar1 ^ 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}

