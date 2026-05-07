// Class: WaveActionKongmingLanternProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveActionKongmingLanternProps::StaticClassInit() */

void WaveActionKongmingLanternProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"KongmingLanternData");
    (*pcVar3)(plVar2,asStack_10,FUN_034754d4,4,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"WaveActionKongmingLanternProps");
    (*pcVar3)(plVar2,asStack_10,FUN_03477c68,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaveActionKongmingLanternProps::StaticGetClass() */

long * WaveActionKongmingLanternProps::StaticGetClass(void)

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
  uVar2 = WaveActionProperties::StaticGetClass();
  (*pcVar3)(plVar1,"WaveActionKongmingLanternProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaveActionKongmingLanternProps::GetClass() const */

long * WaveActionKongmingLanternProps::GetClass(void)

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
  uVar2 = WaveActionProperties::StaticGetClass();
  (*pcVar3)(plVar1,"WaveActionKongmingLanternProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaveActionKongmingLanternProps::GetActionClass() const */

long * WaveActionKongmingLanternProps::GetActionClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (WaveActionKongmingLantern::sClass != (long *)0x0) {
    return WaveActionKongmingLantern::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  WaveActionKongmingLantern::sClass = plVar1;
  uVar2 = WaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"WaveActionKongmingLantern",uVar2,WaveActionKongmingLantern::StaticNew);
  WaveActionKongmingLantern::StaticClassInit();
  return WaveActionKongmingLantern::sClass;
}


/* WaveActionKongmingLanternProps::WaveActionKongmingLanternProps() */

void __thiscall
WaveActionKongmingLanternProps::WaveActionKongmingLanternProps(WaveActionKongmingLanternProps *this)

{
  WaveActionProperties::WaveActionProperties((WaveActionProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0663d020;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* WaveActionKongmingLanternProps::StaticNew() */

WaveActionKongmingLanternProps * WaveActionKongmingLanternProps::StaticNew(void)

{
  WaveActionKongmingLanternProps *this;
  
  this = ::operator_new(0x58);
  WaveActionKongmingLanternProps(this);
  return this;
}


/* WaveActionKongmingLanternProps::~WaveActionKongmingLanternProps() */

void __thiscall
WaveActionKongmingLanternProps::~WaveActionKongmingLanternProps
          (WaveActionKongmingLanternProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0663d020;
  std::vector<KongmingLanternData,std::allocator<KongmingLanternData>>::~vector
            ((vector<KongmingLanternData,std::allocator<KongmingLanternData>> *)(this + 0x40));
  WaveActionProperties::~WaveActionProperties((WaveActionProperties *)this);
  return;
}


/* WaveActionKongmingLanternProps::~WaveActionKongmingLanternProps() */

void __thiscall
WaveActionKongmingLanternProps::~WaveActionKongmingLanternProps
          (WaveActionKongmingLanternProps *this)

{
  ~WaveActionKongmingLanternProps(this);
  AK::FreeHook(this);
  return;
}

