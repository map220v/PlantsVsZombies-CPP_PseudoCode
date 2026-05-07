// Class: HotUIConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIConfig::StaticClassInit() */

void HotUIConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIConfig");
    (*pcVar2)(plVar1,asStack_10,FUN_0362503c,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIConfig::StaticGetClass() */

long * HotUIConfig::StaticGetClass(void)

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
  uVar2 = ObjectTypeDescriptor::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIConfig::GetClass() const */

long * HotUIConfig::GetClass(void)

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
  uVar2 = ObjectTypeDescriptor::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIConfig::HotUIConfig() */

void __thiscall HotUIConfig::HotUIConfig(HotUIConfig *this)

{
  ObjectTypeDescriptor::ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  *(undefined ***)this = &PTR_GetClass_0666bed0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* HotUIConfig::StaticNew() */

HotUIConfig * HotUIConfig::StaticNew(void)

{
  HotUIConfig *this;
  
  this = ::operator_new(0x28);
  HotUIConfig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIConfig::GetConfig() */

void HotUIConfig::GetConfig(void)

{
  undefined8 uVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName(aRStack_18,L"HotUIConfig");
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar1,0x8f,aRStack_18);
  uVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* HotUIConfig::~HotUIConfig() */

void __thiscall HotUIConfig::~HotUIConfig(HotUIConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_0666bed0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x10));
  ObjectTypeDescriptor::~ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  return;
}


/* HotUIConfig::~HotUIConfig() */

void __thiscall HotUIConfig::~HotUIConfig(HotUIConfig *this)

{
  ~HotUIConfig(this);
  AK::FreeHook(this);
  return;
}

