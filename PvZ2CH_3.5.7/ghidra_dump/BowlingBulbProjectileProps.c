// Class: BowlingBulbProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BowlingBulbProjectileProps::StaticClassInit() */

void BowlingBulbProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"BowlingBulbProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_041f7f7c,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BowlingBulbProjectileProps::StaticGetClass() */

long * BowlingBulbProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BowlingBulbProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BowlingBulbProjectileProps::GetClass() const */

long * BowlingBulbProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"BowlingBulbProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BowlingBulbProjectileProps::~BowlingBulbProjectileProps() */

void __thiscall
BowlingBulbProjectileProps::~BowlingBulbProjectileProps(BowlingBulbProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06806eb0;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* BowlingBulbProjectileProps::~BowlingBulbProjectileProps() */

void __thiscall
BowlingBulbProjectileProps::~BowlingBulbProjectileProps(BowlingBulbProjectileProps *this)

{
  ~BowlingBulbProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* BowlingBulbProjectileProps::BowlingBulbProjectileProps() */

void __thiscall
BowlingBulbProjectileProps::BowlingBulbProjectileProps(BowlingBulbProjectileProps *this)

{
  undefined4 uVar1;
  
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06806eb0;
  uVar1 = Sexy::SexyMath::DegToRad(45.0);
  *(undefined4 *)(this + 0x1f0) = 0;
  *(undefined4 *)(this + 0x1e0) = uVar1;
  *(undefined4 *)(this + 0x1e8) = 0x7fffffff;
  *(undefined4 *)(this + 0x1ec) = 0x7fffffff;
  *(undefined4 *)(this + 0x1e4) = 0x3f000000;
  return;
}


/* BowlingBulbProjectileProps::StaticNew() */

BowlingBulbProjectileProps * BowlingBulbProjectileProps::StaticNew(void)

{
  BowlingBulbProjectileProps *this;
  
  this = ::operator_new(0x1f8);
  BowlingBulbProjectileProps(this);
  return this;
}

