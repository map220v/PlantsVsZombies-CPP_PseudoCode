// Class: EffectObjectPropertySheet


/* EffectObjectPropertySheet::~EffectObjectPropertySheet() */

void __thiscall
EffectObjectPropertySheet::~EffectObjectPropertySheet(EffectObjectPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_0675fde0;
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* EffectObjectPropertySheet::~EffectObjectPropertySheet() */

void __thiscall
EffectObjectPropertySheet::~EffectObjectPropertySheet(EffectObjectPropertySheet *this)

{
  ~EffectObjectPropertySheet(this);
  AK::FreeHook(this);
  return;
}


/* EffectObjectPropertySheet::EffectObjectPropertySheet() */

void __thiscall
EffectObjectPropertySheet::EffectObjectPropertySheet(EffectObjectPropertySheet *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_0675fde0;
  Set8BytesTo0(this + 0x10);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x18));
  Set8BytesTo0(this + 0x20);
  Set8BytesTo0(this + 0x28);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObjectPropertySheet::StaticClassInit() */

void EffectObjectPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"EffectObjectPropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_03cd7bc0,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectObjectPropertySheet::StaticGetClass() */

long * EffectObjectPropertySheet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EffectObjectPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectObjectPropertySheet::GetClass() const */

long * EffectObjectPropertySheet::GetClass(void)

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
  (*pcVar3)(plVar1,"EffectObjectPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectObjectPropertySheet::StaticNew() */

EffectObjectPropertySheet * EffectObjectPropertySheet::StaticNew(void)

{
  EffectObjectPropertySheet *this;
  
  this = ::operator_new(0x30);
  EffectObjectPropertySheet(this);
  return this;
}

