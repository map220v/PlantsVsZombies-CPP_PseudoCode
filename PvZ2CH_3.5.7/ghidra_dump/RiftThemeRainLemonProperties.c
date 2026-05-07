// Class: RiftThemeRainLemonProperties


/* RiftThemeRainLemonProperties::~RiftThemeRainLemonProperties() */

void __thiscall
RiftThemeRainLemonProperties::~RiftThemeRainLemonProperties(RiftThemeRainLemonProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06688180;
  RiftThemeProperties::~RiftThemeProperties((RiftThemeProperties *)this);
  return;
}


/* RiftThemeRainLemonProperties::~RiftThemeRainLemonProperties() */

void __thiscall
RiftThemeRainLemonProperties::~RiftThemeRainLemonProperties(RiftThemeRainLemonProperties *this)

{
  ~RiftThemeRainLemonProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeRainLemonProperties::StaticClassInit() */

void RiftThemeRainLemonProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeRainLemonProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_036fdb10,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeRainLemonProperties::StaticGetClass() */

long * RiftThemeRainLemonProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeRainLemonProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeRainLemonProperties::GetClass() const */

long * RiftThemeRainLemonProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeRainLemonProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeRainLemonProperties::RiftThemeRainLemonProperties() */

void __thiscall
RiftThemeRainLemonProperties::RiftThemeRainLemonProperties(RiftThemeRainLemonProperties *this)

{
  RiftThemeProperties::RiftThemeProperties((RiftThemeProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06688180;
  return;
}


/* RiftThemeRainLemonProperties::StaticNew() */

RiftThemeRainLemonProperties * RiftThemeRainLemonProperties::StaticNew(void)

{
  RiftThemeRainLemonProperties *this;
  
  this = ::operator_new(0x28);
  RiftThemeRainLemonProperties(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeRainLemonProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
RiftThemeRainLemonProperties::GatherResourceRequirements
          (RiftThemeRainLemonProperties *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"PlantLemon");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PlantCherryBomb");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PlantBoomFlower");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PlantMagicbeans");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PlantBanana");
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

