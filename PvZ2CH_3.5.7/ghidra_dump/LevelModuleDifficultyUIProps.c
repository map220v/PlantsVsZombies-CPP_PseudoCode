// Class: LevelModuleDifficultyUIProps


/* LevelModuleDifficultyUIProps::~LevelModuleDifficultyUIProps() */

void __thiscall
LevelModuleDifficultyUIProps::~LevelModuleDifficultyUIProps(LevelModuleDifficultyUIProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0678d5b0;
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  FUN_05476c50(this + 0x18);
  FUN_05476c50(this + 0x10);
  GameObject::~GameObject((GameObject *)this);
  return;
}


/* LevelModuleDifficultyUIProps::~LevelModuleDifficultyUIProps() */

void __thiscall
LevelModuleDifficultyUIProps::~LevelModuleDifficultyUIProps(LevelModuleDifficultyUIProps *this)

{
  ~LevelModuleDifficultyUIProps(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelModuleDifficultyUIProps::StaticClassInit() */

void LevelModuleDifficultyUIProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelModuleDifficultyUIProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03e6fe18,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelModuleDifficultyUIProps::StaticGetClass() */

long * LevelModuleDifficultyUIProps::StaticGetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"LevelModuleDifficultyUIProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelModuleDifficultyUIProps::GetClass() const */

long * LevelModuleDifficultyUIProps::GetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"LevelModuleDifficultyUIProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelModuleDifficultyUIProps::LevelModuleDifficultyUIProps() */

void __thiscall
LevelModuleDifficultyUIProps::LevelModuleDifficultyUIProps(LevelModuleDifficultyUIProps *this)

{
  GameObject::GameObject((GameObject *)this);
  *(undefined ***)this = &PTR_GetClass_0678d5b0;
  FUN_05476574(this + 0x10);
  FUN_05476574(this + 0x18);
  Set8BytesTo0(this + 0x20);
  Set8BytesTo0(this + 0x28);
  return;
}


/* LevelModuleDifficultyUIProps::StaticNew() */

LevelModuleDifficultyUIProps * LevelModuleDifficultyUIProps::StaticNew(void)

{
  LevelModuleDifficultyUIProps *this;
  
  this = ::operator_new(0x30);
  LevelModuleDifficultyUIProps(this);
  return this;
}

