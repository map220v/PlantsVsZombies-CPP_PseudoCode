// Class: ZombieGongProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGongProps::StaticClassInit() */

void ZombieGongProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieGongProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046c09b8,0x220,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieGongProps::ZombieGongProps() */

void __thiscall ZombieGongProps::ZombieGongProps(ZombieGongProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined4 *)(this + 0x21c) = 0;
  *(undefined ***)this = &PTR_GetClass_068b0df0;
  *(undefined4 *)(this + 0x210) = 0;
  *(undefined4 *)(this + 0x214) = 0;
  *(undefined4 *)(this + 0x218) = 0;
  return;
}


/* ZombieGongProps::StaticNew() */

ZombieGongProps * ZombieGongProps::StaticNew(void)

{
  ZombieGongProps *this;
  
  this = ::operator_new(0x220);
  ZombieGongProps(this);
  return this;
}


/* ZombieGongProps::~ZombieGongProps() */

void __thiscall ZombieGongProps::~ZombieGongProps(ZombieGongProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068b0df0;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieGongProps::~ZombieGongProps() */

void __thiscall ZombieGongProps::~ZombieGongProps(ZombieGongProps *this)

{
  ~ZombieGongProps(this);
  AK::FreeHook(this);
  return;
}


/* ZombieGongProps::StaticGetClass() */

long * ZombieGongProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieGongProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieGongProps::GetClass() const */

long * ZombieGongProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieGongProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

