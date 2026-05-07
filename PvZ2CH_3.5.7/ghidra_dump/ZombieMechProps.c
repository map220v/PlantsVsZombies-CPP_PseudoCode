// Class: ZombieMechProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMechProps::StaticClassInit() */

void ZombieMechProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieMechProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046bbb78,0x228,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieMechProps::ZombieMechProps() */

void __thiscall ZombieMechProps::ZombieMechProps(ZombieMechProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_068b0100;
  Set8BytesTo0(this + 0x210);
  Set8BytesTo0(this + 0x218);
  *(undefined4 *)(this + 0x220) = 0;
  return;
}


/* ZombieMechProps::StaticNew() */

ZombieMechProps * ZombieMechProps::StaticNew(void)

{
  ZombieMechProps *this;
  
  this = ::operator_new(0x228);
  ZombieMechProps(this);
  return this;
}


/* ZombieMechProps::~ZombieMechProps() */

void __thiscall ZombieMechProps::~ZombieMechProps(ZombieMechProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068b0100;
  std::string::~string((string *)(this + 0x218));
  std::string::~string((string *)(this + 0x210));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieMechProps::~ZombieMechProps() */

void __thiscall ZombieMechProps::~ZombieMechProps(ZombieMechProps *this)

{
  ~ZombieMechProps(this);
  AK::FreeHook(this);
  return;
}


/* ZombieMechProps::StaticGetClass() */

long * ZombieMechProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieMechProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMechProps::GetClass() const */

long * ZombieMechProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieMechProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

