// Class: ImpatiensProjectile_3


/* ImpatiensProjectile_3::~ImpatiensProjectile_3() */

void __thiscall ImpatiensProjectile_3::~ImpatiensProjectile_3(ImpatiensProjectile_3 *this)

{
  *(undefined ***)this = &PTR_GetClass_067c0710;
  *(undefined ***)(this + 0x10) = &PTR__ImpatiensProjectile_3_067c0908;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ImpatiensProjectile_3::~ImpatiensProjectile_3() */

void __thiscall ImpatiensProjectile_3::~ImpatiensProjectile_3(ImpatiensProjectile_3 *this)

{
  ~ImpatiensProjectile_3(this + -0x10);
  return;
}


/* ImpatiensProjectile_3::~ImpatiensProjectile_3() */

void __thiscall ImpatiensProjectile_3::~ImpatiensProjectile_3(ImpatiensProjectile_3 *this)

{
  ~ImpatiensProjectile_3(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ImpatiensProjectile_3::~ImpatiensProjectile_3() */

void __thiscall ImpatiensProjectile_3::~ImpatiensProjectile_3(ImpatiensProjectile_3 *this)

{
  ~ImpatiensProjectile_3(this + -0x10);
  return;
}


/* ImpatiensProjectile_3::ImpatiensProjectile_3() */

void __thiscall ImpatiensProjectile_3::ImpatiensProjectile_3(ImpatiensProjectile_3 *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067c0710;
  *(undefined ***)(this + 0x10) = &PTR__ImpatiensProjectile_3_067c0908;
  return;
}


/* ImpatiensProjectile_3::StaticNew() */

ImpatiensProjectile_3 * ImpatiensProjectile_3::StaticNew(void)

{
  ImpatiensProjectile_3 *this;
  
  this = ::operator_new(0x1a8);
  ImpatiensProjectile_3(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ImpatiensProjectile_3::StaticClassInit() */

void ImpatiensProjectile_3::StaticClassInit(void)

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
    std::string::string(asStack_10,"ImpatiensProjectile_3");
    (*pcVar2)(plVar1,asStack_10,FUN_04051a30,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ImpatiensProjectile_3::StaticGetClass() */

long * ImpatiensProjectile_3::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ImpatiensProjectile_3",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ImpatiensProjectile_3::GetClass() const */

long * ImpatiensProjectile_3::GetClass(void)

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
  (*pcVar3)(plVar1,"ImpatiensProjectile_3",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ImpatiensProjectile_3::applyConditions(BoardEntity*) */

ImpatiensProjectile_3 * __thiscall
ImpatiensProjectile_3::applyConditions(ImpatiensProjectile_3 *this,BoardEntity *param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  Zombie *this_00;
  ImpatiensProjectile_3 *pIVar4;
  
  if (param_1 != (BoardEntity *)0x0) {
    bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
    this = (ImpatiensProjectile_3 *)(ulong)bVar1;
    if ((bVar1) &&
       (this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1),
       this = (ImpatiensProjectile_3 *)0x0, this_00 != (Zombie *)0x0)) {
      bVar2 = Zombie::IsBoss(this_00);
      this = (ImpatiensProjectile_3 *)(ulong)bVar2;
      if (bVar2 == 0) {
        cVar3 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00);
        if ((cVar3 == '\0') &&
           (cVar3 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar3 == '\0')) {
          Zombie::ApplyCondition((Zombie *)0x3f800000,0,this_00,0x18,1);
          pIVar4 = (ImpatiensProjectile_3 *)
                   Zombie::ApplyCondition((Zombie *)0x3f800000,0,this_00,0x23,1);
          return pIVar4;
        }
        this = (ImpatiensProjectile_3 *)(**(code **)(*(long *)this_00 + 0x4e8))(this_00);
        if ((int)this == 1) {
          Zombie::ApplyCondition((Zombie *)0x3f800000,0,this_00,0x18,(ulong)this & 0xffffffff);
          pIVar4 = (ImpatiensProjectile_3 *)
                   Zombie::ApplyCondition
                             ((Zombie *)0x3f800000,0,this_00,0x23,(ulong)this & 0xffffffff);
          return pIVar4;
        }
      }
    }
  }
  return this;
}

