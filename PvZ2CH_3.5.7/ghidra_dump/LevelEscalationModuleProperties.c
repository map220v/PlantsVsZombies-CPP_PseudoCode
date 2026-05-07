// Class: LevelEscalationModuleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEscalationModuleProperties::StaticClassInit() */

void LevelEscalationModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelEscalationModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_049d1774,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEscalationModuleProperties::StaticGetClass() */

long * LevelEscalationModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelEscalationModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelEscalationModuleProperties::GetClass() const */

long * LevelEscalationModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"LevelEscalationModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelEscalationModuleProperties::GetModuleClass() const */

long * LevelEscalationModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (LevelEscalationModule::sClass != (long *)0x0) {
    return LevelEscalationModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  LevelEscalationModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelEscalationModule",uVar2,LevelEscalationModule::StaticNew);
  LevelEscalationModule::StaticClassInit();
  return LevelEscalationModule::sClass;
}


/* LevelEscalationModuleProperties::LevelEscalationModuleProperties() */

void __thiscall
LevelEscalationModuleProperties::LevelEscalationModuleProperties
          (LevelEscalationModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06928ef0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  *(undefined4 *)(this + 0x60) = 1;
  *(undefined4 *)(this + 100) = 1;
  *(undefined4 *)(this + 0x68) = 1;
  *(undefined4 *)(this + 0x6c) = 10;
  *(undefined4 *)(this + 0x70) = 600;
  return;
}


/* LevelEscalationModuleProperties::StaticNew() */

LevelEscalationModuleProperties * LevelEscalationModuleProperties::StaticNew(void)

{
  LevelEscalationModuleProperties *this;
  
  this = ::operator_new(0x78);
  LevelEscalationModuleProperties(this);
  return this;
}


/* LevelEscalationModuleProperties::~LevelEscalationModuleProperties() */

void __thiscall
LevelEscalationModuleProperties::~LevelEscalationModuleProperties
          (LevelEscalationModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06928ef0;
  std::vector<Sexy::RtWeakPtr<ZombieType>,std::allocator<Sexy::RtWeakPtr<ZombieType>>>::~vector
            ((vector<Sexy::RtWeakPtr<ZombieType>,std::allocator<Sexy::RtWeakPtr<ZombieType>>> *)
             (this + 0x48));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* LevelEscalationModuleProperties::~LevelEscalationModuleProperties() */

void __thiscall
LevelEscalationModuleProperties::~LevelEscalationModuleProperties
          (LevelEscalationModuleProperties *this)

{
  ~LevelEscalationModuleProperties(this);
  AK::FreeHook(this);
  return;
}

