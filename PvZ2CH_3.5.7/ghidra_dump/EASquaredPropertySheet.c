// Class: EASquaredPropertySheet


/* EASquaredPropertySheet::~EASquaredPropertySheet() */

void __thiscall EASquaredPropertySheet::~EASquaredPropertySheet(EASquaredPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_0697e740;
  std::string::~string((string *)(this + 0x50));
  std::string::~string((string *)(this + 0x48));
  std::string::~string((string *)(this + 0x40));
  std::string::~string((string *)(this + 0x38));
  std::string::~string((string *)(this + 0x30));
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* EASquaredPropertySheet::~EASquaredPropertySheet() */

void __thiscall EASquaredPropertySheet::~EASquaredPropertySheet(EASquaredPropertySheet *this)

{
  ~EASquaredPropertySheet(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquaredPropertySheet::StaticClassInit() */

void EASquaredPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"EASquaredPropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_04bf712c,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EASquaredPropertySheet::StaticGetClass() */

long * EASquaredPropertySheet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EASquaredPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EASquaredPropertySheet::GetClass() const */

long * EASquaredPropertySheet::GetClass(void)

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
  (*pcVar3)(plVar1,"EASquaredPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EASquaredPropertySheet::EASquaredPropertySheet() */

void __thiscall EASquaredPropertySheet::EASquaredPropertySheet(EASquaredPropertySheet *this)

{
  undefined4 uVar1;
  size_t in_x2;
  
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_0697e740;
  Set8BytesTo0((string *)(this + 0x10));
  Set8BytesTo0(this + 0x28);
  Set8BytesTo0(this + 0x30);
  Set8BytesTo0(this + 0x38);
  Set8BytesTo0(this + 0x40);
  Set8BytesTo0(this + 0x48);
  Set8BytesTo0(this + 0x50);
  std::string::append((string *)(this + 0x10),"",in_x2);
  *(undefined4 *)(this + 0x18) = 0;
  uVar1 = std::numeric_limits<int>::max();
  this[0x22] = (EASquaredPropertySheet)0x0;
  *(undefined4 *)(this + 0x1c) = uVar1;
  this[0x20] = (EASquaredPropertySheet)0x1;
  this[0x21] = (EASquaredPropertySheet)0x1;
  return;
}


/* EASquaredPropertySheet::StaticNew() */

EASquaredPropertySheet * EASquaredPropertySheet::StaticNew(void)

{
  EASquaredPropertySheet *this;
  
  this = ::operator_new(0x58);
  EASquaredPropertySheet(this);
  return this;
}

