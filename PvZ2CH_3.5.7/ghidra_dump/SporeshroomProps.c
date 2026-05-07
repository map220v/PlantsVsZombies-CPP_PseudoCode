// Class: SporeshroomProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SporeshroomProps::StaticClassInit() */

void SporeshroomProps::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"SpawnItemRecord");
    (*pcVar3)(plVar2,asStack_10,FUN_0416e4c8,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"SporeshroomProps");
    (*pcVar3)(plVar2,asStack_10,FUN_0416fba0,0x360,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SporeshroomProps::StaticGetClass() */

long * SporeshroomProps::StaticGetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"SporeshroomProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SporeshroomProps::GetClass() const */

long * SporeshroomProps::GetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"SporeshroomProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SporeshroomProps::SporeshroomProps() */

void __thiscall SporeshroomProps::SporeshroomProps(SporeshroomProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067f4870;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2b8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2d0));
  ZombieRestrictionSet::ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x2e8));
  PultProjectileProps::PultProjectileProps((PultProjectileProps *)(this + 0x310));
  PultProjectileProps::PultProjectileProps((PultProjectileProps *)(this + 0x338));
  return;
}


/* SporeshroomProps::StaticNew() */

SporeshroomProps * SporeshroomProps::StaticNew(void)

{
  SporeshroomProps *this;
  
  this = ::operator_new(0x360);
  SporeshroomProps(this);
  return this;
}


/* SporeshroomProps::~SporeshroomProps() */

void __thiscall SporeshroomProps::~SporeshroomProps(SporeshroomProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067f4870;
  PultProjectileProps::~PultProjectileProps((PultProjectileProps *)(this + 0x338));
  PultProjectileProps::~PultProjectileProps((PultProjectileProps *)(this + 0x310));
  ZombieRestrictionSet::~ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x2e8));
  std::vector<SpawnItemRecord,std::allocator<SpawnItemRecord>>::~vector
            ((vector<SpawnItemRecord,std::allocator<SpawnItemRecord>> *)(this + 0x2d0));
  std::vector<SpawnItemRecord,std::allocator<SpawnItemRecord>>::~vector
            ((vector<SpawnItemRecord,std::allocator<SpawnItemRecord>> *)(this + 0x2b8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* SporeshroomProps::~SporeshroomProps() */

void __thiscall SporeshroomProps::~SporeshroomProps(SporeshroomProps *this)

{
  ~SporeshroomProps(this);
  AK::FreeHook(this);
  return;
}

