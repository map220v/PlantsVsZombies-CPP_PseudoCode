// Class: StandardLevelIntroProperties


/* StandardLevelIntroProperties::StandardLevelIntroProperties() */

void __thiscall
StandardLevelIntroProperties::StandardLevelIntroProperties(StandardLevelIntroProperties *this)

{
  IntroModuleProperties::IntroModuleProperties((IntroModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0684d5f0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  this[0x70] = (StandardLevelIntroProperties)0x0;
  *(undefined4 *)(this + 0x50) = 0xffffffff;
  *(undefined4 *)(this + 0x54) = 0xffffffff;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x48) = 0x40000000;
  *(undefined4 *)(this + 0x40) = 0x429c0000;
  *(undefined4 *)(this + 0x4c) = 0x40200000;
  *(undefined4 *)(this + 0x44) = 0x43ea0000;
  return;
}


/* StandardLevelIntroProperties::~StandardLevelIntroProperties() */

void __thiscall
StandardLevelIntroProperties::~StandardLevelIntroProperties(StandardLevelIntroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0684d5f0;
  std::vector<TutorialEntity,std::allocator<TutorialEntity>>::~vector
            ((vector<TutorialEntity,std::allocator<TutorialEntity>> *)(this + 0x58));
  IntroModuleProperties::~IntroModuleProperties((IntroModuleProperties *)this);
  return;
}


/* StandardLevelIntroProperties::~StandardLevelIntroProperties() */

void __thiscall
StandardLevelIntroProperties::~StandardLevelIntroProperties(StandardLevelIntroProperties *this)

{
  ~StandardLevelIntroProperties(this);
  AK::FreeHook(this);
  return;
}


/* StandardLevelIntroProperties::GetModuleClass() const */

long * StandardLevelIntroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (StandardLevelIntro::sClass != (long *)0x0) {
    return StandardLevelIntro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  StandardLevelIntro::sClass = plVar1;
  uVar2 = IntroModule::StaticGetClass();
  (*pcVar3)(plVar1,"StandardLevelIntro",uVar2,StandardLevelIntro::StaticNew);
  StandardLevelIntro::StaticClassInit();
  return StandardLevelIntro::sClass;
}


/* StandardLevelIntroProperties::StaticNew() */

StandardLevelIntroProperties * StandardLevelIntroProperties::StaticNew(void)

{
  StandardLevelIntroProperties *this;
  
  this = ::operator_new(0x78);
  StandardLevelIntroProperties(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StandardLevelIntroProperties::StaticClassInit() */

void StandardLevelIntroProperties::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 local_38 [2];
  pair<std::string,unsigned_int> apStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"none",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"rift",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"PreSeedchooserFlowType");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"TutorialEntity");
    (*pcVar3)(plVar2,avStack_20,FUN_0446f8d4,0x18,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"StandardLevelIntroProperties");
    (*pcVar3)(plVar2,avStack_20,FUN_04471eac,0x78,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StandardLevelIntroProperties::StaticGetClass() */

long * StandardLevelIntroProperties::StaticGetClass(void)

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
  uVar2 = IntroModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"StandardLevelIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StandardLevelIntroProperties::GetClass() const */

long * StandardLevelIntroProperties::GetClass(void)

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
  uVar2 = IntroModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"StandardLevelIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

