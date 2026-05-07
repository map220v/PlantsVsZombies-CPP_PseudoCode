// Class: RiftThemeBlizzardProperties


/* RiftThemeBlizzardProperties::~RiftThemeBlizzardProperties() */

void __thiscall
RiftThemeBlizzardProperties::~RiftThemeBlizzardProperties(RiftThemeBlizzardProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06687980;
  RiftThemeProperties::~RiftThemeProperties((RiftThemeProperties *)this);
  return;
}


/* RiftThemeBlizzardProperties::~RiftThemeBlizzardProperties() */

void __thiscall
RiftThemeBlizzardProperties::~RiftThemeBlizzardProperties(RiftThemeBlizzardProperties *this)

{
  ~RiftThemeBlizzardProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeBlizzardProperties::StaticClassInit() */

void RiftThemeBlizzardProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeBlizzardProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_036fc354,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeBlizzardProperties::StaticGetClass() */

long * RiftThemeBlizzardProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeBlizzardProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeBlizzardProperties::GetClass() const */

long * RiftThemeBlizzardProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeBlizzardProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeBlizzardProperties::RiftThemeBlizzardProperties() */

void __thiscall
RiftThemeBlizzardProperties::RiftThemeBlizzardProperties(RiftThemeBlizzardProperties *this)

{
  RiftThemeProperties::RiftThemeProperties((RiftThemeProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06687980;
  return;
}


/* RiftThemeBlizzardProperties::StaticNew() */

RiftThemeBlizzardProperties * RiftThemeBlizzardProperties::StaticNew(void)

{
  RiftThemeBlizzardProperties *this;
  
  this = ::operator_new(0x28);
  RiftThemeBlizzardProperties(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeBlizzardProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
RiftThemeBlizzardProperties::GatherResourceRequirements
          (RiftThemeBlizzardProperties *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"PlantMonotropa");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"FreezonEffectGroup");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"FrostbiteIceBlockPlantGroup");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"FrostbiteHeatGroup");
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

