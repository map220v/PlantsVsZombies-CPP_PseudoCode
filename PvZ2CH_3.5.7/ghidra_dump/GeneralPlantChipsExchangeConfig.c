// Class: GeneralPlantChipsExchangeConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralPlantChipsExchangeConfig::StaticClassInit() */

void GeneralPlantChipsExchangeConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralPlantChipsExchangeConfig");
    (*pcVar2)(plVar1,asStack_10,FUN_039b6e08,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralPlantChipsExchangeConfig::StaticGetClass() */

long * GeneralPlantChipsExchangeConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralPlantChipsExchangeConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralPlantChipsExchangeConfig::GetClass() const */

long * GeneralPlantChipsExchangeConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralPlantChipsExchangeConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralPlantChipsExchangeConfig::GeneralPlantChipsExchangeConfig() */

void __thiscall
GeneralPlantChipsExchangeConfig::GeneralPlantChipsExchangeConfig
          (GeneralPlantChipsExchangeConfig *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_066e86c0;
  Set8BytesTo0(this + 0x10);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* GeneralPlantChipsExchangeConfig::StaticNew() */

GeneralPlantChipsExchangeConfig * GeneralPlantChipsExchangeConfig::StaticNew(void)

{
  GeneralPlantChipsExchangeConfig *this;
  
  this = ::operator_new(0x30);
  GeneralPlantChipsExchangeConfig(this);
  return this;
}


/* GeneralPlantChipsExchangeConfig::~GeneralPlantChipsExchangeConfig() */

void __thiscall
GeneralPlantChipsExchangeConfig::~GeneralPlantChipsExchangeConfig
          (GeneralPlantChipsExchangeConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_066e86c0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* GeneralPlantChipsExchangeConfig::~GeneralPlantChipsExchangeConfig() */

void __thiscall
GeneralPlantChipsExchangeConfig::~GeneralPlantChipsExchangeConfig
          (GeneralPlantChipsExchangeConfig *this)

{
  ~GeneralPlantChipsExchangeConfig(this);
  AK::FreeHook(this);
  return;
}

