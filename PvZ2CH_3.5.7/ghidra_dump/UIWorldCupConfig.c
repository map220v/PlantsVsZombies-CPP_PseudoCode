// Class: UIWorldCupConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldCupConfig::StaticClassInit() */

void UIWorldCupConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"worldCupInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_0394f8fc,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"wcAwardInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_0394e080,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"UIWorldCupConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_03952ac0,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIWorldCupConfig::StaticGetClass() */

long * UIWorldCupConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"UIWorldCupConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UIWorldCupConfig::GetClass() const */

long * UIWorldCupConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"UIWorldCupConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UIWorldCupConfig::UIWorldCupConfig() */

void __thiscall UIWorldCupConfig::UIWorldCupConfig(UIWorldCupConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_066d19b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  return;
}


/* UIWorldCupConfig::StaticNew() */

UIWorldCupConfig * UIWorldCupConfig::StaticNew(void)

{
  UIWorldCupConfig *this;
  
  this = ::operator_new(0x80);
  UIWorldCupConfig(this);
  return this;
}


/* UIWorldCupConfig::~UIWorldCupConfig() */

void __thiscall UIWorldCupConfig::~UIWorldCupConfig(UIWorldCupConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_066d19b0;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x68));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x48));
  std::vector<worldCupInfo,std::allocator<worldCupInfo>>::~vector
            ((vector<worldCupInfo,std::allocator<worldCupInfo>> *)(this + 0x20));
  std::
  vector<std::vector<wcAwardInfo,std::allocator<wcAwardInfo>>,std::allocator<std::vector<wcAwardInfo,std::allocator<wcAwardInfo>>>>
  ::~vector((vector<std::vector<wcAwardInfo,std::allocator<wcAwardInfo>>,std::allocator<std::vector<wcAwardInfo,std::allocator<wcAwardInfo>>>>
             *)(this + 8));
  nop();
  return;
}


/* UIWorldCupConfig::~UIWorldCupConfig() */

void __thiscall UIWorldCupConfig::~UIWorldCupConfig(UIWorldCupConfig *this)

{
  ~UIWorldCupConfig(this);
  AK::FreeHook(this);
  return;
}

