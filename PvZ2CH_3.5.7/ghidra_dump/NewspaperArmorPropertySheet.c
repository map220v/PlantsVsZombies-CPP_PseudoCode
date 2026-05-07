// Class: NewspaperArmorPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewspaperArmorPropertySheet::StaticClassInit() */

void NewspaperArmorPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewspaperArmorPropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_03c55e54,0xa0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewspaperArmorPropertySheet::~NewspaperArmorPropertySheet() */

void __thiscall
NewspaperArmorPropertySheet::~NewspaperArmorPropertySheet(NewspaperArmorPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_06753690;
  std::string::~string((string *)(this + 0x98));
  ArmorPropertySheet::~ArmorPropertySheet((ArmorPropertySheet *)this);
  return;
}


/* NewspaperArmorPropertySheet::~NewspaperArmorPropertySheet() */

void __thiscall
NewspaperArmorPropertySheet::~NewspaperArmorPropertySheet(NewspaperArmorPropertySheet *this)

{
  ~NewspaperArmorPropertySheet(this);
  AK::FreeHook(this);
  return;
}


/* NewspaperArmorPropertySheet::NewspaperArmorPropertySheet() */

void __thiscall
NewspaperArmorPropertySheet::NewspaperArmorPropertySheet(NewspaperArmorPropertySheet *this)

{
  size_t in_x2;
  
  ArmorPropertySheet::ArmorPropertySheet((ArmorPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06753690;
  Set8BytesTo0((string *)(this + 0x98));
  std::string::append((string *)(this + 0x98),"",in_x2);
  return;
}


/* NewspaperArmorPropertySheet::StaticNew() */

NewspaperArmorPropertySheet * NewspaperArmorPropertySheet::StaticNew(void)

{
  NewspaperArmorPropertySheet *this;
  
  this = ::operator_new(0xa0);
  NewspaperArmorPropertySheet(this);
  return this;
}


/* NewspaperArmorPropertySheet::StaticGetClass() */

long * NewspaperArmorPropertySheet::StaticGetClass(void)

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
  uVar2 = ArmorPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"NewspaperArmorPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewspaperArmorPropertySheet::GetClass() const */

long * NewspaperArmorPropertySheet::GetClass(void)

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
  uVar2 = ArmorPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"NewspaperArmorPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

