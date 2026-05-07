// Class: GameSubSystem


/* GameSubSystem::~GameSubSystem() */

void __thiscall GameSubSystem::~GameSubSystem(GameSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_0676aea0;
  GameObject::~GameObject((GameObject *)this);
  return;
}


/* GameSubSystem::~GameSubSystem() */

void __thiscall GameSubSystem::~GameSubSystem(GameSubSystem *this)

{
  ~GameSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* GameSubSystem::GameSubSystem() */

void __thiscall GameSubSystem::GameSubSystem(GameSubSystem *this)

{
  GameObject::GameObject((GameObject *)this);
  *(undefined ***)this = &PTR_GetClass_0676aea0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameSubSystem::StaticClassInit() */

void GameSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"GameSubSystem");
    (*pcVar2)(plVar1,asStack_10,FUN_03d51220,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GameSubSystem::StaticGetClass() */

long * GameSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GameSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GameSubSystem::GetClass() const */

long * GameSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"GameSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GameSubSystem::StaticNew() */

GameSubSystem * GameSubSystem::StaticNew(void)

{
  GameSubSystem *this;
  
  this = ::operator_new(0x10);
  GameSubSystem(this);
  return this;
}

