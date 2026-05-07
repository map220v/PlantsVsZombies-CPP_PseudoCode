// Class: RiftThemePiggyBankProperties


/* RiftThemePiggyBankProperties::~RiftThemePiggyBankProperties() */

void __thiscall
RiftThemePiggyBankProperties::~RiftThemePiggyBankProperties(RiftThemePiggyBankProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06688510;
  RiftThemeProperties::~RiftThemeProperties((RiftThemeProperties *)this);
  return;
}


/* RiftThemePiggyBankProperties::~RiftThemePiggyBankProperties() */

void __thiscall
RiftThemePiggyBankProperties::~RiftThemePiggyBankProperties(RiftThemePiggyBankProperties *this)

{
  ~RiftThemePiggyBankProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemePiggyBankProperties::StaticClassInit() */

void RiftThemePiggyBankProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemePiggyBankProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_036fea90,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemePiggyBankProperties::StaticGetClass() */

long * RiftThemePiggyBankProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemePiggyBankProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemePiggyBankProperties::GetClass() const */

long * RiftThemePiggyBankProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemePiggyBankProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemePiggyBankProperties::RiftThemePiggyBankProperties() */

void __thiscall
RiftThemePiggyBankProperties::RiftThemePiggyBankProperties(RiftThemePiggyBankProperties *this)

{
  RiftThemeProperties::RiftThemeProperties((RiftThemeProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06688510;
  return;
}


/* RiftThemePiggyBankProperties::StaticNew() */

RiftThemePiggyBankProperties * RiftThemePiggyBankProperties::StaticNew(void)

{
  RiftThemePiggyBankProperties *this;
  
  this = ::operator_new(0x20);
  RiftThemePiggyBankProperties(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemePiggyBankProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
RiftThemePiggyBankProperties::GatherResourceRequirements
          (RiftThemePiggyBankProperties *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Tombstone_Dark_Effects");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Tombstone_Dark_Special");
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

