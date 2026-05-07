// Class: SkillPropertySheet


/* SkillPropertySheet::~SkillPropertySheet() */

void __thiscall SkillPropertySheet::~SkillPropertySheet(SkillPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_069108f0;
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* SkillPropertySheet::~SkillPropertySheet() */

void __thiscall SkillPropertySheet::~SkillPropertySheet(SkillPropertySheet *this)

{
  ~SkillPropertySheet(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkillPropertySheet::StaticClassInit() */

void SkillPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"SkillPropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_0491e9e4,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SkillPropertySheet::StaticGetClass() */

long * SkillPropertySheet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SkillPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SkillPropertySheet::GetClass() const */

long * SkillPropertySheet::GetClass(void)

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
  (*pcVar3)(plVar1,"SkillPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SkillPropertySheet::SkillPropertySheet() */

void __thiscall SkillPropertySheet::SkillPropertySheet(SkillPropertySheet *this)

{
  size_t in_x2;
  
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_069108f0;
  Set8BytesTo0((string *)(this + 0x10));
  Set8BytesTo0((string *)(this + 0x18));
  Set8BytesTo0((string *)(this + 0x20));
  std::string::append((string *)(this + 0x10),"",in_x2);
  std::string::append((string *)(this + 0x18),"",in_x2);
  std::string::append((string *)(this + 0x20),"",in_x2);
  return;
}


/* SkillPropertySheet::StaticNew() */

SkillPropertySheet * SkillPropertySheet::StaticNew(void)

{
  SkillPropertySheet *this;
  
  this = ::operator_new(0x28);
  SkillPropertySheet(this);
  return this;
}

