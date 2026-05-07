// Class: ButtercupProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ButtercupProjectileProps::StaticClassInit() */

void ButtercupProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ButtercupProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03b34328,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ButtercupProjectileProps::StaticGetClass() */

long * ButtercupProjectileProps::StaticGetClass(void)

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
  uVar2 = ProjectilePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"ButtercupProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ButtercupProjectileProps::GetClass() const */

long * ButtercupProjectileProps::GetClass(void)

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
  uVar2 = ProjectilePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"ButtercupProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ButtercupProjectileProps::~ButtercupProjectileProps() */

void __thiscall ButtercupProjectileProps::~ButtercupProjectileProps(ButtercupProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0672fd20;
  std::string::~string((string *)(this + 0x1f0));
  std::string::~string((string *)(this + 0x1e8));
  std::string::~string((string *)(this + 0x1e0));
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* ButtercupProjectileProps::~ButtercupProjectileProps() */

void __thiscall ButtercupProjectileProps::~ButtercupProjectileProps(ButtercupProjectileProps *this)

{
  ~ButtercupProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* ButtercupProjectileProps::ButtercupProjectileProps() */

void __thiscall ButtercupProjectileProps::ButtercupProjectileProps(ButtercupProjectileProps *this)

{
  size_t in_x2;
  
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_0672fd20;
  Set8BytesTo0((string *)(this + 0x1e0));
  Set8BytesTo0((string *)(this + 0x1e8));
  Set8BytesTo0((string *)(this + 0x1f0));
  std::string::append((string *)(this + 0x1e0),"butter",in_x2);
  std::string::append((string *)(this + 0x1e8),"",in_x2);
  std::string::append((string *)(this + 0x1f0),"",in_x2);
  return;
}


/* ButtercupProjectileProps::StaticNew() */

ButtercupProjectileProps * ButtercupProjectileProps::StaticNew(void)

{
  ButtercupProjectileProps *this;
  
  this = ::operator_new(0x1f8);
  ButtercupProjectileProps(this);
  return this;
}

