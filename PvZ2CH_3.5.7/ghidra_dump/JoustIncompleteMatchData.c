// Class: JoustIncompleteMatchData


/* JoustIncompleteMatchData::~JoustIncompleteMatchData() */

void __thiscall JoustIncompleteMatchData::~JoustIncompleteMatchData(JoustIncompleteMatchData *this)

{
  *(undefined ***)this = &PTR_GetClass_066adf00;
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  nop();
  return;
}


/* JoustIncompleteMatchData::~JoustIncompleteMatchData() */

void __thiscall JoustIncompleteMatchData::~JoustIncompleteMatchData(JoustIncompleteMatchData *this)

{
  ~JoustIncompleteMatchData(this);
  AK::FreeHook(this);
  return;
}


/* JoustIncompleteMatchData::JoustIncompleteMatchData() */

void __thiscall JoustIncompleteMatchData::JoustIncompleteMatchData(JoustIncompleteMatchData *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_066adf00;
  Set8BytesTo0(this + 8);
  Set8BytesTo0(this + 0x10);
  Set8BytesTo0(this + 0x18);
  return;
}


/* JoustIncompleteMatchData::StaticNew() */

JoustIncompleteMatchData * JoustIncompleteMatchData::StaticNew(void)

{
  JoustIncompleteMatchData *this;
  
  this = ::operator_new(0x28);
  JoustIncompleteMatchData(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustIncompleteMatchData::StaticClassInit() */

void JoustIncompleteMatchData::StaticClassInit(void)

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
    std::string::string(asStack_10,"JoustIncompleteMatchData");
    (*pcVar2)(plVar1,asStack_10,FUN_03879ad0,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustIncompleteMatchData::StaticGetClass() */

long * JoustIncompleteMatchData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"JoustIncompleteMatchData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JoustIncompleteMatchData::GetClass() const */

long * JoustIncompleteMatchData::GetClass(void)

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
  (*pcVar3)(plVar1,"JoustIncompleteMatchData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

