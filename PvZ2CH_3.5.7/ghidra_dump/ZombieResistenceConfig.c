// Class: ZombieResistenceConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieResistenceConfig::StaticClassInit() */

void ZombieResistenceConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"ResistenceValueInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_046ec338,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombieResistenceConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_046eccdc,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieResistenceConfig::StaticGetClass() */

long * ZombieResistenceConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieResistenceConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieResistenceConfig::GetClass() const */

long * ZombieResistenceConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieResistenceConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieResistenceConfig::ZombieResistenceConfig() */

void __thiscall ZombieResistenceConfig::ZombieResistenceConfig(ZombieResistenceConfig *this)

{
  ObjectTypeDescriptor::ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  *(undefined ***)this = &PTR_GetClass_068b7be0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* ZombieResistenceConfig::StaticNew() */

ZombieResistenceConfig * ZombieResistenceConfig::StaticNew(void)

{
  ZombieResistenceConfig *this;
  
  this = ::operator_new(0x28);
  ZombieResistenceConfig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieResistenceConfig::GetConfig() */

void ZombieResistenceConfig::GetConfig(void)

{
  undefined8 uVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName(aRStack_18,L"ResistenceConfig");
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar1,0xa7,aRStack_18);
  uVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* ZombieResistenceConfig::~ZombieResistenceConfig() */

void __thiscall ZombieResistenceConfig::~ZombieResistenceConfig(ZombieResistenceConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_068b7be0;
  std::
  vector<ZombieResistenceConfig::ResistenceValueInfo,std::allocator<ZombieResistenceConfig::ResistenceValueInfo>>
  ::~vector((vector<ZombieResistenceConfig::ResistenceValueInfo,std::allocator<ZombieResistenceConfig::ResistenceValueInfo>>
             *)(this + 0x10));
  ObjectTypeDescriptor::~ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  return;
}


/* ZombieResistenceConfig::~ZombieResistenceConfig() */

void __thiscall ZombieResistenceConfig::~ZombieResistenceConfig(ZombieResistenceConfig *this)

{
  ~ZombieResistenceConfig(this);
  AK::FreeHook(this);
  return;
}

