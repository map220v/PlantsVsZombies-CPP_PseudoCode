// Class: RiftThemeFastSpellProperties


/* RiftThemeFastSpellProperties::~RiftThemeFastSpellProperties() */

void __thiscall
RiftThemeFastSpellProperties::~RiftThemeFastSpellProperties(RiftThemeFastSpellProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06689350;
  RiftThemeProperties::~RiftThemeProperties((RiftThemeProperties *)this);
  return;
}


/* RiftThemeFastSpellProperties::~RiftThemeFastSpellProperties() */

void __thiscall
RiftThemeFastSpellProperties::~RiftThemeFastSpellProperties(RiftThemeFastSpellProperties *this)

{
  ~RiftThemeFastSpellProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeFastSpellProperties::StaticClassInit() */

void RiftThemeFastSpellProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeFastSpellProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03701b30,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeFastSpellProperties::StaticGetClass() */

long * RiftThemeFastSpellProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeFastSpellProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeFastSpellProperties::GetClass() const */

long * RiftThemeFastSpellProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeFastSpellProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeFastSpellProperties::RiftThemeFastSpellProperties() */

void __thiscall
RiftThemeFastSpellProperties::RiftThemeFastSpellProperties(RiftThemeFastSpellProperties *this)

{
  RiftThemeProperties::RiftThemeProperties((RiftThemeProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06689350;
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


/* RiftThemeFastSpellProperties::StaticNew() */

RiftThemeFastSpellProperties * RiftThemeFastSpellProperties::StaticNew(void)

{
  RiftThemeFastSpellProperties *this;
  
  this = ::operator_new(0x28);
  RiftThemeFastSpellProperties(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeFastSpellProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
RiftThemeFastSpellProperties::GatherResourceRequirements
          (RiftThemeFastSpellProperties *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Egypt_Gravestone");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Game_Tombstones_Dynamic");
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

