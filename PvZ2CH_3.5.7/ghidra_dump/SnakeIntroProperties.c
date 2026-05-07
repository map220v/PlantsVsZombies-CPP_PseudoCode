// Class: SnakeIntroProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnakeIntroProperties::StaticClassInit() */

void SnakeIntroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"SnakeIntroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03e4e8dc,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SnakeIntroProperties::StaticGetClass() */

long * SnakeIntroProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SnakeIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SnakeIntroProperties::GetClass() const */

long * SnakeIntroProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"SnakeIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SnakeIntroProperties::SnakeIntroProperties() */

void __thiscall SnakeIntroProperties::SnakeIntroProperties(SnakeIntroProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined4 *)(this + 0x78) = 1;
  *(undefined ***)this = &PTR_GetClass_0678ba40;
  return;
}


/* SnakeIntroProperties::StaticNew() */

SnakeIntroProperties * SnakeIntroProperties::StaticNew(void)

{
  SnakeIntroProperties *this;
  
  this = ::operator_new(0x80);
  SnakeIntroProperties(this);
  return this;
}


/* SnakeIntroProperties::~SnakeIntroProperties() */

void __thiscall SnakeIntroProperties::~SnakeIntroProperties(SnakeIntroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0678ba40;
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* SnakeIntroProperties::~SnakeIntroProperties() */

void __thiscall SnakeIntroProperties::~SnakeIntroProperties(SnakeIntroProperties *this)

{
  ~SnakeIntroProperties(this);
  AK::FreeHook(this);
  return;
}


/* SnakeIntroProperties::GetModuleClass() const */

long * SnakeIntroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (SnakeIntro::sClass != (long *)0x0) {
    return SnakeIntro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  SnakeIntro::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"SnakeIntro",uVar2,SnakeIntro::StaticNew);
  SnakeIntro::StaticClassInit();
  return SnakeIntro::sClass;
}

