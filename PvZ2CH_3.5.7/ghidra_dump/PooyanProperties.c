// Class: PooyanProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanProperties::StaticClassInit() */

void PooyanProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PooyanShooterData");
    (*pcVar3)(plVar2,asStack_10,FUN_0477baa8,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PooyanBossBarage");
    (*pcVar3)(plVar2,asStack_10,FUN_0477b6b8,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PooyanProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_04780118,0x150,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PooyanProperties::StaticGetClass() */

long * PooyanProperties::StaticGetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"PooyanProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PooyanProperties::GetClass() const */

long * PooyanProperties::GetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"PooyanProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PooyanProperties::GetModuleClass() const */

long * PooyanProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (PooyanModule::sClass != (long *)0x0) {
    return PooyanModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  PooyanModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"PooyanModule",uVar2,PooyanModule::StaticNew);
  PooyanModule::StaticClassInit();
  return PooyanModule::sClass;
}


/* PooyanProperties::PooyanProperties() */

void __thiscall PooyanProperties::PooyanProperties(PooyanProperties *this)

{
  size_t in_x2;
  
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_068d81b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x80));
  PooyanBossBarage::PooyanBossBarage((PooyanBossBarage *)(this + 0x98));
  PooyanBossBarage::PooyanBossBarage((PooyanBossBarage *)(this + 0xb8));
  PooyanBossBarage::PooyanBossBarage((PooyanBossBarage *)(this + 0xd8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x110));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x128));
  Set8BytesTo0((string *)(this + 0x140));
  Set8BytesTo0(this + 0x148);
  std::string::append((string *)(this + 0x140),"PeaShooter",in_x2);
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  return;
}


/* PooyanProperties::StaticNew() */

PooyanProperties * PooyanProperties::StaticNew(void)

{
  PooyanProperties *this;
  
  this = ::operator_new(0x150);
  PooyanProperties(this);
  return this;
}


/* PooyanProperties::~PooyanProperties() */

void __thiscall PooyanProperties::~PooyanProperties(PooyanProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_068d81b0;
  std::string::~string((string *)(this + 0x148));
  std::string::~string((string *)(this + 0x140));
  std::vector<PooyanBossBarage,std::allocator<PooyanBossBarage>>::~vector
            ((vector<PooyanBossBarage,std::allocator<PooyanBossBarage>> *)(this + 0x128));
  std::vector<PooyanBossBarage,std::allocator<PooyanBossBarage>>::~vector
            ((vector<PooyanBossBarage,std::allocator<PooyanBossBarage>> *)(this + 0x110));
  std::vector<PooyanBossBarage,std::allocator<PooyanBossBarage>>::~vector
            ((vector<PooyanBossBarage,std::allocator<PooyanBossBarage>> *)(this + 0xf8));
  Sexy::SharedRenderTarget::Pool::Entry::~Entry((Entry *)(this + 0xd8));
  Sexy::SharedRenderTarget::Pool::Entry::~Entry((Entry *)(this + 0xb8));
  Sexy::SharedRenderTarget::Pool::Entry::~Entry((Entry *)(this + 0x98));
  std::vector<PooyanShooterData,std::allocator<PooyanShooterData>>::~vector
            ((vector<PooyanShooterData,std::allocator<PooyanShooterData>> *)(this + 0x80));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* PooyanProperties::~PooyanProperties() */

void __thiscall PooyanProperties::~PooyanProperties(PooyanProperties *this)

{
  ~PooyanProperties(this);
  AK::FreeHook(this);
  return;
}

