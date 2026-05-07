// Class: EleocurlingSmallProjectile


/* EleocurlingSmallProjectile::~EleocurlingSmallProjectile() */

void __thiscall
EleocurlingSmallProjectile::~EleocurlingSmallProjectile(EleocurlingSmallProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06812dd0;
  *(undefined ***)(this + 0x10) = &PTR__EleocurlingSmallProjectile_06812fc0;
  CurlingProjectile::~CurlingProjectile((CurlingProjectile *)this);
  return;
}


/* non-virtual thunk to EleocurlingSmallProjectile::~EleocurlingSmallProjectile() */

void __thiscall
EleocurlingSmallProjectile::~EleocurlingSmallProjectile(EleocurlingSmallProjectile *this)

{
  ~EleocurlingSmallProjectile(this + -0x10);
  return;
}


/* EleocurlingSmallProjectile::~EleocurlingSmallProjectile() */

void __thiscall
EleocurlingSmallProjectile::~EleocurlingSmallProjectile(EleocurlingSmallProjectile *this)

{
  ~EleocurlingSmallProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EleocurlingSmallProjectile::~EleocurlingSmallProjectile() */

void __thiscall
EleocurlingSmallProjectile::~EleocurlingSmallProjectile(EleocurlingSmallProjectile *this)

{
  ~EleocurlingSmallProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EleocurlingSmallProjectile::StaticClassInit() */

void EleocurlingSmallProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"EleocurlingSmallProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04235a3c,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EleocurlingSmallProjectile::StaticGetClass() */

long * EleocurlingSmallProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EleocurlingSmallProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EleocurlingSmallProjectile::GetClass() const */

long * EleocurlingSmallProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"EleocurlingSmallProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EleocurlingSmallProjectile::EleocurlingSmallProjectile() */

void __thiscall
EleocurlingSmallProjectile::EleocurlingSmallProjectile(EleocurlingSmallProjectile *this)

{
  CurlingProjectile::CurlingProjectile((CurlingProjectile *)this);
  *(undefined ***)this = &PTR_GetClass_06812dd0;
  *(undefined ***)(this + 0x10) = &PTR__EleocurlingSmallProjectile_06812fc0;
  return;
}


/* EleocurlingSmallProjectile::StaticNew() */

EleocurlingSmallProjectile * EleocurlingSmallProjectile::StaticNew(void)

{
  EleocurlingSmallProjectile *this;
  
  this = ::operator_new(0x1c0);
  EleocurlingSmallProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EleocurlingSmallProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
EleocurlingSmallProjectile::OnCollideEntity(EleocurlingSmallProjectile *this,BoardEntity *param_1)

{
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    Sexy::Point::Point((Point *)&local_18);
    BoardEntity::CalcGridPosition();
    local_18 = local_10;
    std::string::string((string *)&local_10,"curlingitem_small");
    CurlingProjectile::CreateCurlingAt
              ((CurlingProjectile *)this,(string *)&local_10,(Point *)&local_18,false);
    std::string::~string((string *)&local_10);
    nop();
    CurlingProjectile::BeakBackZombie((CurlingProjectile *)this,param_1);
  }
  Projectile::OnCollideEntity((Projectile *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

