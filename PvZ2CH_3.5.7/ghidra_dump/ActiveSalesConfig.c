// Class: ActiveSalesConfig


/* ActiveSalesConfig::~ActiveSalesConfig() */

void __thiscall ActiveSalesConfig::~ActiveSalesConfig(ActiveSalesConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_06937310;
  std::vector<ActiveSalesPriceList,std::allocator<ActiveSalesPriceList>>::~vector
            ((vector<ActiveSalesPriceList,std::allocator<ActiveSalesPriceList>> *)(this + 0x20));
  std::vector<ActiveSalesObject,std::allocator<ActiveSalesObject>>::~vector
            ((vector<ActiveSalesObject,std::allocator<ActiveSalesObject>> *)(this + 8));
  nop();
  return;
}


/* ActiveSalesConfig::~ActiveSalesConfig() */

void __thiscall ActiveSalesConfig::~ActiveSalesConfig(ActiveSalesConfig *this)

{
  ~ActiveSalesConfig(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveSalesConfig::StaticClassInit() */

void ActiveSalesConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"ActiveSalesObject");
    (*pcVar3)(plVar2,asStack_10,FUN_04a57b20,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ActiveSalesPriceList");
    (*pcVar3)(plVar2,asStack_10,FUN_04a579b4,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ActiveSalesConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_04a5d510,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActiveSalesConfig::StaticGetClass() */

long * ActiveSalesConfig::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"ActiveSalesConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ActiveSalesConfig::GetClass() const */

long * ActiveSalesConfig::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"ActiveSalesConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ActiveSalesConfig::ActiveSalesConfig() */

void __thiscall ActiveSalesConfig::ActiveSalesConfig(ActiveSalesConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06937310;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<ActiveSalesObject,std::allocator<ActiveSalesObject>>::clear
            ((vector<ActiveSalesObject,std::allocator<ActiveSalesObject>> *)(this + 8));
  std::vector<ActiveSalesPriceList,std::allocator<ActiveSalesPriceList>>::clear
            ((vector<ActiveSalesPriceList,std::allocator<ActiveSalesPriceList>> *)(this + 0x20));
  return;
}


/* ActiveSalesConfig::StaticNew() */

ActiveSalesConfig * ActiveSalesConfig::StaticNew(void)

{
  ActiveSalesConfig *this;
  
  this = ::operator_new(0x38);
  ActiveSalesConfig(this);
  return this;
}

