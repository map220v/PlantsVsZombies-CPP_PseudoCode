// Class: ZombieRomanMedusaProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanMedusaProps::StaticClassInit() */

void ZombieRomanMedusaProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieRomanMedusaProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04efa694,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieRomanMedusaProps::StaticGetClass() */

long * ZombieRomanMedusaProps::StaticGetClass(void)

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
  uVar2 = ZombieIceAgeTroglobiteProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieRomanMedusaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRomanMedusaProps::GetClass() const */

long * ZombieRomanMedusaProps::GetClass(void)

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
  uVar2 = ZombieIceAgeTroglobiteProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieRomanMedusaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanMedusaProps::ZombieRomanMedusaProps() */

void __thiscall ZombieRomanMedusaProps::ZombieRomanMedusaProps(ZombieRomanMedusaProps *this)

{
  size_t __n;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieIceAgeTroglobiteProps::ZombieIceAgeTroglobiteProps((ZombieIceAgeTroglobiteProps *)this);
  *(undefined ***)this = &PTR_GetClass_06a08960;
  Set8BytesTo0((string *)(this + 0x240));
  std::string::string(asStack_10,"roman_armor4");
  nop();
  __n = 3;
  *(undefined4 *)(this + 0x228) = 3;
  std::string::append((string *)(this + 0x230),"stoneblocked",3);
  *(undefined4 *)(this + 0x238) = 0x3fc00000;
  std::string::append((string *)(this + 0x240),"zombie_statue",__n);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieRomanMedusaProps::StaticNew() */

ZombieRomanMedusaProps * ZombieRomanMedusaProps::StaticNew(void)

{
  ZombieRomanMedusaProps *this;
  
  this = ::operator_new(0x248);
  ZombieRomanMedusaProps(this);
  return this;
}


/* ZombieRomanMedusaProps::~ZombieRomanMedusaProps() */

void __thiscall ZombieRomanMedusaProps::~ZombieRomanMedusaProps(ZombieRomanMedusaProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06a08960;
  std::string::~string((string *)(this + 0x240));
  ZombieIceAgeTroglobiteProps::~ZombieIceAgeTroglobiteProps((ZombieIceAgeTroglobiteProps *)this);
  return;
}


/* ZombieRomanMedusaProps::~ZombieRomanMedusaProps() */

void __thiscall ZombieRomanMedusaProps::~ZombieRomanMedusaProps(ZombieRomanMedusaProps *this)

{
  ~ZombieRomanMedusaProps(this);
  AK::FreeHook(this);
  return;
}

