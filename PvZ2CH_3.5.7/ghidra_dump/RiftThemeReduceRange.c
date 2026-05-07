// Class: RiftThemeReduceRange


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeReduceRange::StaticClassInit() */

void RiftThemeReduceRange::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeReduceRange");
    (*pcVar2)(plVar1,asStack_10,FUN_036f9f88,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeReduceRange::StaticGetClass() */

long * RiftThemeReduceRange::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeReduceRange",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeReduceRange::GetClass() const */

long * RiftThemeReduceRange::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeReduceRange",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeReduceRange::~RiftThemeReduceRange() */

void __thiscall RiftThemeReduceRange::~RiftThemeReduceRange(RiftThemeReduceRange *this)

{
  *(undefined ***)this = &PTR_GetClass_06687090;
  RiftTheme::~RiftTheme((RiftTheme *)this);
  return;
}


/* RiftThemeReduceRange::~RiftThemeReduceRange() */

void __thiscall RiftThemeReduceRange::~RiftThemeReduceRange(RiftThemeReduceRange *this)

{
  ~RiftThemeReduceRange(this);
  AK::FreeHook(this);
  return;
}


/* RiftThemeReduceRange::RiftThemeReduceRange() */

void __thiscall RiftThemeReduceRange::RiftThemeReduceRange(RiftThemeReduceRange *this)

{
  RiftTheme::RiftTheme((RiftTheme *)this);
  *(undefined ***)this = &PTR_GetClass_06687090;
  return;
}


/* RiftThemeReduceRange::StaticNew() */

RiftThemeReduceRange * RiftThemeReduceRange::StaticNew(void)

{
  RiftThemeReduceRange *this;
  
  this = ::operator_new(0x20);
  RiftThemeReduceRange(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeReduceRange::syncProps() */

void RiftThemeReduceRange::syncProps(void)

{
  long extraout_x0;
  undefined4 local_38;
  undefined1 local_34;
  ZombieRestrictionSet aZStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  PlantReducedRangeData::PlantReducedRangeData
            ((PlantReducedRangeData *)&local_38,
             (PlantReducedRangeData *)(*(long *)(gLawnApp + 0x9f0) + 0xdd8));
  local_38 = *(undefined4 *)(extraout_x0 + 0x48);
  ZombieRestrictionSet::operator=(aZStack_30,(ZombieRestrictionSet *)(extraout_x0 + 0x20));
  local_34 = 1;
  PlantReducedRangeData::operator=
            ((PlantReducedRangeData *)(*(long *)(gLawnApp + 0x9f0) + 0xdd8),
             (PlantReducedRangeData *)&local_38);
  PlantReducedRangeData::~PlantReducedRangeData((PlantReducedRangeData *)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeReduceRange::Activate() */

void __thiscall RiftThemeReduceRange::Activate(RiftThemeReduceRange *this)

{
  RiftTheme::Activate((RiftTheme *)this);
  syncProps();
  return;
}

