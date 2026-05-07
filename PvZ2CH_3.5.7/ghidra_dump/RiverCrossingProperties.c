// Class: RiverCrossingProperties


/* RiverCrossingProperties::GetRetryTimes() const */

undefined4 __thiscall RiverCrossingProperties::GetRetryTimes(RiverCrossingProperties *this)

{
  return *(undefined4 *)(this + 0x40);
}


/* RiverCrossingProperties::GetCrossTarget() const */

undefined4 __thiscall RiverCrossingProperties::GetCrossTarget(RiverCrossingProperties *this)

{
  return *(undefined4 *)(this + 0x44);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingProperties::StaticClassInit() */

void RiverCrossingProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiverEntityProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_04a21fcc,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"StarvingChomperProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_04a21d9c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RiverCrossingProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_04a25464,0x88,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiverCrossingProperties::StaticGetClass() */

long * RiverCrossingProperties::StaticGetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"RiverCrossingProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiverCrossingProperties::GetClass() const */

long * RiverCrossingProperties::GetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"RiverCrossingProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiverCrossingProperties::GetDodoRiderWalkingRate() const */

undefined4 __thiscall
RiverCrossingProperties::GetDodoRiderWalkingRate(RiverCrossingProperties *this)

{
  return *(undefined4 *)(this + 0x4c);
}


/* RiverCrossingProperties::GetDodoRiderFlyingRate() const */

undefined4 __thiscall RiverCrossingProperties::GetDodoRiderFlyingRate(RiverCrossingProperties *this)

{
  return *(undefined4 *)(this + 0x50);
}


/* RiverCrossingProperties::GetModuleClass() const */

long * RiverCrossingProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (RiverCrossingModule::sClass != (long *)0x0) {
    return RiverCrossingModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  RiverCrossingModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"RiverCrossingModule",uVar2,RiverCrossingModule::StaticNew);
  RiverCrossingModule::StaticClassInit();
  return RiverCrossingModule::sClass;
}


/* RiverCrossingProperties::RiverCrossingProperties() */

void __thiscall RiverCrossingProperties::RiverCrossingProperties(RiverCrossingProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0692f660;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  *(undefined4 *)(this + 0x40) = 0xffffffff;
  *(undefined4 *)(this + 0x44) = 0xffffffff;
  *(undefined4 *)(this + 0x48) = 0xffffffff;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  return;
}


/* RiverCrossingProperties::StaticNew() */

RiverCrossingProperties * RiverCrossingProperties::StaticNew(void)

{
  RiverCrossingProperties *this;
  
  this = ::operator_new(0x88);
  RiverCrossingProperties(this);
  return this;
}


/* RiverCrossingProperties::~RiverCrossingProperties() */

void __thiscall RiverCrossingProperties::~RiverCrossingProperties(RiverCrossingProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0692f660;
  std::vector<StarvingChomperProperties,std::allocator<StarvingChomperProperties>>::~vector
            ((vector<StarvingChomperProperties,std::allocator<StarvingChomperProperties>> *)
             (this + 0x70));
  std::vector<RiverEntityProperties,std::allocator<RiverEntityProperties>>::~vector
            ((vector<RiverEntityProperties,std::allocator<RiverEntityProperties>> *)(this + 0x58));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* RiverCrossingProperties::~RiverCrossingProperties() */

void __thiscall RiverCrossingProperties::~RiverCrossingProperties(RiverCrossingProperties *this)

{
  ~RiverCrossingProperties(this);
  AK::FreeHook(this);
  return;
}

