// Class: LevelEditorStageInfo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorStageInfo::StaticClassInit() */

void LevelEditorStageInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelEditorStageInfo");
    (*pcVar2)(plVar1,asStack_10,FUN_04b4a1b0,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorStageInfo::StaticGetClass() */

long * LevelEditorStageInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelEditorStageInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelEditorStageInfo::GetClass() const */

long * LevelEditorStageInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"LevelEditorStageInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelEditorStageInfo::LevelEditorStageInfo() */

void __thiscall LevelEditorStageInfo::LevelEditorStageInfo(LevelEditorStageInfo *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_06961730;
  Set8BytesTo0(this + 0x10);
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0(this + 0x20);
  Set8BytesTo0(this + 0x28);
  Set8BytesTo0(this + 0x30);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  return;
}


/* LevelEditorStageInfo::StaticNew() */

LevelEditorStageInfo * LevelEditorStageInfo::StaticNew(void)

{
  LevelEditorStageInfo *this;
  
  this = ::operator_new(0x68);
  LevelEditorStageInfo(this);
  return this;
}


/* LevelEditorStageInfo::~LevelEditorStageInfo() */

void __thiscall LevelEditorStageInfo::~LevelEditorStageInfo(LevelEditorStageInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_06961730;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x50));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x38));
  std::string::~string((string *)(this + 0x30));
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* LevelEditorStageInfo::~LevelEditorStageInfo() */

void __thiscall LevelEditorStageInfo::~LevelEditorStageInfo(LevelEditorStageInfo *this)

{
  ~LevelEditorStageInfo(this);
  AK::FreeHook(this);
  return;
}

