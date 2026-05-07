// Class: EgretflowerCountSubSystem


/* EgretflowerCountSubSystem::~EgretflowerCountSubSystem() */

void __thiscall
EgretflowerCountSubSystem::~EgretflowerCountSubSystem(EgretflowerCountSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_0681d460;
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* EgretflowerCountSubSystem::~EgretflowerCountSubSystem() */

void __thiscall
EgretflowerCountSubSystem::~EgretflowerCountSubSystem(EgretflowerCountSubSystem *this)

{
  ~EgretflowerCountSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EgretflowerCountSubSystem::StaticClassInit() */

void EgretflowerCountSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"EgretflowerCountSubSystem");
    (*pcVar2)(plVar1,asStack_10,FUN_042623bc,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EgretflowerCountSubSystem::StaticGetClass() */

long * EgretflowerCountSubSystem::StaticGetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"EgretflowerCountSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EgretflowerCountSubSystem::GetClass() const */

long * EgretflowerCountSubSystem::GetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"EgretflowerCountSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EgretflowerCountSubSystem::EgretflowerAdd() */

void __thiscall EgretflowerCountSubSystem::EgretflowerAdd(EgretflowerCountSubSystem *this)

{
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  return;
}


/* EgretflowerCountSubSystem::EgretflowerRemove() */

void __thiscall EgretflowerCountSubSystem::EgretflowerRemove(EgretflowerCountSubSystem *this)

{
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + -1;
  return;
}


/* EgretflowerCountSubSystem::EgretflowerCountSubSystem() */

void __thiscall
EgretflowerCountSubSystem::EgretflowerCountSubSystem(EgretflowerCountSubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR_GetClass_0681d460;
  return;
}


/* EgretflowerCountSubSystem::StaticNew() */

EgretflowerCountSubSystem * EgretflowerCountSubSystem::StaticNew(void)

{
  EgretflowerCountSubSystem *this;
  
  this = ::operator_new(0x18);
  EgretflowerCountSubSystem(this);
  return this;
}

