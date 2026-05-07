// Class: LevelBasedModifier_MoldProps


/* LevelBasedModifier_MoldProps::GetModuleClass() const */

long * LevelBasedModifier_MoldProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (LevelBasedModifier_MoldModule::sClass != (long *)0x0) {
    return LevelBasedModifier_MoldModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  LevelBasedModifier_MoldModule::sClass = plVar1;
  uVar2 = LevelBasedModifierModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelBasedModifier_MoldModule",uVar2,LevelBasedModifier_MoldModule::StaticNew);
  LevelBasedModifier_MoldModule::StaticClassInit();
  return LevelBasedModifier_MoldModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifier_MoldProps::StaticClassInit() */

void LevelBasedModifier_MoldProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelBasedModifier_MoldProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03401d30,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelBasedModifier_MoldProps::StaticGetClass() */

long * LevelBasedModifier_MoldProps::StaticGetClass(void)

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
  uVar2 = LevelBasedModifierModuleProps::StaticGetClass();
  (*pcVar3)(plVar1,"LevelBasedModifier_MoldProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifier_MoldProps::GetClass() const */

long * LevelBasedModifier_MoldProps::GetClass(void)

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
  uVar2 = LevelBasedModifierModuleProps::StaticGetClass();
  (*pcVar3)(plVar1,"LevelBasedModifier_MoldProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifier_MoldProps::LevelBasedModifier_MoldProps() */

void __thiscall
LevelBasedModifier_MoldProps::LevelBasedModifier_MoldProps(LevelBasedModifier_MoldProps *this)

{
  LevelBasedModifierModuleProps::LevelBasedModifierModuleProps
            ((LevelBasedModifierModuleProps *)this);
  *(undefined ***)this = &PTR_GetClass_0661f190;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x60));
  return;
}


/* LevelBasedModifier_MoldProps::StaticNew() */

LevelBasedModifier_MoldProps * LevelBasedModifier_MoldProps::StaticNew(void)

{
  LevelBasedModifier_MoldProps *this;
  
  this = ::operator_new(0x68);
  LevelBasedModifier_MoldProps(this);
  return this;
}


/* LevelBasedModifier_MoldProps::~LevelBasedModifier_MoldProps() */

void __thiscall
LevelBasedModifier_MoldProps::~LevelBasedModifier_MoldProps(LevelBasedModifier_MoldProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0661f190;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
  LevelBasedModifierModuleProps::~LevelBasedModifierModuleProps
            ((LevelBasedModifierModuleProps *)this);
  return;
}


/* LevelBasedModifier_MoldProps::~LevelBasedModifier_MoldProps() */

void __thiscall
LevelBasedModifier_MoldProps::~LevelBasedModifier_MoldProps(LevelBasedModifier_MoldProps *this)

{
  ~LevelBasedModifier_MoldProps(this);
  AK::FreeHook(this);
  return;
}

