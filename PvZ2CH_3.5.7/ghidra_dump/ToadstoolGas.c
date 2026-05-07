// Class: ToadstoolGas


/* ToadstoolGas::onProjectileInitialized() */

void __thiscall ToadstoolGas::onProjectileInitialized(ToadstoolGas *this)

{
  *(undefined4 *)(this + 0x1a8) = 0xffffffff;
  return;
}


/* ToadstoolGas::onSetInstigator(BoardEntity*) */

void __thiscall ToadstoolGas::onSetInstigator(ToadstoolGas *this,BoardEntity *param_1)

{
  undefined4 uVar1;
  
  uVar1 = SharkMinion::getRow((SharkMinion *)param_1);
  *(undefined4 *)(this + 0x1a8) = uVar1;
  return;
}


/* ToadstoolGas::~ToadstoolGas() */

void __thiscall ToadstoolGas::~ToadstoolGas(ToadstoolGas *this)

{
  *(undefined ***)this = &PTR_GetClass_069106d0;
  *(undefined ***)(this + 0x10) = &PTR__ToadstoolGas_069108c0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ToadstoolGas::~ToadstoolGas() */

void __thiscall ToadstoolGas::~ToadstoolGas(ToadstoolGas *this)

{
  ~ToadstoolGas(this + -0x10);
  return;
}


/* ToadstoolGas::~ToadstoolGas() */

void __thiscall ToadstoolGas::~ToadstoolGas(ToadstoolGas *this)

{
  ~ToadstoolGas(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ToadstoolGas::~ToadstoolGas() */

void __thiscall ToadstoolGas::~ToadstoolGas(ToadstoolGas *this)

{
  ~ToadstoolGas(this + -0x10);
  return;
}


/* ToadstoolGas::ToadstoolGas() */

void __thiscall ToadstoolGas::ToadstoolGas(ToadstoolGas *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_069106d0;
  *(undefined ***)(this + 0x10) = &PTR__ToadstoolGas_069108c0;
  return;
}


/* ToadstoolGas::StaticNew() */

ToadstoolGas * ToadstoolGas::StaticNew(void)

{
  ToadstoolGas *this;
  
  this = ::operator_new(0x1b0);
  ToadstoolGas(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToadstoolGas::StaticClassInit() */

void ToadstoolGas::StaticClassInit(void)

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
    std::string::string(asStack_10,"ToadstoolGas");
    (*pcVar2)(plVar1,asStack_10,FUN_0491e53c,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ToadstoolGas::StaticGetClass() */

long * ToadstoolGas::StaticGetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"ToadstoolGas",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ToadstoolGas::GetClass() const */

long * ToadstoolGas::GetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"ToadstoolGas",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToadstoolGas::OnCollideEntity(BoardEntity*) */

void __thiscall ToadstoolGas::OnCollideEntity(ToadstoolGas *this,BoardEntity *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  Zombie *this_00;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(aDStack_68);
  (**(code **)(*(long *)this + 0x178))(this,aDStack_68,0);
  if (((((param_1 != (BoardEntity *)0x0) &&
        (this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_00 != (Zombie *)0x0)) &&
       (cVar2 = (**(code **)(*(long *)this_00 + 0x328))(), cVar2 == '\0')) &&
      ((cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0' &&
       (cVar2 = Zombie::IsControlled(this_00), cVar2 == '\0')))) &&
     (cVar2 = Zombie::IsInvisible(this_00), cVar2 == '\0')) {
    cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)this_00);
    if ((cVar2 != '\0') &&
       ((iVar1 = *(int *)(this + 0x1a8), iVar1 < 0 ||
        (iVar3 = SharkMinion::getRow((SharkMinion *)param_1), iVar1 == iVar3)))) {
      (**(code **)(*(long *)this_00 + 0x110))(this_00,aDStack_68);
      (**(code **)(*(long *)this + 0x48))(this);
      goto LAB_0491e69c;
    }
  }
  cVar2 = '\0';
LAB_0491e69c:
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}

