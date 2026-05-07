// Class: WaveActionZombieTentProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveActionZombieTentProps::StaticClassInit() */

void WaveActionZombieTentProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieTentData");
    (*pcVar3)(plVar2,asStack_10,FUN_04ca77a8,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"WaveActionZombieTentProps");
    (*pcVar3)(plVar2,asStack_10,FUN_04ca7b68,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaveActionZombieTentProps::StaticGetClass() */

long * WaveActionZombieTentProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WaveActionZombieTentProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaveActionZombieTentProps::GetClass() const */

long * WaveActionZombieTentProps::GetClass(void)

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
  (*pcVar3)(plVar1,"WaveActionZombieTentProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaveActionZombieTentProps::GetActionClass() const */

long * WaveActionZombieTentProps::GetActionClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (WaveActionZombieTent::sClass != (long *)0x0) {
    return WaveActionZombieTent::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  WaveActionZombieTent::sClass = plVar1;
  uVar2 = WaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"WaveActionZombieTent",uVar2,WaveActionZombieTent::StaticNew);
  WaveActionZombieTent::StaticClassInit();
  return WaveActionZombieTent::sClass;
}


/* WaveActionZombieTentProps::WaveActionZombieTentProps() */

void __thiscall
WaveActionZombieTentProps::WaveActionZombieTentProps(WaveActionZombieTentProps *this)

{
  WaveActionProperties::WaveActionProperties((WaveActionProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06997f30;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* WaveActionZombieTentProps::StaticNew() */

WaveActionZombieTentProps * WaveActionZombieTentProps::StaticNew(void)

{
  WaveActionZombieTentProps *this;
  
  this = ::operator_new(0x58);
  WaveActionZombieTentProps(this);
  return this;
}


/* WaveActionZombieTentProps::~WaveActionZombieTentProps() */

void __thiscall
WaveActionZombieTentProps::~WaveActionZombieTentProps(WaveActionZombieTentProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06997f30;
  std::vector<ZombieTentData,std::allocator<ZombieTentData>>::~vector
            ((vector<ZombieTentData,std::allocator<ZombieTentData>> *)(this + 0x40));
  WaveActionProperties::~WaveActionProperties((WaveActionProperties *)this);
  return;
}


/* WaveActionZombieTentProps::~WaveActionZombieTentProps() */

void __thiscall
WaveActionZombieTentProps::~WaveActionZombieTentProps(WaveActionZombieTentProps *this)

{
  ~WaveActionZombieTentProps(this);
  AK::FreeHook(this);
  return;
}

