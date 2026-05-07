// Class: MiniGamePerkItemXRay


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkItemXRay::StaticClassInit() */

void MiniGamePerkItemXRay::StaticClassInit(void)

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
    std::string::string(asStack_10,"MiniGamePerkItemXRay");
    (*pcVar2)(plVar1,asStack_10,FUN_03898a64,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGamePerkItemXRay::StaticGetClass() */

long * MiniGamePerkItemXRay::StaticGetClass(void)

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
  uVar2 = MiniGamePerkItem::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGamePerkItemXRay",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGamePerkItemXRay::GetClass() const */

long * MiniGamePerkItemXRay::GetClass(void)

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
  uVar2 = MiniGamePerkItem::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGamePerkItemXRay",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGamePerkItemXRay::~MiniGamePerkItemXRay() */

void __thiscall MiniGamePerkItemXRay::~MiniGamePerkItemXRay(MiniGamePerkItemXRay *this)

{
  *(undefined ***)this = &PTR_GetClass_066b07f0;
  MiniGamePerkItem::~MiniGamePerkItem((MiniGamePerkItem *)this);
  return;
}


/* MiniGamePerkItemXRay::~MiniGamePerkItemXRay() */

void __thiscall MiniGamePerkItemXRay::~MiniGamePerkItemXRay(MiniGamePerkItemXRay *this)

{
  ~MiniGamePerkItemXRay(this);
  AK::FreeHook(this);
  return;
}


/* MiniGamePerkItemXRay::tryReveal() */

void MiniGamePerkItemXRay::tryReveal(void)

{
  MessageRouter::Post<float,float>((_func_void_float *)gMessageRouter,10.0);
  return;
}


/* MiniGamePerkItemXRay::Use() */

void __thiscall MiniGamePerkItemXRay::Use(MiniGamePerkItemXRay *this)

{
  MiniGamePerkItem::Use((MiniGamePerkItem *)this);
  tryReveal();
  return;
}


/* MiniGamePerkItemXRay::MiniGamePerkItemXRay() */

void __thiscall MiniGamePerkItemXRay::MiniGamePerkItemXRay(MiniGamePerkItemXRay *this)

{
  MiniGamePerkItem::MiniGamePerkItem((MiniGamePerkItem *)this);
  *(undefined ***)this = &PTR_GetClass_066b07f0;
  return;
}


/* MiniGamePerkItemXRay::StaticNew() */

MiniGamePerkItemXRay * MiniGamePerkItemXRay::StaticNew(void)

{
  MiniGamePerkItemXRay *this;
  
  this = ::operator_new(0x30);
  MiniGamePerkItemXRay(this);
  return this;
}

