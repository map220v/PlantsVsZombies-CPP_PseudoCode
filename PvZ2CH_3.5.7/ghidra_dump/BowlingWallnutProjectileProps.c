// Class: BowlingWallnutProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BowlingWallnutProjectileProps::StaticClassInit() */

void BowlingWallnutProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"BowlingWallnutProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04e0add0,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BowlingWallnutProjectileProps::StaticGetClass() */

long * BowlingWallnutProjectileProps::StaticGetClass(void)

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
  uVar2 = BowlingBulbProjectileProps::StaticGetClass();
  (*pcVar3)(plVar1,"BowlingWallnutProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BowlingWallnutProjectileProps::GetClass() const */

long * BowlingWallnutProjectileProps::GetClass(void)

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
  uVar2 = BowlingBulbProjectileProps::StaticGetClass();
  (*pcVar3)(plVar1,"BowlingWallnutProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BowlingWallnutProjectileProps::~BowlingWallnutProjectileProps() */

void __thiscall
BowlingWallnutProjectileProps::~BowlingWallnutProjectileProps(BowlingWallnutProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069d34f0;
  BowlingBulbProjectileProps::~BowlingBulbProjectileProps((BowlingBulbProjectileProps *)this);
  return;
}


/* BowlingWallnutProjectileProps::~BowlingWallnutProjectileProps() */

void __thiscall
BowlingWallnutProjectileProps::~BowlingWallnutProjectileProps(BowlingWallnutProjectileProps *this)

{
  ~BowlingWallnutProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* BowlingWallnutProjectileProps::BowlingWallnutProjectileProps() */

void __thiscall
BowlingWallnutProjectileProps::BowlingWallnutProjectileProps(BowlingWallnutProjectileProps *this)

{
  BowlingBulbProjectileProps::BowlingBulbProjectileProps((BowlingBulbProjectileProps *)this);
  *(undefined ***)this = &PTR_GetClass_069d34f0;
  return;
}


/* BowlingWallnutProjectileProps::StaticNew() */

BowlingWallnutProjectileProps * BowlingWallnutProjectileProps::StaticNew(void)

{
  BowlingWallnutProjectileProps *this;
  
  this = ::operator_new(0x1f8);
  BowlingWallnutProjectileProps(this);
  return this;
}

