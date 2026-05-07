// Class: RiftThemeBuffExploderProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeBuffExploderProperties::StaticClassInit() */

void RiftThemeBuffExploderProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeBuffExploderProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03706564,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeBuffExploderProperties::StaticGetClass() */

long * RiftThemeBuffExploderProperties::StaticGetClass(void)

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
  uVar2 = RiftThemeProperties::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemeBuffExploderProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeBuffExploderProperties::GetClass() const */

long * RiftThemeBuffExploderProperties::GetClass(void)

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
  uVar2 = RiftThemeProperties::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemeBuffExploderProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeBuffExploderProperties::RiftThemeBuffExploderProperties() */

void __thiscall
RiftThemeBuffExploderProperties::RiftThemeBuffExploderProperties
          (RiftThemeBuffExploderProperties *this)

{
  RiftThemeProperties::RiftThemeProperties((RiftThemeProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06687be0;
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0x20));
  return;
}


/* RiftThemeBuffExploderProperties::StaticNew() */

RiftThemeBuffExploderProperties * RiftThemeBuffExploderProperties::StaticNew(void)

{
  RiftThemeBuffExploderProperties *this;
  
  this = ::operator_new(0x50);
  RiftThemeBuffExploderProperties(this);
  return this;
}


/* RiftThemeBuffExploderProperties::~RiftThemeBuffExploderProperties() */

void __thiscall
RiftThemeBuffExploderProperties::~RiftThemeBuffExploderProperties
          (RiftThemeBuffExploderProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06687be0;
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x20));
  RiftThemeProperties::~RiftThemeProperties((RiftThemeProperties *)this);
  return;
}


/* RiftThemeBuffExploderProperties::~RiftThemeBuffExploderProperties() */

void __thiscall
RiftThemeBuffExploderProperties::~RiftThemeBuffExploderProperties
          (RiftThemeBuffExploderProperties *this)

{
  ~RiftThemeBuffExploderProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeBuffExploderProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
RiftThemeBuffExploderProperties::GatherResourceRequirements
          (RiftThemeBuffExploderProperties *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"PlantCherryBomb");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

