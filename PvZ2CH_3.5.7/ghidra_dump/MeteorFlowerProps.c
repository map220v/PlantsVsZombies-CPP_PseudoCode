// Class: MeteorFlowerProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MeteorFlowerProps::StaticClassInit() */

void MeteorFlowerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"MeteorFlowerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04d4a4c0,0x580,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MeteorFlowerProps::StaticGetClass() */

long * MeteorFlowerProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MeteorFlowerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MeteorFlowerProps::GetClass() const */

long * MeteorFlowerProps::GetClass(void)

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
  (*pcVar3)(plVar1,"MeteorFlowerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MeteorFlowerProps::MeteorFlowerProps() */

void __thiscall MeteorFlowerProps::MeteorFlowerProps(MeteorFlowerProps *this)

{
  undefined4 uVar1;
  
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_069b0880;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x2b8));
  ComponentWarmingRadiusProps::ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x2c0));
  ComponentWarmingRadiusProps::ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x3d8));
  ClassRestrictionSet::ClassRestrictionSet((ClassRestrictionSet *)(this + 0x4f0));
  *(undefined4 *)(this + 0x520) = 2;
  *(undefined4 *)(this + 0x524) = 5;
  uVar1 = _FUN_04d4c33c;
  *(undefined4 *)(this + 0x51c) = 0x40200000;
  *(undefined4 *)(this + 0x518) = uVar1;
  *(undefined4 *)(this + 0x528) = 0x40a00000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x530));
  *(undefined4 *)(this + 0x550) = 10;
  *(undefined4 *)(this + 0x548) = 0x3fc00000;
  *(undefined4 *)(this + 0x54c) = 0x40000000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x568));
  return;
}


/* MeteorFlowerProps::StaticNew() */

MeteorFlowerProps * MeteorFlowerProps::StaticNew(void)

{
  MeteorFlowerProps *this;
  
  this = ::operator_new(0x580);
  MeteorFlowerProps(this);
  return this;
}


/* MeteorFlowerProps::~MeteorFlowerProps() */

void __thiscall MeteorFlowerProps::~MeteorFlowerProps(MeteorFlowerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069b0880;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x568));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x530));
  ClassRestrictionSet::~ClassRestrictionSet((ClassRestrictionSet *)(this + 0x4f0));
  ComponentWarmingRadiusProps::~ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x3d8));
  ComponentWarmingRadiusProps::~ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x2c0));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* MeteorFlowerProps::~MeteorFlowerProps() */

void __thiscall MeteorFlowerProps::~MeteorFlowerProps(MeteorFlowerProps *this)

{
  ~MeteorFlowerProps(this);
  AK::FreeHook(this);
  return;
}

