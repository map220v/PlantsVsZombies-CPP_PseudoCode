// Class: PVZLiveConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZLiveConfig::StaticClassInit() */

void PVZLiveConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"Toggle");
    (*pcVar3)(plVar2,asStack_10,FUN_043ef8c4,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PVZLiveConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_043eff20,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZLiveConfig::StaticGetClass() */

long * PVZLiveConfig::StaticGetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"PVZLiveConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZLiveConfig::GetClass() const */

long * PVZLiveConfig::GetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"PVZLiveConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZLiveConfig::PVZLiveConfig() */

void __thiscall PVZLiveConfig::PVZLiveConfig(PVZLiveConfig *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_068474e0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  *(undefined4 *)(this + 0x10) = 0x3c;
  *(undefined4 *)(this + 0x30) = 0x3f000000;
  return;
}


/* PVZLiveConfig::StaticNew() */

PVZLiveConfig * PVZLiveConfig::StaticNew(void)

{
  PVZLiveConfig *this;
  
  this = ::operator_new(0x38);
  PVZLiveConfig(this);
  return this;
}


/* PVZLiveConfig::~PVZLiveConfig() */

void __thiscall PVZLiveConfig::~PVZLiveConfig(PVZLiveConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_068474e0;
  std::vector<Toggle,std::allocator<Toggle>>::~vector
            ((vector<Toggle,std::allocator<Toggle>> *)(this + 0x18));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* PVZLiveConfig::~PVZLiveConfig() */

void __thiscall PVZLiveConfig::~PVZLiveConfig(PVZLiveConfig *this)

{
  ~PVZLiveConfig(this);
  AK::FreeHook(this);
  return;
}

