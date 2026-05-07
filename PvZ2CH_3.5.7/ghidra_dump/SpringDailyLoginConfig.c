// Class: SpringDailyLoginConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringDailyLoginConfig::StaticClassInit() */

void SpringDailyLoginConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"stSpringRewardInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03943414,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"stExPlantData");
    (*pcVar3)(plVar2,asStack_10,FUN_039432c0,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ExpPlantLoginData");
    (*pcVar3)(plVar2,asStack_10,FUN_0394356c,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"SpringDailyLoginConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_0394739c,0xa8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpringDailyLoginConfig::StaticGetClass() */

long * SpringDailyLoginConfig::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"SpringDailyLoginConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpringDailyLoginConfig::GetClass() const */

long * SpringDailyLoginConfig::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"SpringDailyLoginConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpringDailyLoginConfig::SpringDailyLoginConfig() */

void __thiscall SpringDailyLoginConfig::SpringDailyLoginConfig(SpringDailyLoginConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &PTR_GetClass_066cea50;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  Sexy::FlagsMod::FlagsMod((FlagsMod *)(this + 0x70));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x78));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x90));
  return;
}


/* SpringDailyLoginConfig::StaticNew() */

SpringDailyLoginConfig * SpringDailyLoginConfig::StaticNew(void)

{
  SpringDailyLoginConfig *this;
  
  this = ::operator_new(0xa8);
  SpringDailyLoginConfig(this);
  return this;
}


/* SpringDailyLoginConfig::~SpringDailyLoginConfig() */

void __thiscall SpringDailyLoginConfig::~SpringDailyLoginConfig(SpringDailyLoginConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_066cea50;
  std::vector<ExpPlantLoginData,std::allocator<ExpPlantLoginData>>::~vector
            ((vector<ExpPlantLoginData,std::allocator<ExpPlantLoginData>> *)(this + 0x90));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x78));
  std::vector<stExPlantData,std::allocator<stExPlantData>>::~vector
            ((vector<stExPlantData,std::allocator<stExPlantData>> *)(this + 0x58));
  std::
  vector<std::vector<stSpringRewardInfo,std::allocator<stSpringRewardInfo>>,std::allocator<std::vector<stSpringRewardInfo,std::allocator<stSpringRewardInfo>>>>
  ::~vector((vector<std::vector<stSpringRewardInfo,std::allocator<stSpringRewardInfo>>,std::allocator<std::vector<stSpringRewardInfo,std::allocator<stSpringRewardInfo>>>>
             *)(this + 0x40));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x28));
  std::vector<long,std::allocator<long>>::~vector
            ((vector<long,std::allocator<long>> *)(this + 0x10));
  nop();
  return;
}


/* SpringDailyLoginConfig::~SpringDailyLoginConfig() */

void __thiscall SpringDailyLoginConfig::~SpringDailyLoginConfig(SpringDailyLoginConfig *this)

{
  ~SpringDailyLoginConfig(this);
  AK::FreeHook(this);
  return;
}


/* SpringDailyLoginConfig::TEMPNAMEPLACEHOLDERVALUE(SpringDailyLoginConfig const&) */

SpringDailyLoginConfig * __thiscall
SpringDailyLoginConfig::operator=(SpringDailyLoginConfig *this,SpringDailyLoginConfig *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  this[0xc] = param_1[0xc];
  *(undefined4 *)(this + 8) = uVar1;
  std::vector<long,std::allocator<long>>::operator=
            ((vector<long,std::allocator<long>> *)(this + 0x10),(vector *)(param_1 + 0x10));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x28),(vector *)(param_1 + 0x28));
  std::
  vector<std::vector<stSpringRewardInfo,std::allocator<stSpringRewardInfo>>,std::allocator<std::vector<stSpringRewardInfo,std::allocator<stSpringRewardInfo>>>>
  ::operator=((vector<std::vector<stSpringRewardInfo,std::allocator<stSpringRewardInfo>>,std::allocator<std::vector<stSpringRewardInfo,std::allocator<stSpringRewardInfo>>>>
               *)(this + 0x40),(vector *)(param_1 + 0x40));
  std::vector<stExPlantData,std::allocator<stExPlantData>>::operator=
            ((vector<stExPlantData,std::allocator<stExPlantData>> *)(this + 0x58),
             (vector *)(param_1 + 0x58));
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_1 + 0x70);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x78),(vector *)(param_1 + 0x78));
  std::vector<ExpPlantLoginData,std::allocator<ExpPlantLoginData>>::operator=
            ((vector<ExpPlantLoginData,std::allocator<ExpPlantLoginData>> *)(this + 0x90),
             (vector *)(param_1 + 0x90));
  return this;
}

