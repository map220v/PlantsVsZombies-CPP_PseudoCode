// Class: FirecrackerFlowerProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FirecrackerFlowerProjectileProps::StaticClassInit() */

void FirecrackerFlowerProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"FirecrackerFlowerProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f46978,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FirecrackerFlowerProjectileProps::StaticGetClass() */

long * FirecrackerFlowerProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"FirecrackerFlowerProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FirecrackerFlowerProjectileProps::GetClass() const */

long * FirecrackerFlowerProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"FirecrackerFlowerProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FirecrackerFlowerProjectileProps::~FirecrackerFlowerProjectileProps() */

void __thiscall
FirecrackerFlowerProjectileProps::~FirecrackerFlowerProjectileProps
          (FirecrackerFlowerProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06797ac0;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* FirecrackerFlowerProjectileProps::~FirecrackerFlowerProjectileProps() */

void __thiscall
FirecrackerFlowerProjectileProps::~FirecrackerFlowerProjectileProps
          (FirecrackerFlowerProjectileProps *this)

{
  ~FirecrackerFlowerProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* FirecrackerFlowerProjectileProps::FirecrackerFlowerProjectileProps() */

void __thiscall
FirecrackerFlowerProjectileProps::FirecrackerFlowerProjectileProps
          (FirecrackerFlowerProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined4 *)(this + 0x1e4) = 0x3fc00000;
  *(undefined ***)this = &PTR_GetClass_06797ac0;
  *(undefined4 *)(this + 0x1e0) = 0x42200000;
  *(undefined4 *)(this + 0x1e8) = 0;
  return;
}


/* FirecrackerFlowerProjectileProps::StaticNew() */

FirecrackerFlowerProjectileProps * FirecrackerFlowerProjectileProps::StaticNew(void)

{
  FirecrackerFlowerProjectileProps *this;
  
  this = ::operator_new(0x1f8);
  FirecrackerFlowerProjectileProps(this);
  return this;
}

