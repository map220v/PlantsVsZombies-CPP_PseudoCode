// Class: RecallInfo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RecallInfo::StaticClassInit() */

void RecallInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"RecallItemInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_04c2e8d8,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RecallInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_04c2ff2c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RecallInfo::StaticGetClass() */

long * RecallInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RecallInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RecallInfo::GetClass() const */

long * RecallInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"RecallInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RecallInfo::RecallInfo() */

void __thiscall RecallInfo::RecallInfo(RecallInfo *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_069843a0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* RecallInfo::StaticNew() */

RecallInfo * RecallInfo::StaticNew(void)

{
  RecallInfo *this;
  
  this = ::operator_new(0x20);
  RecallInfo(this);
  return this;
}


/* RecallInfo::~RecallInfo() */

void __thiscall RecallInfo::~RecallInfo(RecallInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_069843a0;
  std::vector<RecallItemInfo,std::allocator<RecallItemInfo>>::~vector
            ((vector<RecallItemInfo,std::allocator<RecallItemInfo>> *)(this + 8));
  nop();
  return;
}


/* RecallInfo::~RecallInfo() */

void __thiscall RecallInfo::~RecallInfo(RecallInfo *this)

{
  ~RecallInfo(this);
  AK::FreeHook(this);
  return;
}


/* RecallInfo::TEMPNAMEPLACEHOLDERVALUE(RecallInfo const&) */

RecallInfo * __thiscall RecallInfo::operator=(RecallInfo *this,RecallInfo *param_1)

{
  std::vector<RecallItemInfo,std::allocator<RecallItemInfo>>::operator=
            ((vector<RecallItemInfo,std::allocator<RecallItemInfo>> *)(this + 8),
             (vector *)(param_1 + 8));
  return this;
}

