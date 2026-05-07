// Class: RiverCrossingIntroProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingIntroProperties::StaticClassInit() */

void RiverCrossingIntroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiverCrossingIntroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04a1b6c4,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiverCrossingIntroProperties::StaticGetClass() */

long * RiverCrossingIntroProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiverCrossingIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiverCrossingIntroProperties::GetClass() const */

long * RiverCrossingIntroProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"RiverCrossingIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiverCrossingIntroProperties::RiverCrossingIntroProperties() */

void __thiscall
RiverCrossingIntroProperties::RiverCrossingIntroProperties(RiverCrossingIntroProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0692f0c0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x80));
  *(undefined4 *)(this + 0x78) = 0xffffffff;
  return;
}


/* RiverCrossingIntroProperties::StaticNew() */

RiverCrossingIntroProperties * RiverCrossingIntroProperties::StaticNew(void)

{
  RiverCrossingIntroProperties *this;
  
  this = ::operator_new(0x98);
  RiverCrossingIntroProperties(this);
  return this;
}


/* RiverCrossingIntroProperties::~RiverCrossingIntroProperties() */

void __thiscall
RiverCrossingIntroProperties::~RiverCrossingIntroProperties(RiverCrossingIntroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0692f0c0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x80));
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* RiverCrossingIntroProperties::~RiverCrossingIntroProperties() */

void __thiscall
RiverCrossingIntroProperties::~RiverCrossingIntroProperties(RiverCrossingIntroProperties *this)

{
  ~RiverCrossingIntroProperties(this);
  AK::FreeHook(this);
  return;
}


/* RiverCrossingIntroProperties::GetModuleClass() const */

long * RiverCrossingIntroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (RiverCrossingIntro::sClass != (long *)0x0) {
    return RiverCrossingIntro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  RiverCrossingIntro::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"RiverCrossingIntro",uVar2,RiverCrossingIntro::StaticNew);
  RiverCrossingIntro::StaticClassInit();
  return RiverCrossingIntro::sClass;
}

