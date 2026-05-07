// Class: ZombieProspectorProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieProspectorProps::StaticClassInit() */

void ZombieProspectorProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieProspectorProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046bf30c,0x228,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieProspectorProps::ZombieProspectorProps() */

void __thiscall ZombieProspectorProps::ZombieProspectorProps(ZombieProspectorProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined4 *)(this + 0x210) = 0x41200000;
  *(undefined ***)this = &PTR_GetClass_068b0850;
  *(undefined4 *)(this + 0x218) = 0x40200000;
  *(undefined4 *)(this + 0x220) = 0x3fc00000;
  *(undefined4 *)(this + 0x21c) = 0x43160000;
  *(undefined4 *)(this + 0x214) = 0x40400000;
  return;
}


/* ZombieProspectorProps::StaticNew() */

ZombieProspectorProps * ZombieProspectorProps::StaticNew(void)

{
  ZombieProspectorProps *this;
  
  this = ::operator_new(0x228);
  ZombieProspectorProps(this);
  return this;
}


/* ZombieProspectorProps::~ZombieProspectorProps() */

void __thiscall ZombieProspectorProps::~ZombieProspectorProps(ZombieProspectorProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068b0850;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieProspectorProps::~ZombieProspectorProps() */

void __thiscall ZombieProspectorProps::~ZombieProspectorProps(ZombieProspectorProps *this)

{
  ~ZombieProspectorProps(this);
  AK::FreeHook(this);
  return;
}


/* ZombieProspectorProps::StaticGetClass() */

long * ZombieProspectorProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieProspectorProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieProspectorProps::GetClass() const */

long * ZombieProspectorProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieProspectorProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

