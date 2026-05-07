// Class: RenaiModuleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaiModuleProperties::StaticClassInit() */

void RenaiModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RenaiModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03d08760,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RenaiModuleProperties::StaticGetClass() */

long * RenaiModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RenaiModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RenaiModuleProperties::GetClass() const */

long * RenaiModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"RenaiModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RenaiModuleProperties::GetModuleClass() const */

long * RenaiModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (RenaiModule::sClass != (long *)0x0) {
    return RenaiModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  RenaiModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"RenaiModule",uVar2,RenaiModule::StaticNew);
  RenaiModule::StaticClassInit();
  return RenaiModule::sClass;
}


/* RenaiModuleProperties::RenaiModuleProperties() */

void __thiscall RenaiModuleProperties::RenaiModuleProperties(RenaiModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_067632b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  *(undefined4 *)(this + 0x70) = 0xffffffff;
  return;
}


/* RenaiModuleProperties::StaticNew() */

RenaiModuleProperties * RenaiModuleProperties::StaticNew(void)

{
  RenaiModuleProperties *this;
  
  this = ::operator_new(0x78);
  RenaiModuleProperties(this);
  return this;
}


/* RenaiModuleProperties::~RenaiModuleProperties() */

void __thiscall RenaiModuleProperties::~RenaiModuleProperties(RenaiModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_067632b0;
  std::vector<RenaiModuleProperties::StatueInfo,std::allocator<RenaiModuleProperties::StatueInfo>>::
  ~vector((vector<RenaiModuleProperties::StatueInfo,std::allocator<RenaiModuleProperties::StatueInfo>>
           *)(this + 0x58));
  std::vector<RenaiModuleProperties::StatueInfo,std::allocator<RenaiModuleProperties::StatueInfo>>::
  ~vector((vector<RenaiModuleProperties::StatueInfo,std::allocator<RenaiModuleProperties::StatueInfo>>
           *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* RenaiModuleProperties::~RenaiModuleProperties() */

void __thiscall RenaiModuleProperties::~RenaiModuleProperties(RenaiModuleProperties *this)

{
  ~RenaiModuleProperties(this);
  AK::FreeHook(this);
  return;
}

