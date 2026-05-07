// Class: CurlingCollidableProjectile


/* CurlingCollidableProjectile::~CurlingCollidableProjectile() */

void __thiscall
CurlingCollidableProjectile::~CurlingCollidableProjectile(CurlingCollidableProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06812bb0;
  *(undefined ***)(this + 0x10) = &PTR__CurlingCollidableProjectile_06812da0;
  CurlingProjectile::~CurlingProjectile((CurlingProjectile *)this);
  return;
}


/* non-virtual thunk to CurlingCollidableProjectile::~CurlingCollidableProjectile() */

void __thiscall
CurlingCollidableProjectile::~CurlingCollidableProjectile(CurlingCollidableProjectile *this)

{
  ~CurlingCollidableProjectile(this + -0x10);
  return;
}


/* CurlingCollidableProjectile::~CurlingCollidableProjectile() */

void __thiscall
CurlingCollidableProjectile::~CurlingCollidableProjectile(CurlingCollidableProjectile *this)

{
  ~CurlingCollidableProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CurlingCollidableProjectile::~CurlingCollidableProjectile() */

void __thiscall
CurlingCollidableProjectile::~CurlingCollidableProjectile(CurlingCollidableProjectile *this)

{
  ~CurlingCollidableProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CurlingCollidableProjectile::StaticClassInit() */

void CurlingCollidableProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"CurlingCollidableProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04235828,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CurlingCollidableProjectile::StaticGetClass() */

long * CurlingCollidableProjectile::StaticGetClass(void)

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
  uVar2 = CurlingProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"CurlingCollidableProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CurlingCollidableProjectile::GetClass() const */

long * CurlingCollidableProjectile::GetClass(void)

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
  uVar2 = CurlingProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"CurlingCollidableProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CurlingCollidableProjectile::CurlingCollidableProjectile() */

void __thiscall
CurlingCollidableProjectile::CurlingCollidableProjectile(CurlingCollidableProjectile *this)

{
  CurlingProjectile::CurlingProjectile((CurlingProjectile *)this);
  *(undefined ***)this = &PTR_GetClass_06812bb0;
  *(undefined ***)(this + 0x10) = &PTR__CurlingCollidableProjectile_06812da0;
  return;
}


/* CurlingCollidableProjectile::StaticNew() */

CurlingCollidableProjectile * CurlingCollidableProjectile::StaticNew(void)

{
  CurlingCollidableProjectile *this;
  
  this = ::operator_new(0x1c0);
  CurlingCollidableProjectile(this);
  return this;
}

