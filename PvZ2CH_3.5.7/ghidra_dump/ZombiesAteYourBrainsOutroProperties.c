// Class: ZombiesAteYourBrainsOutroProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiesAteYourBrainsOutroProperties::StaticClassInit() */

void ZombiesAteYourBrainsOutroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiesAteYourBrainsOutroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_046d10d0,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiesAteYourBrainsOutroProperties::StaticGetClass() */

long * ZombiesAteYourBrainsOutroProperties::StaticGetClass(void)

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
  uVar2 = OutroModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiesAteYourBrainsOutroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiesAteYourBrainsOutroProperties::GetClass() const */

long * ZombiesAteYourBrainsOutroProperties::GetClass(void)

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
  uVar2 = OutroModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiesAteYourBrainsOutroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiesAteYourBrainsOutroProperties::GetModuleClass() const */

long * ZombiesAteYourBrainsOutroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ZombiesAteYourBrainsOutro::sClass != (long *)0x0) {
    return ZombiesAteYourBrainsOutro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ZombiesAteYourBrainsOutro::sClass = plVar1;
  uVar2 = OutroModule::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiesAteYourBrainsOutro",uVar2,ZombiesAteYourBrainsOutro::StaticNew);
  return ZombiesAteYourBrainsOutro::sClass;
}


/* ZombiesAteYourBrainsOutroProperties::ZombiesAteYourBrainsOutroProperties() */

void __thiscall
ZombiesAteYourBrainsOutroProperties::ZombiesAteYourBrainsOutroProperties
          (ZombiesAteYourBrainsOutroProperties *this)

{
  OutroModuleProperties::OutroModuleProperties((OutroModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_068b40d0;
  return;
}


/* ZombiesAteYourBrainsOutroProperties::StaticNew() */

ZombiesAteYourBrainsOutroProperties * ZombiesAteYourBrainsOutroProperties::StaticNew(void)

{
  ZombiesAteYourBrainsOutroProperties *this;
  
  this = ::operator_new(0x40);
  ZombiesAteYourBrainsOutroProperties(this);
  return this;
}


/* ZombiesAteYourBrainsOutroProperties::~ZombiesAteYourBrainsOutroProperties() */

void __thiscall
ZombiesAteYourBrainsOutroProperties::~ZombiesAteYourBrainsOutroProperties
          (ZombiesAteYourBrainsOutroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_068b40d0;
  OutroModuleProperties::~OutroModuleProperties((OutroModuleProperties *)this);
  return;
}


/* ZombiesAteYourBrainsOutroProperties::~ZombiesAteYourBrainsOutroProperties() */

void __thiscall
ZombiesAteYourBrainsOutroProperties::~ZombiesAteYourBrainsOutroProperties
          (ZombiesAteYourBrainsOutroProperties *this)

{
  ~ZombiesAteYourBrainsOutroProperties(this);
  AK::FreeHook(this);
  return;
}

