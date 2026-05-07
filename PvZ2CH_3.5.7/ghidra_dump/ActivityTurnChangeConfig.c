// Class: ActivityTurnChangeConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityTurnChangeConfig::StaticClassInit() */

void ActivityTurnChangeConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"stActivity_iconInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03956ab4,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ActivityTurnChangeConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_03958e18,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActivityTurnChangeConfig::StaticGetClass() */

long * ActivityTurnChangeConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActivityTurnChangeConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ActivityTurnChangeConfig::GetClass() const */

long * ActivityTurnChangeConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"ActivityTurnChangeConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ActivityTurnChangeConfig::ActivityTurnChangeConfig() */

void __thiscall ActivityTurnChangeConfig::ActivityTurnChangeConfig(ActivityTurnChangeConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_066d2b10;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


/* ActivityTurnChangeConfig::StaticNew() */

ActivityTurnChangeConfig * ActivityTurnChangeConfig::StaticNew(void)

{
  ActivityTurnChangeConfig *this;
  
  this = ::operator_new(0x28);
  ActivityTurnChangeConfig(this);
  return this;
}


/* ActivityTurnChangeConfig::~ActivityTurnChangeConfig() */

void __thiscall ActivityTurnChangeConfig::~ActivityTurnChangeConfig(ActivityTurnChangeConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_066d2b10;
  std::vector<stActivity_iconInfo,std::allocator<stActivity_iconInfo>>::~vector
            ((vector<stActivity_iconInfo,std::allocator<stActivity_iconInfo>> *)(this + 8));
  nop();
  return;
}


/* ActivityTurnChangeConfig::~ActivityTurnChangeConfig() */

void __thiscall ActivityTurnChangeConfig::~ActivityTurnChangeConfig(ActivityTurnChangeConfig *this)

{
  ~ActivityTurnChangeConfig(this);
  AK::FreeHook(this);
  return;
}

