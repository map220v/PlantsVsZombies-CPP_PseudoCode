// Class: EleocurlingBigProjectile


/* EleocurlingBigProjectile::~EleocurlingBigProjectile() */

void __thiscall EleocurlingBigProjectile::~EleocurlingBigProjectile(EleocurlingBigProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06812ff0;
  *(undefined ***)(this + 0x10) = &PTR__EleocurlingBigProjectile_068131e0;
  CurlingCollidableProjectile::~CurlingCollidableProjectile((CurlingCollidableProjectile *)this);
  return;
}


/* non-virtual thunk to EleocurlingBigProjectile::~EleocurlingBigProjectile() */

void __thiscall EleocurlingBigProjectile::~EleocurlingBigProjectile(EleocurlingBigProjectile *this)

{
  ~EleocurlingBigProjectile(this + -0x10);
  return;
}


/* EleocurlingBigProjectile::~EleocurlingBigProjectile() */

void __thiscall EleocurlingBigProjectile::~EleocurlingBigProjectile(EleocurlingBigProjectile *this)

{
  ~EleocurlingBigProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EleocurlingBigProjectile::~EleocurlingBigProjectile() */

void __thiscall EleocurlingBigProjectile::~EleocurlingBigProjectile(EleocurlingBigProjectile *this)

{
  ~EleocurlingBigProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EleocurlingBigProjectile::StaticClassInit() */

void EleocurlingBigProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"EleocurlingBigProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04235c50,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EleocurlingBigProjectile::StaticGetClass() */

long * EleocurlingBigProjectile::StaticGetClass(void)

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
  uVar2 = CurlingCollidableProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"EleocurlingBigProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EleocurlingBigProjectile::GetClass() const */

long * EleocurlingBigProjectile::GetClass(void)

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
  uVar2 = CurlingCollidableProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"EleocurlingBigProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EleocurlingBigProjectile::EleocurlingBigProjectile() */

void __thiscall EleocurlingBigProjectile::EleocurlingBigProjectile(EleocurlingBigProjectile *this)

{
  CurlingCollidableProjectile::CurlingCollidableProjectile((CurlingCollidableProjectile *)this);
  *(undefined ***)this = &PTR_GetClass_06812ff0;
  *(undefined ***)(this + 0x10) = &PTR__EleocurlingBigProjectile_068131e0;
  return;
}


/* EleocurlingBigProjectile::StaticNew() */

EleocurlingBigProjectile * EleocurlingBigProjectile::StaticNew(void)

{
  EleocurlingBigProjectile *this;
  
  this = ::operator_new(0x1c0);
  EleocurlingBigProjectile(this);
  return this;
}


/* EleocurlingBigProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
EleocurlingBigProjectile::OnCollideEntity(EleocurlingBigProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  
  cVar1 = CurlingProjectile::ProcessCurlingCollision((CurlingProjectile *)this,param_1);
  if (cVar1 == '\0') {
    return;
  }
  Projectile::OnCollideEntity((Projectile *)this,param_1);
  return;
}

