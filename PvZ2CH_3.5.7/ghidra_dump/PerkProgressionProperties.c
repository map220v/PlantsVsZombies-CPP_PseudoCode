// Class: PerkProgressionProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PerkProgressionProperties::StaticClassInit() */

void PerkProgressionProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PerkProgressionReward");
    (*pcVar3)(plVar2,asStack_10,FUN_036ae024,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PerkProgressionProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_036b0954,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PerkProgressionProperties::StaticGetClass() */

long * PerkProgressionProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PerkProgressionProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PerkProgressionProperties::GetClass() const */

long * PerkProgressionProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"PerkProgressionProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PerkProgressionProperties::PerkProgressionProperties() */

void __thiscall
PerkProgressionProperties::PerkProgressionProperties(PerkProgressionProperties *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_06680a20;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* PerkProgressionProperties::StaticNew() */

PerkProgressionProperties * PerkProgressionProperties::StaticNew(void)

{
  PerkProgressionProperties *this;
  
  this = ::operator_new(0x28);
  PerkProgressionProperties(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PerkProgressionProperties::GetProperties(std::string const&) */

void PerkProgressionProperties::GetProperties(string *param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  wstring awStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  auVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::UTF8StringToWString((Sexy *)param_1,auVar2._8_8_);
  Sexy::RtName::RtName(aRStack_18,awStack_28);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,auVar2._0_8_,0x75,aRStack_18);
  uVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* PerkProgressionProperties::~PerkProgressionProperties() */

void __thiscall
PerkProgressionProperties::~PerkProgressionProperties(PerkProgressionProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06680a20;
  std::vector<PerkProgressionReward,std::allocator<PerkProgressionReward>>::~vector
            ((vector<PerkProgressionReward,std::allocator<PerkProgressionReward>> *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* PerkProgressionProperties::~PerkProgressionProperties() */

void __thiscall
PerkProgressionProperties::~PerkProgressionProperties(PerkProgressionProperties *this)

{
  ~PerkProgressionProperties(this);
  AK::FreeHook(this);
  return;
}

