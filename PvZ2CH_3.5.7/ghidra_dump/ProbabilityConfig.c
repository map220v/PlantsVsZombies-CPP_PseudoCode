// Class: ProbabilityConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilityConfig::StaticClassInit() */

void ProbabilityConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"ProbabilityConfig");
    (*pcVar2)(plVar1,asStack_10,FUN_04c3f6a0,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ProbabilityConfig::StaticGetClass() */

long * ProbabilityConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ProbabilityConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ProbabilityConfig::GetClass() const */

long * ProbabilityConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"ProbabilityConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ProbabilityConfig::GetKeyValue(unsigned int, std::string&, float&) */

bool __thiscall
ProbabilityConfig::GetKeyValue(ProbabilityConfig *this,uint param_1,string *param_2,float *param_3)

{
  ulong uVar1;
  float *pfVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 8);
  uVar3 = (ulong)param_1;
  uVar1 = FUN_04c3f3fc(uVar4,*(undefined8 *)(this + 0x10));
  if (uVar3 < uVar1) {
    uVar4 = FUN_04c3f408(uVar4,uVar3);
    thunk_FUN_05475e00(param_2,uVar4);
    pfVar2 = (float *)FUN_04c3f410(*(undefined8 *)(this + 0x20),uVar3);
    *param_3 = *pfVar2;
  }
  return uVar3 < uVar1;
}


/* ProbabilityConfig::GetSize() */

void __thiscall ProbabilityConfig::GetSize(ProbabilityConfig *this)

{
  FUN_04c3f3fc(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  return;
}


/* ProbabilityConfig::ProbabilityConfig() */

void __thiscall ProbabilityConfig::ProbabilityConfig(ProbabilityConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06985740;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  Set8BytesTo0(this + 0x38);
  return;
}


/* ProbabilityConfig::StaticNew() */

ProbabilityConfig * ProbabilityConfig::StaticNew(void)

{
  ProbabilityConfig *this;
  
  this = ::operator_new(0x40);
  ProbabilityConfig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilityConfig::GetProbabilityConfig(std::wstring const&) */

void __thiscall ProbabilityConfig::GetProbabilityConfig(ProbabilityConfig *this,wstring *param_1)

{
  undefined8 uVar1;
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName(aRStack_18,(wstring *)this);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(uVar1,0x97,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ProbabilityConfig::~ProbabilityConfig() */

void __thiscall ProbabilityConfig::~ProbabilityConfig(ProbabilityConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_06985740;
  std::string::~string((string *)(this + 0x38));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x20));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 8));
  nop();
  return;
}


/* ProbabilityConfig::~ProbabilityConfig() */

void __thiscall ProbabilityConfig::~ProbabilityConfig(ProbabilityConfig *this)

{
  ~ProbabilityConfig(this);
  AK::FreeHook(this);
  return;
}

