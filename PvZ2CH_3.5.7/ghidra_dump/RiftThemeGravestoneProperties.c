// Class: RiftThemeGravestoneProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeGravestoneProperties::StaticClassInit() */

void RiftThemeGravestoneProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeGravestoneProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03707a08,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeGravestoneProperties::StaticGetClass() */

long * RiftThemeGravestoneProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeGravestoneProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeGravestoneProperties::GetClass() const */

long * RiftThemeGravestoneProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeGravestoneProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeGravestoneProperties::RiftThemeGravestoneProperties() */

void __thiscall
RiftThemeGravestoneProperties::RiftThemeGravestoneProperties(RiftThemeGravestoneProperties *this)

{
  RiftThemeProperties::RiftThemeProperties((RiftThemeProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06687ab0;
  ZombieRestrictionSet::ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x20));
  return;
}


/* RiftThemeGravestoneProperties::StaticNew() */

RiftThemeGravestoneProperties * RiftThemeGravestoneProperties::StaticNew(void)

{
  RiftThemeGravestoneProperties *this;
  
  this = ::operator_new(0x48);
  RiftThemeGravestoneProperties(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeGravestoneProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
RiftThemeGravestoneProperties::GatherResourceRequirements
          (RiftThemeGravestoneProperties *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Game_Tombstones_Dynamic");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Egypt_Gravestone");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"ZombieEgyptTombRaiserGroup");
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


/* RiftThemeGravestoneProperties::~RiftThemeGravestoneProperties() */

void __thiscall
RiftThemeGravestoneProperties::~RiftThemeGravestoneProperties(RiftThemeGravestoneProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06687ab0;
  ZombieRestrictionSet::~ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x20));
  RiftThemeProperties::~RiftThemeProperties((RiftThemeProperties *)this);
  return;
}


/* RiftThemeGravestoneProperties::~RiftThemeGravestoneProperties() */

void __thiscall
RiftThemeGravestoneProperties::~RiftThemeGravestoneProperties(RiftThemeGravestoneProperties *this)

{
  ~RiftThemeGravestoneProperties(this);
  AK::FreeHook(this);
  return;
}

