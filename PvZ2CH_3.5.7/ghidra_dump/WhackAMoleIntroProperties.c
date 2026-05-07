// Class: WhackAMoleIntroProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackAMoleIntroProperties::StaticClassInit() */

void WhackAMoleIntroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"MoleNonSpawnData");
    (*pcVar3)(plVar2,asStack_10,FUN_03b5068c,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"WhackAMoleIntroProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_03b5318c,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WhackAMoleIntroProperties::StaticGetClass() */

long * WhackAMoleIntroProperties::StaticGetClass(void)

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
  uVar2 = StandardLevelIntroProperties::StaticGetClass();
  (*pcVar3)(plVar1,"WhackAMoleIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WhackAMoleIntroProperties::GetClass() const */

long * WhackAMoleIntroProperties::GetClass(void)

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
  uVar2 = StandardLevelIntroProperties::StaticGetClass();
  (*pcVar3)(plVar1,"WhackAMoleIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WhackAMoleIntroProperties::GetModuleClass() const */

long * WhackAMoleIntroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (WhackAMoleIntro::sClass != (long *)0x0) {
    return WhackAMoleIntro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  WhackAMoleIntro::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"WhackAMoleIntro",uVar2,WhackAMoleIntro::StaticNew);
  WhackAMoleIntro::StaticClassInit();
  return WhackAMoleIntro::sClass;
}


/* WhackAMoleIntroProperties::WhackAMoleIntroProperties() */

void __thiscall
WhackAMoleIntroProperties::WhackAMoleIntroProperties(WhackAMoleIntroProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06732f70;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x78));
  return;
}


/* WhackAMoleIntroProperties::StaticNew() */

WhackAMoleIntroProperties * WhackAMoleIntroProperties::StaticNew(void)

{
  WhackAMoleIntroProperties *this;
  
  this = ::operator_new(0x98);
  WhackAMoleIntroProperties(this);
  return this;
}


/* WhackAMoleIntroProperties::~WhackAMoleIntroProperties() */

void __thiscall
WhackAMoleIntroProperties::~WhackAMoleIntroProperties(WhackAMoleIntroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06732f70;
  std::vector<MoleNonSpawnData,std::allocator<MoleNonSpawnData>>::~vector
            ((vector<MoleNonSpawnData,std::allocator<MoleNonSpawnData>> *)(this + 0x78));
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* WhackAMoleIntroProperties::~WhackAMoleIntroProperties() */

void __thiscall
WhackAMoleIntroProperties::~WhackAMoleIntroProperties(WhackAMoleIntroProperties *this)

{
  ~WhackAMoleIntroProperties(this);
  AK::FreeHook(this);
  return;
}

