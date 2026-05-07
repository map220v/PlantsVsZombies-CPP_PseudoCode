// Class: ZombieMagicBronzeProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMagicBronzeProps::StaticClassInit() */

void ZombieMagicBronzeProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieMagicBronzeProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046c2a38,0x238,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieMagicBronzeProps::ZombieMagicBronzeProps() */

void __thiscall ZombieMagicBronzeProps::ZombieMagicBronzeProps(ZombieMagicBronzeProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_068b1420;
  CZombieSummonDataPool::CZombieSummonDataPool((CZombieSummonDataPool *)(this + 0x210));
  return;
}


/* ZombieMagicBronzeProps::StaticNew() */

ZombieMagicBronzeProps * ZombieMagicBronzeProps::StaticNew(void)

{
  ZombieMagicBronzeProps *this;
  
  this = ::operator_new(0x238);
  ZombieMagicBronzeProps(this);
  return this;
}


/* ZombieMagicBronzeProps::~ZombieMagicBronzeProps() */

void __thiscall ZombieMagicBronzeProps::~ZombieMagicBronzeProps(ZombieMagicBronzeProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068b1420;
  CZombieSummonDataPool::~CZombieSummonDataPool((CZombieSummonDataPool *)(this + 0x210));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieMagicBronzeProps::~ZombieMagicBronzeProps() */

void __thiscall ZombieMagicBronzeProps::~ZombieMagicBronzeProps(ZombieMagicBronzeProps *this)

{
  ~ZombieMagicBronzeProps(this);
  AK::FreeHook(this);
  return;
}


/* ZombieMagicBronzeProps::StaticGetClass() */

long * ZombieMagicBronzeProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieMagicBronzeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMagicBronzeProps::GetClass() const */

long * ZombieMagicBronzeProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieMagicBronzeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

