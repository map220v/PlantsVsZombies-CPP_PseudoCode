// Class: NewPVPTaskConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPTaskConfig::StaticClassInit() */

void NewPVPTaskConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPTaskConfig");
    (*pcVar2)(plVar1,asStack_10,FUN_03a76eb8,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPTaskConfig::StaticGetClass() */

long * NewPVPTaskConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPTaskConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPTaskConfig::GetClass() const */

long * NewPVPTaskConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPTaskConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPTaskConfig::NewPVPTaskConfig() */

void __thiscall NewPVPTaskConfig::NewPVPTaskConfig(NewPVPTaskConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0670ce80;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* NewPVPTaskConfig::StaticNew() */

NewPVPTaskConfig * NewPVPTaskConfig::StaticNew(void)

{
  NewPVPTaskConfig *this;
  
  this = ::operator_new(0x20);
  NewPVPTaskConfig(this);
  return this;
}


/* NewPVPTaskConfig::~NewPVPTaskConfig() */

void __thiscall NewPVPTaskConfig::~NewPVPTaskConfig(NewPVPTaskConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_0670ce80;
  std::
  vector<Sexy::RtEmbeddedPtr<GeneralTaskData,158>,std::allocator<Sexy::RtEmbeddedPtr<GeneralTaskData,158>>>
  ::~vector((vector<Sexy::RtEmbeddedPtr<GeneralTaskData,158>,std::allocator<Sexy::RtEmbeddedPtr<GeneralTaskData,158>>>
             *)(this + 8));
  nop();
  return;
}


/* NewPVPTaskConfig::~NewPVPTaskConfig() */

void __thiscall NewPVPTaskConfig::~NewPVPTaskConfig(NewPVPTaskConfig *this)

{
  ~NewPVPTaskConfig(this);
  AK::FreeHook(this);
  return;
}

