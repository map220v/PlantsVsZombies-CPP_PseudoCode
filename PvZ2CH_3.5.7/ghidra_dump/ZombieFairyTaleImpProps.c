// Class: ZombieFairyTaleImpProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFairyTaleImpProps::StaticClassInit() */

void ZombieFairyTaleImpProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieFairyTaleImpProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04ed0fa4,0x220,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieFairyTaleImpProps::StaticGetClass() */

long * ZombieFairyTaleImpProps::StaticGetClass(void)

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
  uVar2 = ZombiePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieFairyTaleImpProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieFairyTaleImpProps::GetClass() const */

long * ZombieFairyTaleImpProps::GetClass(void)

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
  uVar2 = ZombiePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieFairyTaleImpProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieFairyTaleImpProps::ZombieFairyTaleImpProps() */

void __thiscall ZombieFairyTaleImpProps::ZombieFairyTaleImpProps(ZombieFairyTaleImpProps *this)

{
  size_t in_x2;
  
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_069f7d70;
  Set8BytesTo0((string *)(this + 0x218));
  *(undefined4 *)(this + 0x210) = 0;
  *(undefined4 *)(this + 0x214) = 0;
  std::string::append((string *)(this + 0x218),"",in_x2);
  return;
}


/* ZombieFairyTaleImpProps::StaticNew() */

ZombieFairyTaleImpProps * ZombieFairyTaleImpProps::StaticNew(void)

{
  ZombieFairyTaleImpProps *this;
  
  this = ::operator_new(0x220);
  ZombieFairyTaleImpProps(this);
  return this;
}


/* ZombieFairyTaleImpProps::~ZombieFairyTaleImpProps() */

void __thiscall ZombieFairyTaleImpProps::~ZombieFairyTaleImpProps(ZombieFairyTaleImpProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069f7d70;
  std::string::~string((string *)(this + 0x218));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieFairyTaleImpProps::~ZombieFairyTaleImpProps() */

void __thiscall ZombieFairyTaleImpProps::~ZombieFairyTaleImpProps(ZombieFairyTaleImpProps *this)

{
  ~ZombieFairyTaleImpProps(this);
  AK::FreeHook(this);
  return;
}

