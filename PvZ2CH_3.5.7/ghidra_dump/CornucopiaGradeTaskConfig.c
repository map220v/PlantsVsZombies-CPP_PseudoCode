// Class: CornucopiaGradeTaskConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CornucopiaGradeTaskConfig::StaticClassInit() */

void CornucopiaGradeTaskConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"CornucopiaGradeTaskConfig");
    (*pcVar2)(plVar1,asStack_10,FUN_03a770b8,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CornucopiaGradeTaskConfig::StaticGetClass() */

long * CornucopiaGradeTaskConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CornucopiaGradeTaskConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CornucopiaGradeTaskConfig::GetClass() const */

long * CornucopiaGradeTaskConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"CornucopiaGradeTaskConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CornucopiaGradeTaskConfig::CornucopiaGradeTaskConfig() */

void __thiscall
CornucopiaGradeTaskConfig::CornucopiaGradeTaskConfig(CornucopiaGradeTaskConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0670d020;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* CornucopiaGradeTaskConfig::StaticNew() */

CornucopiaGradeTaskConfig * CornucopiaGradeTaskConfig::StaticNew(void)

{
  CornucopiaGradeTaskConfig *this;
  
  this = ::operator_new(0x20);
  CornucopiaGradeTaskConfig(this);
  return this;
}


/* CornucopiaGradeTaskConfig::~CornucopiaGradeTaskConfig() */

void __thiscall
CornucopiaGradeTaskConfig::~CornucopiaGradeTaskConfig(CornucopiaGradeTaskConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_0670d020;
  std::
  vector<Sexy::RtEmbeddedPtr<GeneralTaskData,158>,std::allocator<Sexy::RtEmbeddedPtr<GeneralTaskData,158>>>
  ::~vector((vector<Sexy::RtEmbeddedPtr<GeneralTaskData,158>,std::allocator<Sexy::RtEmbeddedPtr<GeneralTaskData,158>>>
             *)(this + 8));
  nop();
  return;
}


/* CornucopiaGradeTaskConfig::~CornucopiaGradeTaskConfig() */

void __thiscall
CornucopiaGradeTaskConfig::~CornucopiaGradeTaskConfig(CornucopiaGradeTaskConfig *this)

{
  ~CornucopiaGradeTaskConfig(this);
  AK::FreeHook(this);
  return;
}

