// Class: AnniversaryGeneralConfig


/* AnniversaryGeneralConfig::AnniversaryGeneralConfig() */

void __thiscall AnniversaryGeneralConfig::AnniversaryGeneralConfig(AnniversaryGeneralConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_068670d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* AnniversaryGeneralConfig::~AnniversaryGeneralConfig() */

void __thiscall AnniversaryGeneralConfig::~AnniversaryGeneralConfig(AnniversaryGeneralConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_068670d0;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x10));
  nop();
  return;
}


/* AnniversaryGeneralConfig::~AnniversaryGeneralConfig() */

void __thiscall AnniversaryGeneralConfig::~AnniversaryGeneralConfig(AnniversaryGeneralConfig *this)

{
  ~AnniversaryGeneralConfig(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnniversaryGeneralConfig::StaticClassInit() */

void AnniversaryGeneralConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"AnniversaryGeneralConfig");
    (*pcVar2)(plVar1,asStack_10,FUN_045a6b78,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AnniversaryGeneralConfig::StaticGetClass() */

long * AnniversaryGeneralConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AnniversaryGeneralConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AnniversaryGeneralConfig::GetClass() const */

long * AnniversaryGeneralConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"AnniversaryGeneralConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AnniversaryGeneralConfig::StaticNew() */

AnniversaryGeneralConfig * AnniversaryGeneralConfig::StaticNew(void)

{
  AnniversaryGeneralConfig *this;
  
  this = ::operator_new(0x28);
  AnniversaryGeneralConfig(this);
  return this;
}

