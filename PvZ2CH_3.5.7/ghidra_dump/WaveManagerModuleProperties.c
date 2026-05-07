// Class: WaveManagerModuleProperties


/* WaveManagerModuleProperties::GetModuleClass() const */

long * WaveManagerModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (WaveManagerModule::sClass != (long *)0x0) {
    return WaveManagerModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  WaveManagerModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"WaveManagerModule",uVar2,WaveManagerModule::StaticNew);
  WaveManagerModule::StaticClassInit();
  return WaveManagerModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveManagerModuleProperties::StaticClassInit() */

void WaveManagerModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"DynamicZombiesInstruction");
    (*pcVar3)(plVar2,asStack_10,FUN_0492cf2c,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"WaveManagerModuleProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_0492b834,0x88,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaveManagerModuleProperties::StaticGetClass() */

long * WaveManagerModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WaveManagerModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaveManagerModuleProperties::GetClass() const */

long * WaveManagerModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"WaveManagerModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaveManagerModuleProperties::WaveManagerModuleProperties() */

void __thiscall
WaveManagerModuleProperties::WaveManagerModuleProperties(WaveManagerModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06911160;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  this[0x48] = (WaveManagerModuleProperties)0x0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  this[0x80] = (WaveManagerModuleProperties)0x1;
  return;
}


/* WaveManagerModuleProperties::StaticNew() */

WaveManagerModuleProperties * WaveManagerModuleProperties::StaticNew(void)

{
  WaveManagerModuleProperties *this;
  
  this = ::operator_new(0x88);
  WaveManagerModuleProperties(this);
  return this;
}


/* WaveManagerModuleProperties::~WaveManagerModuleProperties() */

void __thiscall
WaveManagerModuleProperties::~WaveManagerModuleProperties(WaveManagerModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06911160;
  std::
  vector<Sexy::RtWeakPtr<WaveManagerProperties>,std::allocator<Sexy::RtWeakPtr<WaveManagerProperties>>>
  ::~vector((vector<Sexy::RtWeakPtr<WaveManagerProperties>,std::allocator<Sexy::RtWeakPtr<WaveManagerProperties>>>
             *)(this + 0x68));
  std::vector<DynamicZombiesInstruction,std::allocator<DynamicZombiesInstruction>>::~vector
            ((vector<DynamicZombiesInstruction,std::allocator<DynamicZombiesInstruction>> *)
             (this + 0x50));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* WaveManagerModuleProperties::~WaveManagerModuleProperties() */

void __thiscall
WaveManagerModuleProperties::~WaveManagerModuleProperties(WaveManagerModuleProperties *this)

{
  ~WaveManagerModuleProperties(this);
  AK::FreeHook(this);
  return;
}

