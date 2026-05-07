// Class: ZombieMirrorQueenPoisonAppleProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMirrorQueenPoisonAppleProjectileProps::StaticClassInit() */

void ZombieMirrorQueenPoisonAppleProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieMirrorQueenPoisonAppleProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04f06f50,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieMirrorQueenPoisonAppleProjectileProps::StaticGetClass() */

long * ZombieMirrorQueenPoisonAppleProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieMirrorQueenPoisonAppleProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMirrorQueenPoisonAppleProjectileProps::GetClass() const */

long * ZombieMirrorQueenPoisonAppleProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieMirrorQueenPoisonAppleProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMirrorQueenPoisonAppleProjectileProps::~ZombieMirrorQueenPoisonAppleProjectileProps() */

void __thiscall
ZombieMirrorQueenPoisonAppleProjectileProps::~ZombieMirrorQueenPoisonAppleProjectileProps
          (ZombieMirrorQueenPoisonAppleProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06a0e040;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* ZombieMirrorQueenPoisonAppleProjectileProps::~ZombieMirrorQueenPoisonAppleProjectileProps() */

void __thiscall
ZombieMirrorQueenPoisonAppleProjectileProps::~ZombieMirrorQueenPoisonAppleProjectileProps
          (ZombieMirrorQueenPoisonAppleProjectileProps *this)

{
  ~ZombieMirrorQueenPoisonAppleProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* ZombieMirrorQueenPoisonAppleProjectileProps::ZombieMirrorQueenPoisonAppleProjectileProps() */

void __thiscall
ZombieMirrorQueenPoisonAppleProjectileProps::ZombieMirrorQueenPoisonAppleProjectileProps
          (ZombieMirrorQueenPoisonAppleProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined4 *)(this + 0x1e4) = 0x41200000;
  *(undefined ***)this = &PTR_GetClass_06a0e040;
  *(undefined4 *)(this + 0x1e0) = 0x43480000;
  return;
}


/* ZombieMirrorQueenPoisonAppleProjectileProps::StaticNew() */

ZombieMirrorQueenPoisonAppleProjectileProps *
ZombieMirrorQueenPoisonAppleProjectileProps::StaticNew(void)

{
  ZombieMirrorQueenPoisonAppleProjectileProps *this;
  
  this = ::operator_new(0x1e8);
  ZombieMirrorQueenPoisonAppleProjectileProps(this);
  return this;
}

